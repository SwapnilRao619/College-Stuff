#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void main() {
    int fd1[2], fd2[2];
    char fixed_str[] = "Security.org";
    char input_str[100],concat_str[200];

    pipe(fd1);
    pipe(fd2);

    printf("Enter the string to be concatenated upon: ");
    scanf("%s", input_str);

    if(fork() < 0){
	    printf("\nPipe failed");
	    return;
    }
    if(pipe(fd1)==-1){
	    printf("\nPipe failed");
            return;
    }
    if(pipe(fd2)==-1){
            printf("\nPipe failed");
            return;
    }

    if (fork() > 0) {
        close(fd1[0]);
        write(fd1[1], input_str, strlen(input_str) + 1);
        close(fd1[1]);
        wait(NULL);
        
        close(fd2[1]);
        read(fd2[0], concat_str, sizeof(concat_str));
        printf("Concatenated string: %s\n", concat_str);
        close(fd2[0]);
    } else {
        close(fd1[1]);
        read(fd1[0], concat_str, sizeof(concat_str));
        close(fd1[0]);
        
        strcat(concat_str, fixed_str); //You could also use i=0, k=strlen(cs) and in a for loop, cs[k]=is[i] where i goes till strlen(is)
        
        close(fd2[0]);
        write(fd2[1], concat_str, strlen(concat_str) + 1);
        close(fd2[1]);
    }
}


