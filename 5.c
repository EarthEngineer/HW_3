#include <stdio.h>

int sum_of_digits(int n)
{
    int a=0;
    while (n>0) {
        a=a+n%10;
        n=n/10;
    }
    return a;
}

int sum_of_digits_rec(int n)
{
    if (n==0) return 0;
    else {
        int a=n%10;
        a=a+sum_of_digits_rec(n/10);
        return a;
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i\n", sum_of_digits(n));
    printf("%i\n", sum_of_digits_rec(n));
}
