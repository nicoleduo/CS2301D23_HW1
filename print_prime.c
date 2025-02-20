#include <stdio.h>
int is_prime(int v) {
    for (int x = 2; x < v; x++) {
        if(v%x == 0) {
            //returns non prime numbers as 0
            return 0;
        }
    }
    //returns prime numbers as 1
    return 1;
}
int main(void) {
    int N;
    printf("How many prime numbers do you want?\n");
    scanf("%d", &N);
    //set initial value as 2 because it is the first prime number
    int i = 2;
    //variable N is uses while loop as a count down of how many prime numbers still need to be printed
    while(N > 0){
        //its_prime returns prime numbers as 1 so if its_prime == 1 then print value
        if(is_prime(i) == 1){
            printf("%d ", i);
            //decrease the amount of prime numbers that need to be printed by one
            N = N - 1;
        }
        //check next number by adding one to i
        i = i + 1;
    }
    return 0;
}

