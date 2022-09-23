#include <stdio.h>
int print_binary(int n)
{
    if (n == 1) {printf("%i ", n); return;}
    else {print_binary(n/2);}
    printf("%i ", n%2 );

}


int main()
{
    int n;
    scanf("%i", &n);
    print_binary(n);
}
