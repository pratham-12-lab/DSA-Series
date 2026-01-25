#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int frequency = 1;  
    int ans = nums[0];
    int n = nums.size();

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i - 1]){
            frequency++;
        } else {
            frequency = 1;
            ans = nums[i];
        }

        if(frequency > n/2){
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};

    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}