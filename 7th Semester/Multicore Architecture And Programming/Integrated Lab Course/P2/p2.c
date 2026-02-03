#include<stdio.h>
#include<pthread.h>

long long results[4];

void* fact(void* arg){
	long id=(long)arg;
	long long f=1;
	for(int i=1; i<=5+id; i++)
		f*=i;
	results[id]=f;
	return NULL;
}

int main(){
	pthread_t t[4];
	for(long i=0; i<4; i++)
		pthread_create(&t[i], NULL, fact, (void*)i);
	for(long i=0; i<4; i++){
		pthread_join(t[i], NULL);
		printf("Factorial calculated by thread %ld is: %lld.\n",i,results[i]);
	}
	return 0;
}
