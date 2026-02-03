#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define SIZE 100
int arr[SIZE], temp[SIZE]; // Global arrays

// 1. Standard Merge Function
void merge(int l, int mid, int r) {
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r) 
        temp[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r)   temp[k++] = arr[j++];
    for (i = l; i <= r; i++) arr[i] = temp[i];
}

// 2. Serial Merge Sort (Used by threads)
void merge_sort(int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        merge_sort(l, mid);
        merge_sort(mid + 1, r);
        merge(l, mid, r);
    }
}

// 3. Thread Function: Sorts 1/4th of the array
void* runner(void* arg) {
    long id = (long)arg;
    int start = id * (SIZE / 4);
    int end = start + (SIZE / 4) - 1;
    merge_sort(start, end);
    return NULL;
}

int main() {
    pthread_t t[4];
    // Init array
    for (int i = 0; i < SIZE; i++) arr[i] = rand() % 1000;

    // Create 4 threads (Each sorts a quarter)
    for (long i = 0; i < 4; i++) 
        pthread_create(&t[i], NULL, runner, (void*)i);
    
    // Join threads
    for (int i = 0; i < 4; i++) pthread_join(t[i], NULL);

    // Final Merges (Merge 4 parts into 1)
    // 1. Merge Q1 & Q2 -> First Half
    merge(0, (SIZE/4)-1, (SIZE/2)-1);
    // 2. Merge Q3 & Q4 -> Second Half
    merge(SIZE/2, (3*SIZE/4)-1, SIZE-1);
    // 3. Merge Two Halves -> Sorted Array
    merge(0, (SIZE/2)-1, SIZE-1);

    printf("Sorted Array:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
