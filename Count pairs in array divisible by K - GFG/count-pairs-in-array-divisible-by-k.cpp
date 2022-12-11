//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int k)
    {
        //code here
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[A[i]%k]++;
        }
        long long res=0;
        if(m.find(0)!= m.end())
           res =m[0]*(m[0]-1)/2;
        for(int i=1;i<=k/2;i++){
            if(i==k/2 && k%2==0){
                res+= m[k/2]*(m[k/2]-1)/2;
            }
            else
            res+= m[i]*m[k-i];
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}

// } Driver Code Ends