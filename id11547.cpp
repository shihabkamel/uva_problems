#include<iostream>

#include<cstdlib>
using namespace std;
int main()
{
    long n;
    int t,T;
    cin>>T;
    for(t=0;t<T;t++){
        cin>>n;
    n=(((n*567/9+7492)*235)/47)-498;
    cout<<abs((n/10)%10)<<endl;
    }
}
