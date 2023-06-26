#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n=0;
    char a[200];
    while(gets(a))
    {
        n++;
        if(strcmp(a,"#")==0)
            break;
        else if(strcmp(a,"HELLO")==0){cout<<"case"<<n<<": ENGLISH"<<endl;}
        else if (strcmp(a,"HALLO")==0){cout<<"Case"<<n<<": GERMAN"<<endl;}
        else if(strcmp(a,"HOLA")==0){cout<<"Case"<<n<<": SPANISH"<<endl;}
        else if(strcmp(a,"BONJOUR")==0){cout<<"Case"<<n<<": FRENCH"<<endl;}
        else if(strcmp(a,"CIAO")==0)
        {
            cout<<"Case"<<n<<": ITALIAN"<<endl;

        }
        else if(strcmp(a,"ZORAVSTVUJTE")==0) {cout<<"Case"<<n<<": RUSSIAN"<<endl;}
        else
        {
            cout<<"Case"<<n<<": UNKNOWN"<<endl;
        }
    }
    return 0;
}
