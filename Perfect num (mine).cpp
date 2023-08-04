#include <iostream>

using namespace std;
int main() {
    
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;
    
    if(n==0){
        cout<<"Zero cannot be a factor of any number except for Zero";
    }
    else if(n<0){
        cout<<"Factors of "<<n<<endl;
        for(i=1;i<=-n;i++){
            if(n%i==0){
                sum=sum-i;
                cout<<-i<<endl;
            }
        }
        cout<<"Sum of Factors:"<<sum<<endl;
        cout<<"No, negative numbers cannot be perfect numbers";
    }
    else if(n>0){
        cout<<"Factors of "<<n<<endl;
        for(i=1;i<=n;i++){
            if(n%i==0){
                sum=sum+i;
                cout<<i<<endl;
            }
        }
        cout<<"Sum of Factors:"<<sum<<endl;
        if(n*2==sum){
                    cout<<n<<" is Perfect Number";
                }
                else{
                    cout<<n<<" not a Perfect Number";
                }
    }

    return 0;
}