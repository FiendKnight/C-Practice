#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printlinearly(int i,int n){
    if(n==0)
        return;
    cout<<i<<" ";
    printlinearly(i+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int i=1;
    printlinearly(i,n);
    return 0;
}
