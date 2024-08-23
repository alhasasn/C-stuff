#include <stdio.h>
#define RANDOM_VAR 23 // another way of making constants



int main(void){
    //claculating the dimensional weight of a box with user input


    int length;
    int  breadth;
    int width;



    printf("Enter the length of the box : ");
    scanf("%d", &length);

    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    printf("Enter the width : ");
    scanf("%d", &width);

    float volume;
    volume = length * breadth * width;

    float dim_weight;
    dim_weight = volume / 166; // divided by 166 for domestic shipping

    printf("The dimensional weight of the box is %.4f", dim_weight);

    return 0;
}
