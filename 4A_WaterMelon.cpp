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



bool Weight_Checker(int part1,int part2) {
    if(part1 % 2 == 0 && part2 % 2 == 0) {
        return true;
    }
    else {
        return false;
    }

}
int main() {
    int watermalon_weight;
    cin >> watermalon_weight;
    int part1,part2;
    if(watermalon_weight % 2 != 0) {
       cout << "NO";
    }
    else if(watermalon_weight == 1 || watermalon_weight == 2) {
        cout << "NO" << endl;
    }
    else if(watermalon_weight % 2 == 0){
        part1 = watermalon_weight / 2;
        part2 = watermalon_weight / 2;
        if(part1 % 2 != 0 && part2 % 2 != 0) {
            part1 += 1;
            part2 -= 1;
        }
        if(Weight_Checker(part1,part2)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    } 
    //cout << part1 << " AND " << part2 << endl;
    return 0;
}