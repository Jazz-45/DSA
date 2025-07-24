# include <iostream>
using namespace std;

int main (){

    int x = 3;
    int* p;
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl;

    // * -> is dereference operator
    // use to access and fetch value of the variable
    // whose address is stored in the used pointer
    // variable
    cout<<*p<<endl;
}