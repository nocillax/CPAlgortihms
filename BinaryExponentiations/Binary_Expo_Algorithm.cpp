#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

ll binpow(ll b, ll p) {
    ll res = 1;
    while(p>0){
        if(p%2){
            res = res*b;
        }
        b = b*b;
        p>>=1;
    }
    return res;
}

void nocillax(){
    ll b, p;
    cin >> b >> p;

    cout << binpow(b, p) << endl;

}

int main(){
    
    nocillax();

}
