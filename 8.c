#include <stdio.h>


int count_even(int a[], int s)
{
    int t = 0;
    for (int i = 0; i < s; i++) {
        if ((a[i] % 2)==0)
            t++;
    }
    return t;
}


int main()
{
    int a[5] = {0, 2, 3, 4, 5};
    printf("%i\n", count_even(a, 5));
}
