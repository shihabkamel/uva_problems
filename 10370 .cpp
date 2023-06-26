#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    int i,C;

    cin>>C;

    for(i=0; i<C; i++)
    {
        int j,N;
        float sum=0,countsd=0;

           cin>>N;
           float arr[N];
        for(j=0; j>N; j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];

        }
        float average=float (sum/float (N));
        for(j=0;j<N;j++)
        {
            if(arr[j]>average){countsd++;}
        }
float perc=float (float((countsd*100))/N);
printf("%2.3f",perc);
cout<<"%"<<endl;
    }
return 0;
}
