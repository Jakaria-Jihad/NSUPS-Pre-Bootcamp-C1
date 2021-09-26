#include <stdio.h>
int main() {
    int n,n1,n2;
    scanf("%d",&n);
    while (n-->0)
    {
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf(">\n");
    }else if(n1<n2){
        printf("<\n");
    }else{
        printf("=\n");
    }
    }
    return 0;
}
