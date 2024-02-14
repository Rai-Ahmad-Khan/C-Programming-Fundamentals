#include <stdio.h>
// void main() {
//     int table, target, index;
    
//     printf("Enter the desired digit to draw the table: \n");
//     scanf("%d", &table);

//     printf("From where you want to initialize it: \n");
//     scanf("%d", &index);
    
//     printf("till where you want to draw: \n");
//     scanf("%d", &target);

//     for(int i=index; i <= target; i++) {
//         printf("%d * %d = %d\n",table,i,i*table);
//     }
// }




// void main() {
//     int n;
//     int factorial = 1;

//     printf("Enter a Number:  \n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; ++i) {
//         factorial=factorial*i;
//     }
//     printf("The Factorial of %d is: %d (MarkupSoft factorial finder)", n, factorial);
// }



// void main() {
//     int n, factorial = 1;
    
//     printf("Enter a Number: \n");
//     scanf("%d", &n);

//     printf("This is the factorial of %d! = ", n);

//     for (int i = n; i >1; i--) {
//         printf("%d * ", i);
//         factorial= factorial * i;
//     }
    
//     printf("1= %d", factorial)
// }

// void main() {
//     char status;

//     printf("Enter phone-status: W for working and D for dead: \n");
    

//     do {
//         // status= getchar();
//         scanf("%c", &status);
//         if(status=='W' || status=='w') {
//             printf("your phone is working");
//         } else if(status=='D' || status=='d') {
//             printf("your phone is Dead");
//         } else {
//             printf("Enter the valid character \n");
//         }
//     } while(status!='W' && status!='w' && status!='D' && status!='d' );
         
// }



// void main() {
//     int n;
//     printf("Enter an ending number: \n");
//     scanf("%d",&n);
//     printf("Even numbers till %d are: ",n);
   
//     for(int i=2; i<=n; i=i+2) {
//         // if(i % 6 == 0) {
            
//         // } else if(i %10==0) {
            
//         // } else {
//         //     printf("%d  ",i);
//         // }

//         if(i % 6 == 0 || i % 10 == 0) {
            
//         } else {
//             printf("%d  ",i);
//         }
//     }
// }


// int main() {
//     int a;
//     scanf("%d",&a);
//     if(a%2==0) {
//         printf("%d is divisible",a);
//     } else {
//         printf("%d is not divisible",a);
//     }
// }
// int main() {
//     int a;
//     scanf("%d",&a);
//     printf("%d",a%2==0);
// }

// int main() {
//     int a;
//     int b=a;
//     // scanf("%d",&a);
//     printf("%d",a%2==0);
// }

//not valid

// int main() {
//     char a="aa";
//     printf("%d",a);
// }



// int main() {
//     int isSunday=1;
//     int isSnowing=1;
//     printf("%d",isSunday==1 && isSnowing==1);
// }

// int main() {
//     int isSunday=1;
//     int isSnowing=1;
//     printf("%d",isSunday && isSnowing);
// }


// int main() {
//     int isNo=10;
   
//     printf("%d", isNo>9 && isNo<100);
// }

// int main() {
//     int x=10;
   
//     if(x = 0) { // its the matter of true and false
//         printf("X is equal to 1");
//     } else {
//         printf("X is not equal to 1");
//     }
// }


// int main() {
// char ch;
// scanf("%c", &ch);
// if(ch>='A' && ch<='Z') {
//     printf("Upper Case");
// }    
// else if(ch>='a' && ch<='z') {
//     printf("Lower case");
// }    
// }



//Write a program too keep asking for number untl user enters an odd number.


// int main(){
//     int n;
//     do {
//         printf("Enter the number :\n");
//         scanf("%d", &n);

//         if(n % 2==1) {
//             break;
//         }

//     } while(1);
//     printf("Thanks");
// }

//until a no divisible of 7

// int main(){
//     int n;
//     do {
//         printf("Enter the number :\n");
//         scanf("%d", &n);

//         if(n % 7==0) {
//             break;
//         }

//     } while(1);
//     printf("Thanks");
// }


// except divisible of 7, enter 1 to 100 numbers.
// int main(){

//   for (int n=1; n<=100; n++) {
//     if(n % 7 ==0) {
//         continue;
//     }
//     printf("%d \n",n);
//   }
// }

//All the odd numbers from 5 to 50.

//here are three different ways

// int main(){

//   for (int n=5; n<=50; n++) {
//     if(n % 2 ==0) {
//         continue;
//     }
//     printf("%d \n",n);
//   }
// }



// int main(){

//   for (int n=5; n<=50; n++) {
//     if(n % 2 ==1) {
//         printf("%d \n",n);
//     }
//   }
// }



// int main(){

//   for (int n=5; n<=50; n++) {
//     if(n % 2 !=0) {
//         printf("%d \n",n);
//     }
//   }
// }

// // Write a program which number is greater.
// void main() {   
//     int a,b,c;
//     printf("Enter 1st value : \n");
//     scanf("%d",&a);

//     printf("Enter 2nd value : \n");
//     scanf("%d",&b);

//     printf("Enter 3rd value : \n");
//     scanf("%d",&c);

//     if(a>b && a>c) {
//         printf("1st number is greater");
//     } else if(b>a && b>c) {
//         printf("2nd number is greater");
//     } else if(c>b && c>a) {
//         printf("3rd number is greater");
//     }        
// }




