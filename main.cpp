#include <iostream>
#include <math.h>
using namespace std;

void dgt(int d[])           //Funkcja do zmiany liczby na cyfry
{
    int c=1,t;
    while(d[0]>0)
    {
        d[c]=d[0]%10;
        d[0]/=10;
        c++;
    }
    d[0]=c-1;               //b[x][0] to liczba cyfr liczby x
}
int main()
{
    int a,t,i;
    cin>>a;
    int b[a][10];
    for(int f=0;f<a;f++)	//Input do b[x][0] gdzie x to numer liczby
    {
        cin>>b[f][0];
    }
    for(int f=0;f<a;f++)    //caly input na cyfry
    {
        dgt(b[f]);
    }
    for(int f=0;f<a;f++)
    {
        i=0;
        t=0;
            while(b[f][g+1]!=b[f][b[f][0]-g])
            {
                i++;
                t=0;
                for(int h=0;h<b[f][0];h++)
                {
                    t+=pow(10,h)*(b[f][h+1]+b[f][b[f][0]-h]);
                }
                b[f][0]=t;
                dgt(b[f]);
            }
        cout<<t<<" "<<i<<endl;
    }
    return 0;
}
