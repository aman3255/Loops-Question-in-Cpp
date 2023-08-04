#include <iostream>

using namespace std;
int main() {
    
    int n,fact=1,i;
    cout<<"Enter :";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"fact of "<<n<<" is "<<fact;

    return 0;
}

#include <iostream>

// using while loop
// using namespace std;
// int main() {
    
//     int n,fact=1,i=1;
//     cout<<"Enter :";
//     cin>>n;
//     while(i<=n){
//         fact=fact*i;
//         i++;
//     }
//     cout<<"fact of "<<n<<" is "<<fact;

//     return 0;
// }