/*
    #Page Number 115 <Working with C>
    #Ques:  While purchasing certain items,
            discount of 10% is offered
            if the quantity of purchase is more then 1000
            If quantity and price per item are input through the keyboard,
            WAP to calculate total expense.
    
    #Algo:  INPUT amt  , ppi
            INIT total=0;
            CALC total=amt*ppi
            IF amt>1000 ; total-=total*0.1

*/

#include<stdio.h>
struct sales
{
    int amt;
    float total, ppi;
};
int main()
{
    struct sales s;
    printf("Enter ")
}