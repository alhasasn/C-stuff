#include <stdio.h>

int main(){
    //REMEMBER YOU CAN SPECIFY FIELD LENGTH
    int first_digit,f1,f2,f3,f4,f5;
    int s1,s2,s3,s4,s5;

    printf("Enter the first digit : ");
    scanf("%1d",&first_digit); //max length is n chars must be n chars long
    printf("Enter the first five digits ");
    scanf("%1d%1d%1d%1d%1d",&f1,&f2,&f3,&f4,&f5);

    printf("Enter the second five digits ");
    scanf("%1d%1d%1d%1d%1d",&s1,&s2,&s3,&s4,&s5);

    int first_sum,second_sum,mult_by_3_sum,remainder,check_digit,standin;

    first_sum =first_digit+f2+s1+s3+s5;
    second_sum = f1+f3+f5+s2+s4;
    mult_by_3_sum = (3*first_sum) + second_sum;
    standin = mult_by_3_sum -1;


    remainder = standin % 10;
    check_digit = 9 - remainder;
    printf("%d",check_digit);






    return 0;
}
