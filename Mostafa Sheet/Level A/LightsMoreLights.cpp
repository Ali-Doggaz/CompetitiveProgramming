#include <iostream>
#include <math.h> 
#include <cstring>
using namespace std;


int main(){
    ios_base :: sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);

    unsigned int n;
    cin >> n;
    while(n!=0){

        unsigned int x = (int) sqrt(n);
        if (x*x==n) cout << "yes" << endl;
        else cout << "no" << endl;
        cin >> n;
    }

    return 0;
}


