#include <iostream>
using namespace std;
 
int main() {
    int K;
    cin >> K;
 
    int arr[K]; 
 
    for(int i = 0; i < K; i++) {
        cin >> arr[i];
    }
 
    int E = 0, O = 0, P = 0, N = 0;
 
    for(int i = 0; i < K; i++) {
        if(arr[i] % 2 == 0)
            E++;
        else
            O++;
 
        if(arr[i] > 0)
            P++;
        else if(arr[i] < 0)
            N++;
    }
 
    cout << "Even: " << E << endl;
    cout << "Odd: " << O << endl;
    cout << "Positive: " << P << endl;
    cout << "Negative: " << N << endl;
 
    return 0;
}
