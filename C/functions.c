#include <stdio.h>   // Prreprocessor directive //from library
#include <math.h> //for power
// //declaration
// void hello();
// void bye();

//                                                                     // Compiler move in a sequence while calling: line to line
// int main() { 
//     hello(); //call
//     bye();
//     return 0;
// }

// // function definition
// void hello() {
//     printf("Hello World \n");
// }

// void bye() {
//     printf("bye World \n");
// }



// void pakistani(); //is intializing by void neccessory?
// void indian();

// int main() {
//      char ch;

//     printf("Enter your Identity : \n");
//     scanf("%c", &ch);

//     if(ch=='p') {
//         pakistani();
//     } else if(ch=='i') {
//         indian();
//     }
//     return 0;
    
// }

// void pakistani() {
//    printf("User is Pakistani");
// }
// void indian() {
//     printf("User is Indian");
// }




//Properties

//--- Execution always starts from "main"
//--- A function gets called directly or indirectly from main
//--- There can be multiple functions in a program



// Function Types

//Library Define: Special Functions inbuilt in C/other languages
    //e.g :
    //Printf();
    //scanf();
//User Define: Declear and defined by programmer 


//Passing Arguments

// functions can take value: Parameter, and give some value: return value




// int print_table(int x); //parameter

// int main() {
//     int n;
//     printf("Enter the number to draw a table : \n");
//     scanf("%d", &n);

//     print_table(n); // Actual parameter    //Argument
// }

// int print_table(int x) { //formal parameter // parameter
//     for(int i=1; i<=10; i++){
//     printf("%d * %d = %d\n", x, i, x*i);
//     }
    
// }



// Note

//a. Function can only return one value at a time
//b. Changes to parameters in function don't change the value in calling fuction.
//    --- Because a copy of argument is passed to the function---



//Question: Use a library function to calculate the squre of a number given by user.



void power_of(float n);

int main() {
    int a;
   

    printf("Enter the number : \n");
    scanf("%d",&a);
    power_of(a);

    // return 0;
}

void power_of(float n) {
    printf("%f", pow(n, 2)); // "pow's" return data type is double. So float is a big data type, it works here 
}
