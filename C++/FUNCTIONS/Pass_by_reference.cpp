# include <iostream>
using namespace std;
// Pass by reference method 1
// This method is ony valid in c++ not in c
// Method 2 is pointers.

void swap (int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}
// This is known as pass by reference
// By using '&'
int main (){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}