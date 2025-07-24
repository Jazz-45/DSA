# include <iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cout<<"Enter number a"<<endl;
    cin>>a;
    cout<<"Enter number b"<<endl;
    cin>>b;
    cout<<"Enter operation"<<endl;
    cin>>ch;
    
    switch (ch)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    }
}