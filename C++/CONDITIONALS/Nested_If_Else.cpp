# include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if (a>b)
    {
        if (a>c) cout<<"a is greatest";
        else cout<<"c is greatest";
    }
    else if (b>c)
    {
        if (b>a) cout<<"b is greatest";
        else cout<<"a is greatest";
    }
    else if (c>a)
    {
        if (c>b) cout<<"c is greatest";
        else cout<<"b is greatest";
    }
}