#include <stdio.h>

int main(void) {

	int T;
	scanf("%d",&T);
	while(T>0)
	{
	    int num;
	    scanf("%d",&num);
	    int lnum,fnum,sum=0;
	    lnum=num%10;
	    fnum=num;
	    while(num>=10)
	    {
	        num=num/10;
	    }
	    fnum=num;
	    sum=fnum+lnum;
	    printf("%d\n",sum);
	    T--;
	}
	return 0;
}

