#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printlinearly(int n){
    if(n==0)
        return;
    printlinearly(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    printlinearly(n);
    return 0;
}
