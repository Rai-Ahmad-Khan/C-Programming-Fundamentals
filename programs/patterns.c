#include <stdio.h>



// Write a program to find this pattern
// *
// **
// ***
// ****
// *****


int main() {
   

    // for(int x = 1; x <= 5; x++) {
    //     for(int y = 1; y<= x; y++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


//    1
//    12
//    123
//    1234
//    12345


//   for(int x = 1; x <= 5; x++) {
//         for(int y = 1; y<= x; y++) {
//             printf("%d",y);
//         }
//         printf("\n");
//     }


// 1
// 22
// 333
// 4444
// 55555



//   for(int x = 1; x <= 5; x++) {
//     for(int y = 1; y<= x; y++) {
//         printf("%d",x);
//     }
//     printf("\n");
// }



// *****
// ****
// ***
// **
// *



// for(int x = 1; x <= 5; x++) {
//     for(int y = 5; y>= 1; y--) {
//         printf("*");
//     }
//     printf("\n");
// }




// for(int x = 1; x <= 5; x++) {
//     for(int y = 5; y>= x; y--) {
//         printf("*");
//     }
//     printf("\n");
// }




//      * 
//     **
//    ***
//   ****
//  *****


    // for(int x = 1; x <= 5; x++) {
    //     for(int y = 5; y>= x; y--) {
    //         printf(" ");
    //     }
    //     for(int z = 1; z<= x; z++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }




//      **
//     ****
//    ******
//   ********
//  **********



// for(int x = 1; x <= 5; x++) {
//         for(int y = 5; y>= x; y--) {
//             printf(" ");
//         }
//         for(int z = 1; z<= x; z++) {
//             printf("*");
//         }
//          for(int z = 1; z<= x; z++) {
//             printf("*");
//         }
//         printf("\n");
//     }





//      **
//     ****
//    ******
//   ********
//  **********
//  **********
//   ********
//    ******
//     ****
//      **





for(int x = 1; x <= 5; x++) {

        for(int y = 5; y>= x; y--) {
            printf(" ");
        }
        for(int z = 1; z<= x; z++) {
            printf("*");
        }
        
        for(int z1 = 2; z1<= x; z1++) {
            printf("*");
        }

        printf("\n");
    }

for(int x = 1; x <= 5; x++) {
     for(int a = 1; a<= x; a++) {
            printf(" ");
        }
        for(int b = 5; b>= x; b--) {
            printf("*");
        }
         for(int c = 4; c>= x; c--) {
            printf("*");
        }
          printf("\n");
    }

  

}
