#include <stdio.h>


#define SPECIAL_RATIO 4.0f/3.0f // doing it as 4/3 will cause it to be rounded to 1
#define PI 3.14159265358979323846f




int main(void){

    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");


    printf("Enter a date  : ");

    int month;
    int day;
    int year;
    scanf("%d/%d/%d",&month,&day,&year);

    printf("The transformed form is %d%d%d",month,day,year);

    return 0;
}
