// Note : Below approach only works for +ve values
// https://leetcode.com/problems/subarray-sum-equals-k/description/           : here we need to find just count of those subarray whose sum ==k
// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1  : here we need to find the largest sub whose sum ==k

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxi =0,start= 0,end=0,sum =0;
        while(end<N){
            sum = sum+A[end];
            if(sum<K){
                end++;
            }else if(sum ==K){
                maxi = max(maxi, end-start+1);
                end++;
            }else{
                while(sum>K){
                    sum -=A[start];
                    i++;
                    if(sum ==K){
                        maxi = max(maxi,end-start+1);
                        j++;
                    }

                    
                }
            }
        }
        return maxi;
    } 

};


int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
