#include<stdio.h>
#include<pthread.h>

int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
int C[3][3];

void* add(void* arg){
	long r=(long)arg;
	for(int c=0;c<3;c++)
		C[r][c]=A[r][c]+B[r][c];
	return NULL;
}

int main(){
	pthread_t t[3];
	for(long i=0; i<3; i++)
		pthread_create(&t[i], NULL, add, (void*)i);
	for(int i=0; i<3; i++)
		pthread_join(t[i], NULL);
	printf("Resultant matrix:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
			printf("%d ",C[i][j]);
		printf("\n");
	}
	return 0;
}
