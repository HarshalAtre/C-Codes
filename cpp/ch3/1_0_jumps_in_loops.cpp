#include <iostream>
using namespace std;
int main(){
    int pocketmoney;
    pocketmoney=3000;
    int date;
    for(cin>>date; date<=30;date++){
        
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"You Can GO"<<endl;
        pocketmoney=pocketmoney-300;
    }


    return 0;
}