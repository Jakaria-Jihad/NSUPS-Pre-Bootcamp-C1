#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main() {
    int n,i,same=0,c=0;
    scanf("%d",&n);
    int num[n],d_num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);    
        d_num[i]=num[i];
    }
    qsort(num, n, sizeof(int), cmpfunc);
    for (int i = 0; i < n; i++)
    {
        if(num[i]!=d_num[i])
        c++;
    }
        if(c==0||c==2){
        printf("YES\n");    
        }
        else{
        printf("NO\n");                
        }
    return 0;
}
