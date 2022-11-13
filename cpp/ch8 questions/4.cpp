#include <iostream>
#include <climits>

//Record Breaking Day

using namespace std;
int main(){

    int n,i;
    cin>>n;

    int arr[n];
    int ans=0;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    int mx=INT_MIN;

    for(int i=0;i<n;i++){
      if(arr[i]>mx && arr[i]>arr[i+1]){
        cout<<i+1<<"Day"<<" "<<"Is Record Breaking Day"<<endl;
        ans++;
      }
      int mx=max(mx,arr[i]);

    } 
   cout<<"No. of Reacord breaking days "<<ans<<endl;

    return 0;
}