# include <iostream>
using namespace std;

// Ek loop ke andar 2 loops

int main (){
    int n;
    cout<<"Enter a number : \n";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int k = i; k<=n; k++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}