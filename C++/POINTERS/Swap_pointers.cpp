# include <iostream>
using namespace std;

// Pass by reference method - 2;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main (){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}