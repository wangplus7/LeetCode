//
//  main.cpp
//  003.LongestSubstring
//
//  Created by MiWang on 16/9/21.
//  Copyright © 2016年 MiWang. All rights reserved.
//

#include <iostream>
#include "solution.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Solution s;
    string str = string("abcabcbb");

    cout<< s.lengthOfLongestSubstring(str) <<endl;
    
    return 0;
}
