#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input your no. to operate ";
    cin>>a>>b;
    char cal;
    cout<<"Input your operation ";
    cin>>cal;

    switch (cal)
    {
    case '+':
       cout<< a+b;
        break;
    case '-':
       cout<< a-b;
        break;
    case 'x':
       cout<<a*b;
        break;
    case '/':
       cout<< a/b;
        break;
    
    default:
    cout<<"Enter A valid Operator";
        break;
    }
    return 0;
}