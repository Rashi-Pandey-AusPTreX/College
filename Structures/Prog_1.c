#include<stdio.h>
struct Marks
{
    char name[50];
    int roll, chem, phy, maths;
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
int main()
{
    struct Marks a[5];
    float per;
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i].roll);
        scanf("%[^\n]",a[i].name);
        scanf("%d",&a[i].maths);
        scanf("%d",&a[i].phy);
        scanf("%d",&a[i].chem);
    }
    for (int i=0;i<5;i++)
    {
        per=(a[i].chem+a[i].phy+a[i].maths);
        printf("%d",per);
    }
    return 0;
}

                                          