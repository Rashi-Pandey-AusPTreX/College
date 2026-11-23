#include<stdio.h>
struct Emp
{
    int id;
    char name[50];
    double salary;
};
int main()
{
    struct Emp data[2];
    FILE *fptr;
    fptr=fopen("x.txt","w");
    if(fptr==NULL)
    {
        printf("Error File Not Opened");
        return 1;
    }
    for (int i=0;i<2;i++)
    {
        printf("enter name ");
        gets(data[i].name);
        printf("enter id");
        scanf("%d",&data[i].id);
        printf("enter salary");
        scanf("%lf",&data[i].salary);
    }
    for (int i=0;i<2;i++)
    {
        fputs(data[i].name,fptr);
        fprintf(fptr,"%d\n%d\n",data[i].id,data[i].id);
    }
    fclose(fptr);
    return 0;
}