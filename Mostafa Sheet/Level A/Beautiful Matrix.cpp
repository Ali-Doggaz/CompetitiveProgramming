
#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    double L,B;
    cin >> L >> B;
    double result = log(B/L) / log(1.5);
    if (ceil(result) == result) cout << result+1;
    else cout << ceil(result);
    return 0;

}

