#include <stdio.h>

// int main() {
//     int day;
//     printf("Enter the day : \n");
//     scanf("%d", &day);
//     switch (day)
//     {
//     case 1: printf("monday");
//         break;

//     case 2: printf("tuesday");
//         break;

//     case 3: printf("wednesday");
//         break;

//     case 4: printf("thursday");
//         break;

//     case 5: printf("friday");
//         break;

//     case 6: printf("saturday");
//         break;
    
//     default: printf("sunday");
//     }

//     return 0;
// }


int main() {
    char day;
    printf("Enter the day : \n");
    scanf("%d", &day);
    switch (day)
    {
    case 'm': printf("monday");
        break;

    case 't': printf("tuesday");
        break;

    case 'w': printf("wednesday");
        break;

    case 'T': printf("thursday");
        break;

    case 'f': printf("friday");
        break;

    case 's': printf("saturday");
        break;

    case 'S': printf("saturday");
        break;    
    
    default: printf("Not valid");
    }

    return 0;
}

//Nested switch are also allowed