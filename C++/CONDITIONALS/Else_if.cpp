# include <iostream>
using namespace std;

int main (){
    int cp;
    cout<<"Enter cost price"<<endl;
    cin>>cp;
    int sp;
    cout<<"Enter selling price"<<endl;
    cin>>sp;
    if (sp>cp)
    {
        cout<<"Profit";
    }
    else if (cp>sp)
    {
        cout<<"Loss";
    }
    else
    {
        cout<<"No Profit,NoLoss";
    }
    
}