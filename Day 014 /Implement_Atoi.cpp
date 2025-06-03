#include <string> 
#include <climits> // for int_max and int_min 
class Solution {
  public:
    int myAtoi(std::string s ) {
        // Your code here
        long long res = 0;
        int sign = 1;
        int i = 0;
        
        //skip leading whitespaces
        while (i < s.length() && s[i] ==' ')
    {    
        i++;
        }
        //handle sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        } 
        //process digits
        while (i < s.length() && (s[i] >= '0' && s[i] <='9')){
            int digit = s[i] - '0';
            //check for overflow before multiplication and addition
            if (sign == 1) {//poitive overflow check
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && digit > 7)) {//7 is INT_MAX % 10
            
            return INT_MAX;
                }
            } else {//negative overflow check 
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && digit > 8)) {//8 is -(INT_MIN % 10 )
            return INT_MIN;
                }
            }
                res = res * 10 + digit;
                i++;
        }
        
        res *= sign;
        
        //final clam to int_max and int_min 
        if (res > INT_MAX){
         return INT_MAX;
        }
        if (res < INT_MIN) {
            return INT_MIN;
        }
        return static_cast<int>(res);
    }
};
