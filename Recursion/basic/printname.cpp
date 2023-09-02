
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printname(int n,string name){
    if(n==0)
        return;
    cout<<n<<". "<<name<<endl;
    printname(n-1,name);
}
int main()
{
    int n;
    cin>>n;
    string name;
    cin>>name;
    printname(n,name);
    return 0;
}
