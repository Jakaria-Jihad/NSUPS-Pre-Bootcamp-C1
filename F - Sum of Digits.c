#include <stdio.h>
int main() {
    int x,n,sum=0;
    scanf("%d",&n);
    while (n-->0){
    scanf("%d",&x);
    while (x)
    {
        sum+=x%10;
        x/=10;
    }
    printf("%d\n",sum);
    sum=0;
    }
    return 0;
}
