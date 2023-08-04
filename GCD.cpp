#include <iostream>
using namespace std;

int main() {
    int n,m,x,y;
    
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    x=m;
    y=n;
    while(n!=m){
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
    }
    cout<<"GCD of "<<y<<" and "<<x<<" is : "<<m<<endl;

  
    return 0;
}
