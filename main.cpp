#include <iostream>

using namespace std;

void dgt(int d[])           //Funkcja do zmiany liczby na cyfry
{
    int c=1;
    while(d[0]>0)
    {
        d[c]=d[0]%10;
        d[0]/=10;
        c++;
    }
    d[0]=c-1;               //b[f][0] to liczba cyfr
}
int main()
{
    int a;
    cin>>a;
    int b[a][10];
    for(int f=0;f<a;f++)    //Input do b[f][0]
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
