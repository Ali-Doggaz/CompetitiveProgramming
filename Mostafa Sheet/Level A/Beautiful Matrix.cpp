#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    int n;
    int T[5][5];
    int absc;
    int ord;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) {
            cin >> T[i][j];
            if (T[i][j] == 1) {
                absc = i;
                ord = j;
            }
        }
    }
    cout << abs((absc-2))+abs(ord-2);
    return 0;
}

