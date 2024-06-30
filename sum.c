// sum of number given in input

#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Welcome to Sum Calculor\n");
    printf("Please enter the first number: ");
    scanf("%d",&a);
    printf("Now, enter the second number: ");
    scanf("%d",&b);

    sum = a + b;
    printf("The summ of two number is %d",sum);

    return 0;
    
}