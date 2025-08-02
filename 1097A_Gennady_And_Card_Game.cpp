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
bool isPlay(vector<string> v,string given) {
    for(string i : v) {
        if(i[0] == given[0] || i[1] == given[1]) {
            return true;
        }
    }
    return false;
}
int main() {
    string given;
    cin >> given;
    vector<string> v;
    for(int i = 1;i <=5;i++) {
        string vb;
        cin >> vb;
        v.push_back(vb);
    }
    isPlay(v,given) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}