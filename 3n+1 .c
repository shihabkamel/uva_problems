#include<stdio.h>
int func(int a,int b)
{
    int x,cout=1,max=0;
    if(a>1){int temp=a;
    a=b;
    b=temp;}
    while(a<=b){
        x=a;
        while(x!=1){if(x%2==0)x=x/2;
        else x=(3*x)+1;
        cout++;
        if(x==1)break;}
        if(cout>max)max=cout;
        cout=1;
        a++;

    }
    return max;
}
int main()
{
    int i,j,r;
     while(scanf("%d %d",&i,&j)!=EOF)
     {
         r= func(i,j);
         printf("%d %d %d",i,j,r);

     }

return 0;

}
