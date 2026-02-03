#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // Required for sleep()

// Static initialization of 2 mutexes
pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t m2 = PTHREAD_MUTEX_INITIALIZER;

void* worker(void* arg) {
    long id = (long)arg;

    if (id == 0) {
        pthread_mutex_lock(&m1);      // Lock Resource 1
        sleep(1);                     // Simulate delay (causes conflict)
        printf("Thread 0: Waiting for m2...\n");

        // The "Timeout" Check: Try to lock, if fail, back off
        if (pthread_mutex_trylock(&m2) == 0) pthread_mutex_unlock(&m2);
        else printf("Thread 0: Failed m2 -> Releasing m1 (Backoff)\n");

        pthread_mutex_unlock(&m1);
    } 
    else {
        pthread_mutex_lock(&m2);      // Lock Resource 2
        sleep(1);
        printf("Thread 1: Waiting for m1...\n");

        // The "Timeout" Check
        if (pthread_mutex_trylock(&m1) == 0) pthread_mutex_unlock(&m1);
        else printf("Thread 1: Failed m1 -> Releasing m2 (Backoff)\n");

        pthread_mutex_unlock(&m2);
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    // Create 2 threads with IDs 0 and 1
    pthread_create(&t1, NULL, worker, (void*)0);
    pthread_create(&t2, NULL, worker, (void*)1);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
