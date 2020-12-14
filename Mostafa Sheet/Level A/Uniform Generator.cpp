#include <iostream>
#include <iomanip>

using namespace std;
const int MXN = 600;


int main(){
    ios_base :: sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);  
      
    int STEP,MOD,seed = 0;
    while(cin >> STEP){
        cin >> MOD;

        bool T[MOD] = { 0 };
        bool bad = false;

    for(int i=0;i<MOD;i++){
            seed = (seed+STEP) % MOD;
            if (T[seed]){
                bad = true;
                break;
            }
            T[seed] = true;
        }
    cout << setw(10) << STEP << setw(10) << MOD << "    ";
    bad ? cout << "Bad Choice" << endl : cout << "Good Choice" << endl;
    cout << endl;
    }
    return 0;
}





