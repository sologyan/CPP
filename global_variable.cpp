#include<iostream>
using namespace std;
int x = 20; //global variable 
int main(){
   int x = 10; //local variable
   {
       int x = 5; // block variable
       cout<<x<<endl;
   }
   cout<<x<<endl; 
   cout<<::x;
    return 0;
}