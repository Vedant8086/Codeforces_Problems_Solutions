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
   int a,b;
   cin >> a >> b;
   int  arr[a][b];
   int left = 1,right = 3;
   for(int i = 0;i < a;i+=2) {
      for(int j = 0;j < b;j++) {
         arr[i][j] = 1;
      }
   }
   
   for(int i = 1;i < a;i+=4) {
      for(int j = 0;j < b;j++) {
         if(j == b-1 && i%2 != 0) {
            arr[i][j] = 1;
         }
         else arr[i][j] = 0;
      }
   }

   for(int i = 3;i < a;i+=4) {
      for(int j = 0;j < b;j++) {
         if(j == 0 && i % 2 != 0) {
            arr[i][j] = 1;
         }
         else arr[i][j] = 0;
         
      } 
   }


   for(int i = 0;i < a;i++) {
      for(int j = 0;j < b;j++) {
         if(arr[i][j] == 1) {
            cout << "#";
         } else {
            cout << ".";
         }
      }
      cout << endl;
   } 
   return 0;
}