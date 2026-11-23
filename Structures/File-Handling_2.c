/*
   Making Changes in File-Handling_1.c
   using array to savve one batch of numbers
   adding N no. of arrays (malloc/calloc)
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    int sum=0,**arr,n,a,no;
    printf("Enter No. of Sets of Values to be saved: ");
    arr=(int**)malloc(no*sizeof(int *));
    fp=fopen("File-Handling_1.txt","w");
    if (fp==NULL){printf("Error File Not Opened");return 1;}
    for (int j=0;j<no;j++)
    {
        for (int i=0;i<n;i++)
        {
            printf("Enter No. of Values in Set %d", j+1);
            arr=(int*)malloc(n*(sizeof(int)));
            if (arr==NULL){printf("Memory Allocation Failed");}
            scanf("%d",&arr[i]);
            fprintf(fp,"%d\n",a);
        }
        fclose(fp);
        fp=fopen("File-Handling_1.txt","r");
        if (fp==NULL){printf("Error File Not Opened");return 1;}
    }
    for (int j=0;j<no:j++)
    {
        while (!(feof(fp)))
            {
            for(int i=0;i<n;i++)
            {
                fscanf(fp,"%d\n",&a);
                sum+=a;
                fprintf(fp,"For Set %d Sum= %d\n",j+1,sum)
            }
        }
    }
    fclose(fp);
    return 0;
}