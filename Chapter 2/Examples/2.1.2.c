#include <stdio.h>

int main()
{

float num;
int choice;

printf("Enter vlaue: ");
scanf("%f", &num);

printf("1: Feet to Meters, 2: Meters to Feet. ");
printf("Enter Choice: ");
scanf("%d", &choice);

if(choice == 1) printf("%f", num/3.28);
if(choice == 2) printf("%f", num*3.28);

return 0;

}
