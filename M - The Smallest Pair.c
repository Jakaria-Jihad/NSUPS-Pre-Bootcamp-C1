#include <stdio.h>

int main() 
{
    int x,n,i;
	scanf("%d",&x);
	while(x--)
	{
	    int a;
	    scanf("%d",&n);
	    int m[2];
	    for(i=0;i<2;i++)
	    {
	        scanf("%d",&a);
	        m[i]=a;
	    }
	    if(m[0]>m[1])
	    {
	        m[1]=m[0];
	        m[0]=a;
	    }
	    for(i=2;i<n;i++)
	    {
	        scanf("%d",&a);
	        if(m[0]>a)
	        {
	            m[1]=m[0];
	            m[0]=a;
	        }
	        else if(m[1]>a)
	        {
	            m[1]=a;
	        }
	    }
	    int sum =0;
	    sum = m[0]+m[1];
	    printf("%d\n",sum);
	}
	return 0;
}
