#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    unordered_map<string, string> contacts;
    string name, contact;
    for(int i = 0; i < n; i++){
        cin >> name >> contact;
        contacts.insert({name, contact});
    }
    string search;
    while(cin >> search){
        if(contacts.find(search) != contacts.end()){
            cout << search << "=" << contacts.find(search)->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
      
    return 0;
}