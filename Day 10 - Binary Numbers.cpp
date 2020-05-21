#include <bits/stdc++.h>
#include<math.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int i = 0;
    while (pow(2, i) <= n){
        i++;
    }
    i--;
    int cons = 1;
    int max = 1;
    bool prev = false;
    while(n){
        int power = pow(2, i);
        // cout << n << " " << i << " " << power << endl;;
        if(power <= n){
            // cout << "here";
            n -= power;
            if(prev == true){
                cons++;
                if(max < cons){
                    max = cons;
                }
            }
            else{
                cons = 1;
            }
            prev = true;
        }
        else{
            prev = false;
        }
        i--;
    }
    cout << max;
    return 0;
}