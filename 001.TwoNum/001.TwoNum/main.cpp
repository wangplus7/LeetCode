//
//  main.cpp
//  001.TwoNum
//
//  Created by wangjiaqi on 16/9/19.
//  Copyright © 2016年 wjq. All rights reserved.
//

#include <iostream>
#include "solution.h"
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

int main(int argc, const char * argv[]) {
    Solution s;
    
    int target = 9;
    vector<int> b = {2,7,11,15};
    vector<int> c = s.twoSum(b, target);
    std::cout << "[" << c[0]<<","<<c[1]<<"]"<< std::endl;
    
    target = -8;
    b = {-1,-2,-3,-4,-5};
    c = s.twoSum(b, target);
    std::cout << "[" << c[0]<<","<<c[1]<<"]"<< std::endl;
    
    
    return 0;
}