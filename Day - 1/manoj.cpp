#include<iostream>
using namespace std;
bool isPowerof2(long long N){
    if(N==0)
    return false;
    return ((N&(N-1))==0);
}
string kangaroo(long long N){
    if(isPowerof2(N))
    return "True";
    else 
    return "False";
}
int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<kangaroo(n)<<endl;
    }
    return 0;
    
}