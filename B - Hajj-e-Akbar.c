#include<stdio.h>
int main()
{
    char input[100]="0";
    int i;
     for(i=1; 1; i++){
        gets(input);
        if(input[0]=='*')
        {
            break;
        }else if(input[0]=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }else
        {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }
    }
    return 0;
}
