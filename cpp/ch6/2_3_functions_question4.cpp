#include <iostream>
using namespace std;
int fact(int n){
    int factorial=n;
    for(int i=1;i<=n-1;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;

   int ans=fact(n)/(fact(n-r)*fact(r));
   cout<<ans;
    return 0;
}