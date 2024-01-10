/*This program is having the user enter 10 numbers and
the finding which numbers in the set of 10 are the largest and then the smallest. Then
when it finds the largest and smallest numbers it prints out saying which each one is.*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

void max_min(int *a, int *max, int *min);

int main(){

    /*Declaring the variables that will be used for the main set of code*/
    int j, b[N], big, small;

    /*Telling the user to enter the 10 numbers they want to use*/
    printf("Enter %d numbers: ", N);

    /*This is using the for loop to find the next element in the array to be used*/
    for(j = 0; j < N; j++)
        scanf("%d", &b[j]);

    /*This tells the program to print out which is the largest and the smallest
    when it finds it and then tells the user which is which*/
    max_min(b, &big, &small);
    printf("The largest number is: %d\n", big);
    printf("The smallest number is: %d\n", small);

    return 0;
}

/*This part of the code is declaring and initializes the function below*/
void max_min(int *a, int *max, int *min){

    /*This part is declaring the pointer p here*/
    int *p;

    /*This part is assigning the the numbers for the numbers the users entered to the variables*/
    *max = *a;
    *min = *a;

    /*This is a for loop to see if the numbers in the variable change with the if statement to make
    sure it is choosing the largest and smallest number*/
    for(p = a; p < a + N; p++){
        if(*p > *max){
            *max = *p;
        }
        else if(*p < *min){
            *min = *p;
        }
    }
}

