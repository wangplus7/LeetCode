# 1.题目
题目链接：https://leetcode.com/problems/two-sum/

 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have ***exactly ***one solution.

**Example:**
>Given nums = [2, 7, 11, 15], target = 9,

>Because nums[0] + nums[1] = 2 + 7 = 9,

>return [0,1].

# 2.解析
注意引入头文件和命名空间,最后根据a，b是否相等有一个小判断
```
class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> array = nums;
        sort(array.begin(),array.end());

        int start = 0;
        int end = (int)array.size()-1;
        int a = 0,b = 0;
        int resultA = 0,resultB = 0;
        
        while (start < end) {
            int sum = array[start] + array[end];
            if(sum < target){
                start++;
            }else if(sum>target){
                end--;
            }else{
                a = array[start];
                b = array[end];
                break;
            }
        }
        if(start >= end){
            return {};
        }

        vector<int>::iterator it = find(nums.begin(), nums.end(), a);
        resultA = (int)(it - nums.begin());
        if(a != b){
            it = find(nums.begin(), nums.end(), b);
            resultB = (int)(it - nums.begin());
        }else{
            //a,b相同时，从a下标的下一个寻找  
            it = find(nums.begin() + resultA + 1, nums.end(), b);
            resultB = (int)(it - nums.begin());
        }

        if(resultA > resultB){ //排个序
            resultB = resultA + resultB;
            resultA = resultB - resultA;
            resultB = resultB - resultA;
        }
        return {resultA,resultB};
    }
};
```
