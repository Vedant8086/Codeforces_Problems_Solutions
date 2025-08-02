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
    vector<int> v(n);
    vector<int> ones,twos,threes;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        if(v[i] == 1) ones.push_back(i);
        else if(v[i] == 2) twos.push_back(i);
        else threes.push_back(i);
    }
    int mini = min({ones.size(),twos.size(),threes.size()});
    cout << mini << endl;
    for(int i =0;i < mini;i++) {
        cout << ones[i] + 1 << " " << twos[i] + 1 << " " << threes[i] + 1 << endl;
    }

    return 0;
}