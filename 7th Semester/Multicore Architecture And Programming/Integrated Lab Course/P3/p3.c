#include<stdio.h>
#include<pthread.h>

int data[100];
int found_index=-1;
pthread_mutex_t lock;

void* search(void* arg){
	long id=(long)arg;
	int start=id*25;
	for(int i=start; i<start+25; i++){
		if(data[i]==50){
			pthread_mutex_lock(&lock);
			found_index=i;
			pthread_mutex_unlock(&lock);
		}
	}
	return NULL;
}

int main(){
	pthread_t t[4];
	pthread_mutex_init(&lock, NULL);
	for(int i=0; i<100; i++)
		data[i]=i+1;
	for(long i=0; i<4; i++)
		pthread_create(&t[i], NULL, search, (void*)i);
	for(int i=0; i<4; i++)
		pthread_join(t[i], NULL);
	printf("Element found at index: %d.\n", found_index);
	return 0;
}
