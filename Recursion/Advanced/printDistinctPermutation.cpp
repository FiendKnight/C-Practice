//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void permute(int l, int r, string &str, vector <string> &res){
         if(l==r)
            res.push_back(str);
        else{
            for(int i=l;i<=r;i++){
                swap(str[l],str[i]);
                permute(l+1,r,str, res);
                swap(str[i], str[l]);
            }
        }
    }
		vector<string>find_permutation(string S)
		{
		    vector<string>res;
		    permute(0,S.size()-1,S,res);
		    set<string>r(res.begin(),res.end());
		    res.clear();
		    res.assign(r.begin(),r.end());
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
