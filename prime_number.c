#include <stdio.h>
int main(void) {
    //Initialize variables
    int v;
    //Prompt user for value
    printf("Please enter a value:\n");
    //Get value from terminal and store in variable
    scanf("%d", &v);
    //Loop over all numbers (x) less than the specified value (v)
    //if the v/x is a whole number (hint, use the % operator which returns the remainder of a/b) then the value is not prime
    //print "This value is not a prime number" to the terminal
    for (int x = 2; x < v; x++) {
        if(v%x == 0) {
            printf("This value is not a prime number");
            //Exit the loop
            return 0;
        }
    }
    //If v/x was never a whole number
    //print "This value is a prime number" to the terminal
    printf("This value is a prime number");
    return 0;
}