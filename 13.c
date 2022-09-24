#include <stdio.h>

void alice(int);
void bob(int);


void bob(int n){

    if (n != 1) {
        while (!(n % 2)) {
            n=n/2;
            printf("Bob: %i\n", n);
        }
        if (n != 1) {alice(n);}
        }
}

void alice(int n){

    n=n*3;
    n++;
    printf("Alice: %i\n", n);
    bob(n);
}

int main(){

    int n;
    scanf("%i", &n);
    alice(n);
}
