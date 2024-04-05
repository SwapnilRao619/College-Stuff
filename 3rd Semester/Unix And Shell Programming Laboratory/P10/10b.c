#include<stdio.h>
#include<string.h>

void main() {
    char fn[100], pat[100], temp[200];
    printf("Enter file name and pattern to be searched: ");
    scanf("%s %s", fn, pat);
    FILE *fp = fopen(fn, "r");
    int found = 0;
    while(fgets(temp, 200, fp)) {
        if(strstr(temp, pat)) {
            found = 1;
            break;
        }
    }
    fclose(fp);
    if(found)
        printf("Yes, pattern found in file.\n");
    else
        printf("No, pattern not found in file.\n");
}

