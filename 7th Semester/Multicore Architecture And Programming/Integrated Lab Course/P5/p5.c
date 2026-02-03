#include <stdio.h>
#include <pthread.h>

int bal = 1000; // Global Balance
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; // Auto-init mutex

// Thread Function
void* trans(void* arg) {
    long amt = (long)arg; // Get amount directly
    
    pthread_mutex_lock(&lock); // 1. Lock
    
    // 2. Critical Section
    if (bal + amt >= 0) {
        bal += amt;
        printf("Success: %ld | Bal: %d\n", amt, bal);
    } else {
        printf("Denied: %ld\n", amt);
    }
    
    pthread_mutex_unlock(&lock); // 3. Unlock
    return NULL;
}

int main() {
    pthread_t t[5];
    int amts[5] = {-200, 100, -300, 150, -400}; // The transactions

    // Create threads, passing the amount directly
    for(long i=0; i<5; i++) 
        pthread_create(&t[i], NULL, trans, (void*)(long)amts[i]);

    // Join threads
    for(int i=0; i<5; i++) pthread_join(t[i], NULL);

    printf("Final Balance: %d\n", bal);
    return 0;
}
