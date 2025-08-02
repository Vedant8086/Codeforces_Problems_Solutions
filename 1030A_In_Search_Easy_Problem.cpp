#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "EASY";
    while(n--) {
        int temp;
        cin  >> temp;
        if(temp == 1) {
            s = "HARD";
        }
    }

    cout << s << endl;
return 0;
}