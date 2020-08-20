#include<iostream>
using namespace std;
int main(){
    int x = 20;
    {
        int x = 30;
        cout<<x<<endl;
        //Block scope variable
    }
    cout<<x;
    return 0;

}