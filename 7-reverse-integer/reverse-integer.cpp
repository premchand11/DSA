class Solution {
public:
    int reverse(int n) {
       int newdigit=0;
       while(n!=0){
        if (newdigit > INT_MAX / 10 || newdigit < INT_MIN / 10) {
                return 0; // Return 0 to indicate overflow or underflow
            }
        int ld=n%10;
        newdigit=(newdigit*10)+ld;
        n=n/10;
       }
       return newdigit; 
        
    }
};