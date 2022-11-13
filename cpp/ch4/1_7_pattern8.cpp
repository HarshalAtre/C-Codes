#include <iostream>
using namespace std;
int main(){
      
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++){
        int col=n+1-i;
        int count=1;
        for(j=1;j<=col;j++){
            cout<<j<<" ";
           ;
        }
        cout<<endl;
    }

    return 0;
}