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
    int scores,passing;
    cin >> scores >> passing;
    int participate[scores];
    int ans = 0;
    for(int i =0 ;i < scores;i++) {
        cin >> participate[i];
    }
    for(int i =0;i < scores;i++) {
        if(participate[i] >= participate[passing - 1] && participate[i] > 0) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}