#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    while(x--){
        int v,y,c;
        scanf("%d%d%d",&v,&y,&c);
	    if(v+y+c==180)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
    }
    return 0;
}
