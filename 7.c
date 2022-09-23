#include <stdio.h>
int trib(int n)
{
    int a[n];
    if(a==0 || a==1) return 0;
    if (a == 1) return 1;
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;

    for(int i = 3; i <=n; ++i){

        a[i] = a[i-3] + a[i-2] + a[i-1];
    }
    return a[n];
}


int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", trib(n));
}
