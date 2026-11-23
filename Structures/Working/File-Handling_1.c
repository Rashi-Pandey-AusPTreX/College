/*
    Write a C program that creates a 
    file scores.txt,
    writes the integers 10, 20, 30 on separate lines,
    closes it,
    then reopens it and
    prints the sum of the numbers.
*/

#include<stdio.h>
int main()
{
    FILE *fp;
    int sum=0,n,a;
    fp=fopen("File-Handling_1.txt","w");
    if (fp==NULL){printf("Error File Not Opened");return 1;}
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter Values\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a);
        fprintf(fp,"%d\n",a);
    }
    fclose(fp);
    fp=fopen("File-Handling_1.txt","r");
     if (fp==NULL){printf("Error File Not Opened");return 1;}
    while (!(feof(fp)))
{
        for(int i=0;i<n;i++)
        {
            fscanf(fp,"%d\n",&a);
            sum+=a;
        }
    }
    printf("%d",sum);
    fclose(fp);
    return 0;
}