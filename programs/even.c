#include <stdio.h>




void main() {
    int n;
    
    printf("Enter an ending number: \n");
    scanf("%d", &n);
   
   while(n %2==1) {                                       // (n % 2 !=0) It can also be used
        printf("Please enter an even number\n");
        scanf("%d", &n);
   }
   printf("Even numbers till %d are: ", n);
   for (int i = 2; i <= n; i += 2) {
            printf("%d ", i);
        }
        // for (int i = 2; i <=n; i++) {
        //     if(i % 2 == 0) {
        //         printf("%d ", i);
        //     }
        // }
}

