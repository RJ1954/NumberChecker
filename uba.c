#include <stdio.h>
#include <string.h>
 int main() {
    int number;
    char choice[10];

do{
 // This program checks whether a number is even or odd
printf("Enter any number: ");
scanf("%d", &number);
if (number % 2 == 0) {
    printf("%d is an even number.\n", number);
} else {
    printf("%d is an odd number.\n", number);
}


    printf("\nDo you want to check another number? (y/n): ");
    scanf(" %s", &choice);

}while(strcmp(choice, "yes") == 0);
    printf("Thank you for using the program. Goodbye!\n");

    

return 0;

 }