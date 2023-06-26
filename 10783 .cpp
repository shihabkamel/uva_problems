#include<iostream>
using namespace std;
int main()
{
    int n,T;
    cin>>T;
    for(n=0;n<T;n++)
      {

        int a,b;
    cin>>a>>b;
    int i,sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2==1)
            sum=sum+i;}
     cout<<"Case "<<n+1<<": "<<sum<<endl;

    }
    return 0;


}
