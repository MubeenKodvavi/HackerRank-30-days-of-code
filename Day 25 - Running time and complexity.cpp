#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        bool flag = true;
        if(n == 1){
            flag = false;
        }
        for(int i = 2; n >= i * i; i++){
            if(!(n % i)){
                flag = false;
            }
        }
        cout << (flag == true ? "Prime\n":"Not prime\n");
    }
        
    return 0;
}

