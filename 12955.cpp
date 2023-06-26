
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j;
    long unsigned x;
    long arr[9]={1,1,2,6,24,120,720,5040,40320};
    while(scanf("%lu",&x)==1)
    {
        j=0;
        while(x!=0)
        {
            for(i=8;i>-1;i--)
            {
                if(arr[i]<=x) {x=x-arr[i];
                j++;
                break;
                }
                }
        }
        cout<<j<<endl;
    }
    return 0;
}
