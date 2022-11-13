#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n,i;
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++){
    cin>>arr[i];
    }

    int pd= arr[0]-arr[1];
    int ans=2;
    int curr=2;
    int j=2;

    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max (curr,ans);
        j++;
    }
    cout<<ans;
    return 0;
}