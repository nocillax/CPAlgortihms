#include <iostream>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}

void NoCiLLaX(){
    ll x, y;
    cin >> x >> y;
    cout<<gcd(x, y)<<endl;
}

int main(){

    NoCiLLaX();
    
}
