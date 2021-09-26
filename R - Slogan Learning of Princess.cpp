#include<iostream>
#include<cstdio>
#include<cstring>
 
using namespace std;
int main()
{
    int n,i,m,j,k,number;
    char ch;
    string ary[150],slogan;
    cin>>number;
    getchar();
    n=number*2;
    for(i=1;i<=n;i++)
        getline(cin,ary[i]);
    cin>>m;
    getchar();
    for(j=1;j<=m;j++)
    {
        getline(cin,slogan);
        for(k=1;k<=n;k++)
        {
            if(ary[k]==slogan)
            {
                cout<<ary[k+1]<<endl;
                break;
            }
        }
    }
    return 0;
}
