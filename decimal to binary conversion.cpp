#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int power =1;
    while(n>0){
        int paritydigit =n%2;
        ans =ans+power*paritydigit;
        power=10*power;
        n=n/2;
    }
    cout<<ans<<endl;
    return 0;
}
