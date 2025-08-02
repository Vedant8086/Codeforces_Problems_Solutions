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
    int test_case;
    cin >> test_case;
    int Anton = 0,Darik = 0;
    string name;
    cin >> name;
    for(int i = 0;i < test_case;i++) {
        char x = name[i];
        if(x == 'A') Anton++;
        if(x == 'D') Darik++;
    }
    if(Anton > Darik) {
        cout << "Anton" << endl;
    }
    else if(Darik > Anton) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}