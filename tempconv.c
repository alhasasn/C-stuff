/*
*Farenheit to celcius  converter
*/

#include <stdio.h>
#define SPECIAL_FLOAT (5.0f/9.0f) //Macro definition
#define FREEZING_POINT 32.0f


int main(void){
    float far_temp;
    float cel_temp;

    printf("Enter a temperature in farenheit : ");
    scanf("%f", &far_temp); // you can't use .nf in scanf'

    cel_temp = SPECIAL_FLOAT * (far_temp - FREEZING_POINT);
    printf("The value of %.3fF in celius is %.1fC\n", far_temp, cel_temp);
    int point;
    point =231;


    return 0;
}
