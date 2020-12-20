#include <iostream>

using namespace std;

int fonction(int n, int m, int a){
    int result = 0;
    if(n/a == m/a and m%a!=0 and n%a!=0){
        return result;
    }
    else{
        result = (m/a) - (n/a);
        if (n%a == 0 and n!=0) result += 1;
    }

    return result ;
}

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