#include <stdio.h>

void sort(int* m, int n)
{
     for(int i = n - 1; i >= 1; i--)
       for(int j = 0; j < i; j++)
       {
               if(m[j] > m[j+1])
               {
                       int foo = m[j];
                       m[j] = m[j+1];
                       m[j+1] = foo;
               }
       }
}

int main()
{
    int a[7] = {540, 16, 3, -40, 3, 89, 8};
    sort(a, 7);

    for (int i = 0; i < 7; i++) {
        printf("%i ", a[i]);
    }
    printf("\n");
}
