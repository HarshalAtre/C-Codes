#include <iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>m;
    n=m+1;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(j<n-i){
            
            cout<<" ";
            
            }else{
                cout<<"*";
            }
        }

        cout<<endl;
    }

    return 0;
}