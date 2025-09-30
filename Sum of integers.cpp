/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
using namespace std;
int add(int n){
    if(n<=1){ 
        return 1;
    }else{
        return n+add(n-1); 
    }
}

int main(){
    int a,n;
    cout<<"Enter a number: ";
    cin>>n;
    a=add(n); 
    cout<<a;
}
/*
output:
Enter a number: 6
21
*/
