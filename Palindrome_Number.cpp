#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string string_no = to_string(x);
        string reversed_string;
    
        for(int i = string_no.length() - 1; i >= 0; --i) {
            reversed_string += string_no[i];
        }
        if(string_no == reversed_string)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
       