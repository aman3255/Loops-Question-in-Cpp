
#include <iostream>

using namespace std;
int main() {
    
    int n;
    cout<<"Enter :";
    cin>>n;
    
    for(int i=0;i<=10;i++){                   
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}

// while(i<=n){
//     sum=sum+i;
//     i++;
// }