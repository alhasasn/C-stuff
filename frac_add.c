#include <stdio.h>


int main(void){

    int numerator1;
    int denominator1;

    int numerator2;
    int denominator2;

    printf("Enter the numerator and denominator ");
    scanf("%d/%d",&numerator1,&denominator1);

    printf("Enter the numerator and denominator ");
    scanf("%d/%d",&numerator2,&denominator2);

    int denominator_prod;
    int cross_prod1, cross_prod2;
    denominator_prod = denominator1 * denominator2;
    cross_prod1 = numerator1 * denominator2;
    cross_prod2 = numerator2 * denominator1;
    float result ;
    result = (float)(cross_prod1 +cross_prod2) / denominator_prod ;
    printf("THE RESULT OF THE ADDITION IS %f", result);

    return 0;
}
