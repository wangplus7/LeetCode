//
//  solution.h
//  003.LongestSubstring
//
//  Created by MiWang on 16/9/21.
//  Copyright © 2016年 MiWang. All rights reserved.
//
#include <string.h> 
#include <vector>
using namespace std;

#define MAX(A,B) ((A > B)?A:B)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len = (int)s.length();
        int max = 0,start = -1;
        vector<int> arr(256,-1);
        
        for(int i = 0; i < len; i++){
            int lastC = arr[s[i]];
            if(lastC > start){
                start = lastC;
            }
            arr[s[i]] = i;
            max = MAX(max,i - start);
        }
//        map<char, int> charMap;
//        for(int i = 0; i < len; i++){
//            if(charMap.count(s[i]) != 0){
//                start = MAX(start,charMap[s[i]]);
//            }
//            charMap[s[i]] = i;
//            max = MAX(max,i - start);
//        }
        
        return max;
    }
};
