#include <stdio.h>

int main(void){

    //Getting isbn
    printf("ENTER THE ISBN :  ");

    int gsi, group_identifier,publisher_code,item_number,check_digit;
    scanf("%d-%d-%d-%d-%d",&gsi,&group_identifier,&publisher_code,&item_number,&check_digit);


    printf("GSI PREFIX %d\n",gsi);
    printf("group_identifier %d\n",group_identifier);
    printf("publisher_code %d\n",publisher_code);
    printf("item_number  %d\n",item_number);
    printf("check_digit  %1d\n",check_digit);

    return 0;
}
