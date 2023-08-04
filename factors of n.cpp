#include <iostream>

using namespace std;
int main() {
    
    int n,i;
    cout<<"Enter n:";
    cin>>n;
    
    if(n==0){
        cout<<"Zero cannot be a factor of any number except for Zero";
    }
    else{
        for(i=1;i<=n;i++){
            if(n%i==0){
                cout<<i<<endl;
            }
        cout<<"Factors of "<<n<<endl;
        }
    }
    return 0;
}