//
//  solution.h
//  001.TwoNum
//
//  Created by wangjiaqi on 16/9/19.
//  Copyright © 2016年 wjq. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

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
            it = find(nums.begin() + resultA + 1, nums.end(), b);
            resultB = (int)(it - nums.begin());
        }
        
        if(resultA > resultB){
            resultB = resultA + resultB;
            resultA = resultB - resultA;
            resultB = resultB - resultA;
        }
        return {resultA,resultB};
    }
};

