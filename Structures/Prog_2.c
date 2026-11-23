#include<stdio.h>
#include<string.h>
typedef struct marks
{
    int roll;
    char name[50];
    int chem;
    int maths;
    int phy;
}marks;
int main()
    {
        marks a[5];
        int per=0,c=0,p=0,m=0;
        for(int i=0;i<2;i++)
        {   printf("enter roll no");
            scanf("%d",&a[i].roll);
            printf("name");
            gets(a[i].name);
            //scanf("%s",a[i].name);
            printf("Marks (3times):");
            scanf("%d",&a[i].chem);
            scanf("%d",&a[i].maths);
            scanf("%d",&a[i].phy);
            printf("percentage of student \n");
            per=((a[i].chem + a[i].maths + a[i].phy)/300)*100;
            printf("%d",per);
            printf("\n");
        } return 0;
    }
