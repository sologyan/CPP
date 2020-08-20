#include<iostream>
using namespace std;
int main(){
    int cp, sp, p, l, s;
    cout<<"enter the cost price & sate price ";
    cin>>cp>>sp;
    s= cp - sp;
    p = cp/100 * 100;
    l = sp/100 * 100;
    cout<<"profit = " <<p<<endl;
    cout<<"lass = "<<l;
    return 0;
}