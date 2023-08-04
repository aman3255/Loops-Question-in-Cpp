#include <iostream>

using namespace std;
int main() {
    
    int n,i,count=0;
    cout<<"Enter n:";
    cin>>n;
    
    if(n==0){
        cout<<"Zero cannot be a factor of any number except for Zero";
    }
    else if(n<0){
        cout<<"Factors of "<<n<<endl;
        for(i=1;i<=-n;i++){
            if(n%i==0){
                cout<<-i<<endl;
                count++;
            }
        }
        if(count==2){
            cout<<"prime Number hai"<<endl;
        }
        else{
            cout<<"prime number nahi hai"<<endl;
        }
        
        cout<<"No, negative numbers cannot be perfect numbers";
    }
    else if(n>0){
        cout<<"Factors of "<<n<<endl;
        for(i=1;i<=n;i++){
            if(n%i==0){
                
                cout<<i<<endl;
                count++;
            }
        }
        if(count==2){
            cout<<"prime Number hai"<<endl;
        }
        else{
            cout<<"prime number nahi hai"<<endl;
        }
        
    }
    return 0;
}