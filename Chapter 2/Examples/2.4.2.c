#include <stdio.h>

int main()
{
    int num, i, is_prime = 1;

    printf("Enter the number to test: ");
    scanf("%d", &num);

    for (i = 2; i <= num/2; i++){
        if( (num%i) == 0 ) is_prime = 0;
        }

        if((is_prime == 1)) printf("The number is prime.");

        else printf("The number is not prime.");



}
