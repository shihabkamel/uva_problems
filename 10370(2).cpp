#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int C,i;
    for(i=0;i<C;i++)
    {
        int N;
        int j;
        float sum=0;
        float countsd=0;

        cin>>N;
        float arr[N];
        for(j=0;j<N;j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        float average=float(sum/float(N));

        for(j=0;j<N;j++)
        {
            if(arr[j]>average)
            {
                countsd++;
            }
        }
        float percentage=float(float((countsd*100))/N);
        printf("%2.3f",percentage);
        cout<<"%"<<endl;

    }
    return 0;
}
