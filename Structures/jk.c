#include <stdio.h>

union Student {
    long int roll_no;
    char name[34];
    int age;
    char courses[5][21];
};

int main(void) {
printf("Size of union Student = %zu bytes\n", sizeof(union Student));
printf("Size of courses array = %zu bytes\n", sizeof(((union Student *)0)->courses));
    return 0;
}
