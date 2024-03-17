class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < 0) {
                v2.push_back(nums[i]);
            } else {
                v1.push_back(nums[i]);
            }

        }

        int j = 0, k = 0;
        for(int i = 0; i < nums.size(); i++){

            if(i%2 ==0)
            {
                nums[i] = v1[j++];
            }
            else
            {
                nums[i] = v2[k++];
            }
        }

        return nums;

    }
};