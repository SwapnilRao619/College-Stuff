/*P2:Define an EMPLOYEE structure with members Emp_name, Emp-id,
Dept-name and Salary. Read and display data of N employees.
Employees may belong to different departments. Write a function to
find total salary of employees of a specified department. Use the
concept of pointer to structure and allocate the memory dynamically to
EMPLOYEE instances */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void netsal(char d[20]);
struct emp{
    char name[50];
    int id;
    char dept[20];
    float sal;
}(*p);
int n;

void main(){
    int i;
    char d[20];
    printf("\nEnter the number of employee: \n");
    scanf("%d",&n);
    p=(struct emp*)malloc(n*sizeof(struct emp));
    
    printf("Enter the employee details:\n");
    for(i=0;i<n;i++){
        printf("Enter name of employee %d: ",i+1);
        scanf("%s",(p+i)->name);
        printf("Enter ID of employee %d: ",i+1);
        scanf("%d",&(p+i)->id);
        printf("Enter department of employee %d: ",i+1);
        scanf("%s",(p+i)->dept);
        printf("Enter salary of employee %d: ",i+1);
        scanf("%f",&(p+i)->sal);
    }
    
    printf("\nThe employee details are: \n");
    for(i=0;i<n;i++){
        printf("\nName of employee %d: %s",i+1,(p+i)->name);
        printf("\nID of employee %d: %d",i+1,(p+i)->id);
        printf("\nDepartment of employee %d: %s",i+1,(p+i)->dept);
        printf("\nEnter salary of employee %d: %f\n",i+1,(p+i)->sal);
    }
    
    printf("\nEnter the department of which you want to find net salary: \n");
    scanf("%s",d);
    netsal(d);
}

void netsal(char d[20]){
    float sum=0;
    for(int i=0;i<n;i++){
        if(strcmp((p + i)->dept, d) == 0){
            sum+=((p+i)->sal);
        }
    }
    printf("\nSum is: %f",sum);
}