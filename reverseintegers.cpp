/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned). */
class Solution {
public:
    int reverse(int x) {
        if((x > 2147483647)|| (x < -2147483647)){
            return 0;
        }
        bool neg = false;
        long result = 0;
        if(x < 0){
            neg  = true;
            x = std::abs(x);
        }
       long i{1};
       int digits{};
        for(i; x/i != 0; i *= 10){
            ++digits;
        } 
        i = (x==0)?i: i/10;
        for(int x2{}; x2 < digits; ++x2){
            result += (x%10)*i;
            i /= 10;
            x /= 10;
        }
        

        if(result > 2147483647 ){
            result = 0;
        }
        if(neg == true){
            result *= -1;
        }
        return result;
    }
};
