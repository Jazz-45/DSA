# include <iostream>
using namespace std;

int factroial (int x){
    int a = 1;
    if (x==0 || x==1) a=1;
    else{
    for (int i = 1; i <= x; i++){
        a=a*i;
    }
    }
    return a;
}
int combination (int a, int b){
    int u = factroial(a)/(factroial(b)*factroial(a-b));
    return u;
}

int main (){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            int k=factroial()
            cout<<
        }
        cout<<endl;
    }
    
}