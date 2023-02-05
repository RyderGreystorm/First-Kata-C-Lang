#include <stdio.h>

int main(){

    int num;
    printf("Lets check if Input is Even or Odd\n");
    printf("Please enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\n %d is an Even Number", num);
    }else{
        printf("\n %d is an Odd number", num);
    }

    return 0;
}