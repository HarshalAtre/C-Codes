#include <iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){


    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i; 
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key);
    return 0;
}
// Time Complexity of linear search
// = O(n)
//as we check all n element of array during search
