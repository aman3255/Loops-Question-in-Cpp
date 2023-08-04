#include <iostream>

using namespace std;
int main() {
    
    int n,sum=0,i;
    cout<<"Enter :";
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"0 to "<<n<<" sum is "<<sum;

    return 0;
}