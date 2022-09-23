#include <stdio.h>


int reverse(int a[], int s)
{
    int b[s];
    for (int i = s; i > 0; i--)
        b[i-1]=a[(s-i)];
    for(int i=0; i < s; i++)
        printf("%i ", b[i]);
}


int main()
{
    int a[7] = {13, 21, 33, 42, 50, 334, 432};
    reverse(a, 7);


}
