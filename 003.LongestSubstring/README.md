# 1.题目
题目链接：https://leetcode.com/problems/longest-substring-without-repeating-characters/

Given a string, find the length of the longest substring without repeating characters.

**Examples:**

Given ***"abcabcbb"***, the answer is ***"abc"***, which the length is 3.

Given ***"bbbbb"***, the answer is ***"b"***, with the length of 1.

Given ***"pwwkew"***, the answer is ***"wke"***, with the length of 3. Note that the answer must be a **substring**, ***"pwke"*** is a subsequence and not a substring.

# 2.解析
注释中使用map

```
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
```
