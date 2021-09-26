#include<stdio.h>

void arrange(int *);
int length;
int main()
{
	int n,r;
	scanf("%d",&r);
	for(int i=0;i<r;i++)
	{
		length=1;
		int digit[400];
		for(int i=0;i<400;i++)
			digit[i]=-1;
		scanf("%d",&n);
		digit[0]=1;
		while(n>0)
		{
			for(int i=0;i<length;i++)
			{
				digit[i]*=n;
			}
			arrange(digit);
			n--;
		}
		for(int i=length-1;i>=0;i--)
		{
			printf("%d",digit[i]);
		}
		printf("\n");
		}
	return 0;
}
void arrange(int *digit)
{
	int i=0;
	while(digit[i]!=-1)
	{
		if(digit[i]>=10)
		{
			if(digit[i+1]==-1)
			{
				digit[i+1]=digit[i]/10;
				length++;
			}
			else
				digit[i+1]+=digit[i]/10;
			digit[i]=digit[i]%10;
		}
		i++;
	}
}
