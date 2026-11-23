#include<stdio.h>
struct person
{
    int id;
    char name[50];
    double salary;
};
int main()
    {
        int sum=0,n,b,c;
        FILE *fptr;
        fptr=fopen("x.txt","w");
        if(fptr==NULL)
        {
            printf("error file not found");
            return 1;
        }
        else
        {
            printf("enter the numbers to be inputted \n");
            scanf("%d",&n);
            int a[n];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(int i=0;i<n;i++)
            {
                fprintf(fptr,"%d\n",a[i]);
            }
            fclose(fptr);
            fptr=fopen("x.text","r");
            for(int i=0;i<n;i++)
            {
                fscanf(fptr,"%d",&a[i]);
                sum=sum+a[i];
            }printf("%d",sum);
} 
}