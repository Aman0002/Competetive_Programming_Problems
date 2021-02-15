//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends


//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
void solution(string out,int op,int cl,vector<string> &vec){
        if(op==0 && cl==0){
            vec.push_back(out);
            return;
        }
        if(op==cl){
            string out1=out;
            out1.push_back('(');
            op--;
            solution(out1,op,cl,vec);
            
        }else if(op==0){
            out.push_back(')');
            solution(out,op,cl-1,vec);
            
        }
        else{
            string out1=out;
            string out2=out;
            out1.push_back('(');
            out2.push_back(')');
            solution(out1,op-1,cl,vec);
            solution(out2,op,cl-1,vec);
        }
        
    }
vector<string> AllParenthesis(int n) 
{
    // Your code goes here 
    vector<string> vec;
        string out="";
        int op=n;
        int cl=n;
        solution(out,op,cl,vec);
        return vec;
}

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> result = AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends
