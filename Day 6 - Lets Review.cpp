#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        string s;
        cin >> s;
        string o;
        string e;
        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0){
                e += s[i];
            }
            else{
                o += s[i];
            }
        }
        cout << e << " " << o << endl;
    }
    return 0;
}
