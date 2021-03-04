/*---------------*
 *  Lab 3        */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int age = 22;
    double average = 416.67234;

    // ------ output ----------
    printf("\nXXXXXXX   Lab 3 \n\n");
    printf("Mary went to the store.\n\n");
    printf("My friend is %i years old.\n\n", age);
    printf("\"So many books, so little time.\"\n");
    printf("- Frank Zappa\n\n");
    printf("The average = %5.1f \n\n", average);
    printf("The average = %7.3f \n\n", average);
    printf("The average = %-8.2e \n\n", average);
    printf("The average = %f \n\n", average);

    return EXIT_SUCCESS;
}
