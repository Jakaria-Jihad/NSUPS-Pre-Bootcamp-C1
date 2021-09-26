#include <stdio.h>

int main()
{
    int n, i=0;
    scanf("%d", &n);
    while(i<n){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        i++;
    }

    return 0;
}
