//Move zeroes at end
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>a;
        int c=0;
     //   Iterator<int>i::
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                c++;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
                a.push_back(nums[i]);
        }
        while(c--)
        {
            a.push_back(0);
        }
          for(int i=0;i<n;i++)
          {
              nums[i]=a[i];
          }
        
    }
};
