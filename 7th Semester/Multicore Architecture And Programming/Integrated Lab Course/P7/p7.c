#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(){
	int arr[1000];
	int sum=0;

	for(int i=0; i<1000; i++)
		arr[i]=rand()%100;
	#pragma omp parallel for reduction(+:sum)
        for(int i=0; i<1000; i++)
		sum+=arr[i];
	printf("The sum is: %d.\n",sum);
	return 0;
}	
