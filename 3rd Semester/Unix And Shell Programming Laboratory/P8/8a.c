#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<dirent.h>
#include<unistd.h>
#include<time.h>

void main(){
int fd1,fd2;
char buf[50];

if((fd1=open("t1.txt",O_RDWR,0777))<0)
printf("File open error");
fd2=dup(fd1);

read(fd1,buf,12);
lseek(fd2,0,SEEK_END);
write(fd2,buf,12);
}
