class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret; 
        for(int j = 0; j < nums.size(); j++){
            
        
        for(int i = 0; i < nums.size(); i++){
            
                if(nums[j] + nums[i] == target && j != i){
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            
            }
        }
        return ret;
    }
    
        
    };
