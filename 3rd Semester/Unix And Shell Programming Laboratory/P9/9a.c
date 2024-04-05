#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<time.h>
#include<sys/stat.h>

void main(int argc, char *argv[]){
	int f1,f2;
	char buf[50];
	long int n;
	if(((f1=open(argv[1],O_RDONLY))==-1||((f2=open(argv[2],O_CREAT|O_WRONLY|O_TRUNC,0700))==1))){
		perror("File open error");
		exit(1);
	}
	while((n=read(f1,buf,50))>0){
		if(write(f2,buf,n)!=n){
			perror("Problem in writing");
			exit(3);
		}
	}
	if(n==-1){
		perror("Problem in reading");
		exit(2);
	}
	close(f2);
	exit(0);
}
