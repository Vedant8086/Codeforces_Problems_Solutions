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
    string first,second;
    cin >> first;
    cin >> second;
    reverse(first.begin(),first.end());
    if(first == second) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}