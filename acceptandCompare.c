#include <stdio.h>

int main (){

    int num1;
    int num2;
    printf("Please enter your first variable: \n");
    scanf("%d", &num1);

    printf("Awesome, now enter your second number:  %d\n", num2);
    scanf("%d", &num2);

    if (num1 == num2){
        printf("%d and %d are equal", num1, num2);
    } else if (num1< num2){
        printf("%d is less than %d", num1, num2);
    }else{
        printf("%d is greater than %d", num2, num1);
    }
    
    


    return 0;
}