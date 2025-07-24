# include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // (and) can be used in place of (&&)
    if (n>99 and n<1000)
    {
        cout<<"3 digit number";
    }
    else cout<<"Not a three digit number";
}