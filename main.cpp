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
    d[0]=c-1;               //b[x][0] to liczba cyfr liczby x
}
int main()
{
    int a;
    cin>>a;
    int b[a][10];
    for(int f=0;f<a;f++)    //Input do b[x][0] gdzie x to numer liczby
    {
        cin>>b[f][0];
    }
    for(int f=0;f<a;f++)    //ca³y input na cyfry
    {
        dgt(b[f]);
    }
    for(int f=0;f<a;f++)
    {

    }
    return 0;
}
