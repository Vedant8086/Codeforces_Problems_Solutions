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
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        int arr[num];
        int l = -1,r = 0,maxi= 0;
        bool zeros = false;
        for(int i = 0;i < num;i++) {
            cin >> arr[i];
            if(arr[i] == 0 && !zeros) {
                l = i;
                zeros = true;
            }
        }
        if(l == -1) cout << 0 << endl;
        else if(l == 0 && num == 1) cout << 1 <<endl;
        else {
            int count = 0;
            // bool itzero = true;
            for(int i = l;i < num;i++) {
                if(arr[i] == 0) {
                    count++;
                } else {
                    maxi = max(maxi,count);
                    count = 0;
                }
            }
            maxi = max(maxi,count);
            cout << maxi << endl;
        }
    }
    return 0;
}