#include<iostream>
#include<vector>
using namepsace std;
int missingNumber(vector<int>& nums) {

        int sArr=nums.sort(nums);
         int n=sArr.size();
         int mNum=-1;

         int l=sArr[n-1];
         for(int i =0;i<=l;i++){
            if(sArr[i])
         }


}
int main(){
   vector<int> arr=[9,6,4,2,3,5,7,0,1];
   int res=missingNumber(arr)
   cout<<"missing num is:"<<endl;
   return 0;
}
