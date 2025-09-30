/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
using namespace std;
int fact(int x){
   if(x<=1){
       return 1;
   }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int x,A;
    cout<<"Enter the number: ";
    cin>>x;
    A=fact(x);
    cout<<"The factorial is :"<<A;

}
/*
output:
Enter the number: 7
The factorial is :5040
*/