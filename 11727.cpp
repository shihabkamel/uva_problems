#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,j;
    for(i=0;i<t;i++)
    {
        int arr[3];
        for(j=0;j<3;j++)
        {
            cin>>arr[j];
        }
        int x,y,z;
        for(x=0;x<2;x++)
        {
            for(y=0;y<2;y++)
            {
                if(arr[y]<arr[y+1])
                {


                    z=arr[y];
                    arr[y]=arr[y+1];
                    arr[y+1]=z;
                }
            }
        }
        cout<<"Case "<<i+1<<": "<<arr[1]<<endl;
    }
}
