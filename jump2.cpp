class Solution {
public:
    int jump(vector<int>& nums) {
         int maxjump=0;
        int currentjump=0;
        int jump=0;

        for(int i=0;i<nums.size()-1;i++){
            maxjump=max(maxjump,i+nums[i]);
            if(i == currentjump){
                jump++;
                currentjump = maxjump;
            }
        }
        return jump;
    }
};
