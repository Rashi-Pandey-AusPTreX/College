#include<stdio.h>
struct person
{
    int id;
    char name[50];
    double salary;
};
int main()
    {
        FILE *fptr;
        int c;
        fptr=fopen("prog_4.txt","w");
        if(fptr==NULL)
        {
            printf("error file not found");
            return 1;
        }
        else
        {
            struct person a[2];
            for(int i=0;i<2;i++)
            {
                printf("enter name ");
                gets(a[i].name);
                printf("enter id");
                scanf("%d",&a[i].id);
                printf("enter salary");
                scanf("%lf",&a[i].salary);
                while ((c = getchar()) != '\n');
            }
            for(int i=0;i<2;i++)
            {
                fputs(a[i].name,fptr);
                fprintf(fptr,"%d",a[i].id);
                fprintf(fptr,"%lf",a[i].salary);
        }
    fclose(fptr);
    }
}