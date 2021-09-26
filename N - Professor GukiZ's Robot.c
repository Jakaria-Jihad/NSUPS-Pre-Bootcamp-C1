#include<stdio.h>
#include<stdlib.h>
int main() {
    int x,y,X,Y;
    int a,b;
    
    scanf("%d %d",&x,&y);
    scanf("%d %d",&a,&b);
    X=abs(x-a);
    Y=abs(y-b);
    if(X>Y){
        printf("%d",X);
    }else
    {
        printf("%d",Y);
    }
    return 0;
}
