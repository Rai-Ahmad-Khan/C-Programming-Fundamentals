#include <stdio.h>


int check_prime(int n) {

    for (int x = 2; x*x <= n; x++) {
        if (n % x == 0) {
            return 0; 
        }
    }
    
    return 1; // It's prime
};


int main() {
    // int n1;
    // int count = 0;

    // printf("Enter number: \n");
    // scanf("%d", &n1);

  
    // printf("The prime number between %d and %d are: ",n1, n2);
    // for (int i = n1; i <= n2; i++) {
    //     if (check_prime(i)) {
    //         printf(" %d " ,i);
    //     }
    // }
    // return 0;

//     for(int i = 2; i<=n1; i++) {
//         if(n1 % i == 0) {
//             count++;
//         }
//     }
//     if(count == 1) {
//         printf("%d is a prime number",n1);
//     } else {
//         printf("%d is not a prime number",n1);
//     }
// }








    int n1;
    int count = 0;

    printf("Enter number: \n");
    scanf("%d", &n1);

    for(int i = 2; i<=n1/2; i++) {
        if(n1 % i == 0) {
            count++;
        }
    }
    if(count == 0) {
        printf("%d is a prime number",n1);
    } else {
        printf("%d is not a prime number",n1);
    }
}
















