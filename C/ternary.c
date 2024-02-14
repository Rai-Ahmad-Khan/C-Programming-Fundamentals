#include <stdio.h>


//Ternary
//condition ? dosomething if TRUE:dosomething if FALSE;

//When we are facing multiple lines in the forms of if else if etc. So it can be shorten by the use of ternary operater.

int main() {
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);
    age >= 18 ? printf("Adult \n") : printf("Not Adult \n");
    return 0;
}



//It is important for interview perspective but not widly use, but its good to use it.