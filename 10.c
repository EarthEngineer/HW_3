#include <stdio.h>

int fact(int n){
    for(int i =n-1; i > 1; i--){
        n =n*(i);
    return n;
    }
}


int factorials(int a[], int s)
{
    for (int i = 0; i < s; i++)
        a[i] = fact(a[i]);
}



int main()
{

}
