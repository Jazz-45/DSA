# include <iostream>
# include <cmath>
using namespace std;

int main (){
    int arr[]={12,3,68,89,70};
    int mx=INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
        mx=max(mx,arr[i]);
    }
    int smax = INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]!=mx)
        {
            smax=max(smax,arr[i]);
        }
        
    }
    cout<<smax;
}