#include <stdio.h>

int main(void){

    int num;
    printf("Lest check if a number is negative or positive\n");
    printf("Please enter any Number:  ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("%d is a negative number \n", num);
    }else if (num > 0)  
    {
        printf("%d is a positive number", num);
    }else {
        printf("%d is zero", num);
    }
    
    
    return 0;
}