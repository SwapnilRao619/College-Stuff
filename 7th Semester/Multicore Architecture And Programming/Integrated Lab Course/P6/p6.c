#include <stdio.h>
#include <pthread.h>

int bread = 0;
pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t c = PTHREAD_COND_INITIALIZER;

void* prod(void* arg) {
    while(1) {
        pthread_mutex_lock(&m);
        // Wait if FULL (Limit 5)
        while(bread == 5) pthread_cond_wait(&c, &m);
        
        bread++;
        printf("Produced: %d\n", bread);
        
        pthread_cond_signal(&c);
        pthread_mutex_unlock(&m);
    }
}

void* cons(void* arg) {
    while(1) {
        pthread_mutex_lock(&m);
        // Wait if EMPTY (Limit 0)
        while(bread == 0) pthread_cond_wait(&c, &m);
        
        bread--;
        printf("Consumed: %d\n", bread);
        
        pthread_cond_signal(&c);
        pthread_mutex_unlock(&m);
    }
}

int main() {
    pthread_t p, k;
    pthread_create(&p, NULL, prod, NULL);
    pthread_create(&k, NULL, cons, NULL);
    
    pthread_join(p, NULL);
    pthread_join(k, NULL);
    return 0;
}
