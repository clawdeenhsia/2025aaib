//week11-4.cpp
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int now=nums[i];//瞷璶矪瞶
            //Q:笵nums[i]琌碭计
            int digits=0; //Τ碭计
            while(now>0){
                digits++;
                now=now/10;
            }
            if(digits%2==0)ans++; //癹伴柑 案计计 ans++
        }
        return ans; //癹伴ansㄓノ
    }
};
