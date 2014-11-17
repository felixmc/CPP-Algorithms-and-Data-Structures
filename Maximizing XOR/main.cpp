#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int max = -32767;

    for (int i = l; i <= r; i++) {
        for (int j = l; j <= r; j++) {
            int res = i ^ j;
            if (res > max) {
                max = res;
            }
        }   
    }
    
    return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

