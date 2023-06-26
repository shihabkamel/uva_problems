#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d,e,f;
    d=a*a;
    e=b*b;
    f=c*c;
    if(a!=0 || b!=0 || c!=0){
      if(f==d+e)  cout<<"right"<<endl;
    else if(d==f+e)
        cout<<"right"<<endl;
    else if(e==d+f)
        cout<<"right"<<endl;


    else
        cout<<"wrong"<<endl;
    }
    return 0;
}
