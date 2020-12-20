#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n ;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
        B[A[i]-1] = i+1;
    }

    for(int i=0;i<n;i++){
     cout << B[i] << " ";
    }

    
    return 0;
}
