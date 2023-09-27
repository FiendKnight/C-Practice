// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printsubsequence(string str, int n, int index=-1, string curr=" "){
    if(index==n)
        return;
    if(!curr.empty())
        cout<<curr<<endl;
    for(int i=index+1;i<n;i++){
        curr+=str[i];
        printsubsequence(str,n,i,curr);
        curr=curr.erase(curr.size()-1);
    }
    return;
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    string str="1234";
    printsubsequence(str,str.size());
    return 0;
}
