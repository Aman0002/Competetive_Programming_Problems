// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
    void solution(vector<string> &vec,int n,int zero,int one, string output){
        if(n==0 || one+zero>n){
            return;
        }
        if(one>=zero && output.length()==n){
            if(output[0]!='0'){
                vec.push_back(output);
            }
            
        }
        string out1=output;
        string out2=output;
        out1.push_back('0');
        out2.push_back('1');
        solution(vec,n,zero+1,one,out1);
        solution(vec,n,zero,one+1,out2);
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    int zero=0,one=0;
	    vector<string> vec;
	    string output="";
	    solution(vec,N,zero,one,output);
	    return vec;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends
