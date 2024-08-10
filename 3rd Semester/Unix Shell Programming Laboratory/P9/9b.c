#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
#include<fcntl.h>
#include<dirent.h>

struct dirent *dir;
DIR *dp;
char name[50];

void main(){
	printf("\nEnter the directory name: ");
	scanf("%s",name);
	dp=opendir(name);
	if(dp){
		while((dir=readdir(dp))!=NULL){
			printf("%s\n",dir->d_name);
		}
	}
	else{
		printf("\nDirectory not found");
	}
}

