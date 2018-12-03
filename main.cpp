#include <iostream>

using namespace std;

void dgt(int d[])
{
    int c=1;
    while(d[0]>0)
    {
        d[c]=d[0]%10;
        d[0]/=10;
        cout<<d[c]<<" ";
        c++;
    }
    d[0]=c-1;
    cout<<"("<<d[0];
    cout<<endl;
}
int main()
{
    int a,c;
    cin>>a;
    int b[a][10];
    for(int f=0;f<a;f++)
    {
        cin>>b[f][0];
    }
    for(int f=0;f<a;f++)
    {
        dgt(b[f]);
    }
    for(int f=0;f<a;f++)
    {

    }
    return 0;
}
