// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
     int ans = 1 ;
     for(int i = 1;i<=n;i++){
         
         int temp = 0;
         for(int j = 0;j<i;j++){
             temp = temp + ans;
         }
         ans = temp;
     }
     
     cout<<ans;

    return 0;
}
