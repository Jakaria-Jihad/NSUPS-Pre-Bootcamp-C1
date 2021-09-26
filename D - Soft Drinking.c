    #include <stdio.h>
     
    int comp(int a);
    int main()
    {
        int  n=3, k=4, l=5, c=10, d=8, p=100, nl=3, np=1,drink_ml_per,lemon_slice_per,salt_per,low;
        scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
        low=(drink_ml_per=k*l/nl);
        if(low>(lemon_slice_per=c*d)){
          low=lemon_slice_per;
        }
        if(low>(salt_per=p/np)){
          low=salt_per;
        }
        printf("%d",low/=n);   
        return 0;
    }
