#include <stdio.h>


//Table

// void main() {
//     int table_of_2=2;
//     for(int i=1; i <= 10; i++) {
//         printf("%d * %d = %d\n",table_of_2,i,i*table_of_2);
//     }
// }



////Incomplete

// void main() {
//     int table, target, index;
//     printf("Enter the desired digit to draw the table: \n");
//     scanf("%d", &table);
//     printf("From where you want to initialize it: \n");
//     scanf("%d",&index);
//     printf("till where you want to draw: \n");
//     scanf("%d",&target);

//     if(index>=target) {
//  
//             printf("Error: Enter the valid target which must be greater than initializer");
//         
//     } else {
//          for(int i=index; i <= target; i++) {
//          printf("%d * %d = %d\n",table,i,i*table);
//         }
//     } 
// }



//Complete

// void main() {
//     int table, end, start;

//     printf("Enter the desired digit to draw the table: \n");
//     scanf("%d", &table);

//     printf("From where you want to initialize it: \n");
//     scanf("%d",&start);

//     printf("till where you want to draw: \n");
//     do {
//         scanf("%d",&end);
//         if(end<=start) {
//             printf("Error: Enter the valid ending number which must be greater than initializer \n");
//         }
//     } while(end<=start);

//     for(int i=start; i <= end; i++) {
//         printf("%d * %d = %d\n",table,i,i*table);
//     }  
// }


// void main() {
//     int table=2;
//     for(int i=100; i >= 1; i--) {
//         printf("%d * %d = %d\n",table,i,i*table);
//     }  
// }


//Reverse Table
void main() {
    int table, end, start;

    printf("Enter the desired digit to draw the table: \n");
    scanf("%d", &table);

    printf("From where you want to initialize it: \n");
    scanf("%d",&start);

    printf("till where you want to draw: \n");
    scanf("%d",&end);

    for(int i=end; i >= start; i--) {
        printf("%d * %d = %d\n",table,i,i*table);
    }  
}

