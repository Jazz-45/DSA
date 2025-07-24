# include <iostream>
using namespace std;
// Pass by value

void swap (int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
// This is known as pass by value
int main (){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}