// Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.  (GeeksForGeeks)
// NOTE*: A subarray is a contiguous part of any given array.
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1


class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long maxi = numeric_limits<long>::min();
        long sum =0;
        int i=0,j=0;
        
    
        while(j<N){
             sum =sum + Arr[j];
            if(j-i+1<K){
                j++;
            }else if(j-i+1==K){
                maxi = max(maxi,sum);
                sum = sum -Arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};