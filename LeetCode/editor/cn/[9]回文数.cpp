

//leetcode submit region begin(Prohibit modification and deletion)
#include "cstring"
#include "iostream"
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        string x_list =  to_string(x);
        int len = x_list.length();
        if (len <= 1) return true;
        for (int i = 0;i <len/2;i++){
            if (x_list[i]!=x_list[len-i-1])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
