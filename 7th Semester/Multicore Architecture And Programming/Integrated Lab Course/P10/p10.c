#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // for sleep

// Global tasks array (Pre-filled to save lines in main)
int tasks[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void* worker(void* arg) {
    long id = (long)arg;
    
    // The "Stride" Loop: Start at ID, jump by 4 (Num Threads)
    for (int i = id; i < 10; i += 4) {
        printf("Thread %ld processing task %d\n", id, tasks[i]);
        sleep(1);
    }
    return NULL;
}

int main() {
    pthread_t t[4];

    // Create 4 threads
    for (long i = 0; i < 4; i++) 
        pthread_create(&t[i], NULL, worker, (void*)i);

    // Join 4 threads
    for (int i = 0; i < 4; i++) pthread_join(t[i], NULL);

    return 0;
}
