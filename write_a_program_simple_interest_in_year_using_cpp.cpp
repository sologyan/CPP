#include<iostream>
using namespace std;
int main(){
    float pricipal, rate, time, si, amount;
    cout<<"enter the pricipal amount ";
    cin>>pricipal;
    cout<<"enter the rate ";
    cin>>rate;
    cout<<"enter the time in year ";
    cin>>time;
    si = pricipal * rate * time / 100;
    amount = pricipal + si;
    cout<<"total amount = "<< amount;
    return 0;

}