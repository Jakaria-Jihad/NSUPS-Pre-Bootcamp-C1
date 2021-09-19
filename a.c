#include<stdio.h>
int main()
{
    int i,till,input[100],odd=0,even=0;
    scanf("%d",&till);
    for ( i = 0; i < till; i++)
    {
        scanf("%d",&input[i]);
        if(input[i]%2==0){
            odd++;
        }else
        {
            even++;
        }
    }
    if(odd<even){
        for ( i = 0; i<till ; i++)
        {
            if(input[i]%2==0){
            printf("%d",i+1);
            break;
            }
        }
        
    }else
    {
        for ( i = 0; i<till ; i++)
        {
            if(input[i]%2!=0){
            printf("%d",i+1);
            break;
            }
        }
    }
    
        
    
    
    return 0;
}
