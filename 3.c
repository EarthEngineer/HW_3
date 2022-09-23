#include <stdio.h>


void print_even(int a, int b)
{
    int t=a;
    if (a % 2)
        t=a+1;
    for (int i = 0; 2*i+t<=b; i++) {
        printf("%i ", 2*i+t);
    }
    printf("\n");
}


int main()
{
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);

    print_even(a, b);
}
