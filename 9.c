#include <stdio.h>


void dec(int a[], int size)
{
    for (int i = 0; i < size; i++)
        a[i]=a[i]%10;
}


int main()
{
    int a[5] = {13, 21, 33, 42, 50};
    dec(a, 5);

    for (int i = 0; i < 5; ++i)
        printf("%i ", a[i]);
    printf("\n");
}
