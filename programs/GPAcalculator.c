#include <stdio.h>

// void main() {
//     float marks;

//     printf("Enter your total marks: \n");
//     scanf("%f", &marks);

//     if(marks >= 85) {
//         printf("Your grade is A+");
//     } else if(marks >= 80) {
//         printf("Your grade is A");
//     } else if(marks >= 75) {
//         printf("Your grade is B+");
//     } else if(marks >= 70) {
//         printf("Your grade is B");
//     } else if(marks >= 65) {
//         printf("Your grade is C+");
//     } else if(marks >= 60) {
//         printf("Your grade is C");
//     } else if(marks >= 55) {
//         printf("Your grade is D");
//     } else if(marks >= 50) {
//         printf("Your grade is E");
//     } else if(marks < 50) {
//         printf("Your grade is F");
//     }
// }






//Function to convert marks to GPA

double marksToGPA(int marks) {
    if (marks >= 90) {
        return 4.0;
    } else if (marks >= 85) {
        return 3.5;
    }
    else if (marks >= 80) {
        return 3.0;
    }
    else if (marks >= 75) {
        return 2.5;
    } else if (marks >= 70) {
        return 2.0;
    }
    else if (marks >= 65) {
        return 1.5;
    } else if (marks >= 60) {
        return 1.0;
    } else {
        return 0.0;
    }
}

int main() {
    int num_Courses;
    printf("Enter the number of courses: ");
    scanf("%d", &num_Courses);

    double totalCredits = 0.0;
    double totalGradePoints = 0.0;

    for (int i = 1; i <= num_Courses; i++) {
        int marks;
        double credits;

        printf("Enter marks for course %d (0-100): ", i);
        scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
            printf("Invalid marks. Please enter marks between 0 and 100.\n");
            i--;
            continue;
        }
        printf("Enter credit hours for course %d: ", i);
        scanf("%lf", &credits);
        if (credits < 0 || credits > 4) {
                printf("Invalid Credit Hours. Please enter Credit Hours between 0 and 4.\n");
                i--;
                // continue;
            }
        double gpa = marksToGPA(marks);
        totalCredits = totalCredits + credits;
        totalGradePoints =totalGradePoints + (gpa * credits);
    }
        double gpa = totalGradePoints / totalCredits;
        printf("Your GPA is: %f\n", gpa);
   
    return 0;
}

