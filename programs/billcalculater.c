#include <stdio.h>


//By_Me


// void main() {
//     float unit_prize;
    // printf("Commercial user will be charged 500 rupees extra.\n");
    // printf("Residencial User will get 100 rupees discount on overall bill.\n");

//     int used_unit;
//     printf("Please enter the used units: \n");
//     scanf("%d",&used_unit);
//     if(used_unit<=100) {
//         unit_prize=15;
//        } else if (used_unit>100) {
//         unit_prize=25;
//         }
//     int total_bill= used_unit*unit_prize;
//     int meter_type;
//     int new_bill;
//     printf("please enter the meter type(0 for commercial and 1 for residencial): \n");
//     scanf("%d",&meter_type);
//     int bill_in_N;
//     if (meter_type==0) {
//     printf("Your bill is %d",total_bill+500);

//     } else if(meter_type==1){
//         bill_in_N=total_bill-100;
//     }
//      else if(bill_in_N>=0){
//         printf("Your bill is %d",bill_in_N);
//     }
//     else{
//         printf("You will get rupees 200 discount on your next bill");
//     }

// }

// By_Sir Arslan

//Indentation


// void main() {
//     printf("1 to 500, Unit rate will be 20 \n");
//     printf("More than 500, Unit rate will be 35");

//     printf("Commercial user will be charged 500 rupees extra.\n");
//     printf("Residencial User will get 100 rupees discount on overall bill.\n");

//     printf("1 is for Commercial Meter\n");
//     printf("0 is for Residential Meter\n");

//     int consumed_unites, total_bill, meter_type, unit_rate;

//     printf("Enter consumed unites: \n");
//     scanf("%d", &consumed_unites);

//     if(consumed_unites <= 0) {
//         total_bill = 0;
//     } else {
//         printf("Enter meter type: \n");
//         scanf("%d", &meter_type);

//         if(consumed_unites <= 500) {
//             unit_rate = 20;
//         } else {
//             unit_rate = 35;
//         }

//         if(meter_type == 1) {
//             total_bill = (unit_rate * consumed_unites) + 500;
//         } else {
//             total_bill = (unit_rate * consumed_unites) - 100;
//         }
//     }

//     printf("Your total bill is %d", total_bill);
// }

