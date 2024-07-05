class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int revnum=0;
        int org=x;
        int ld=0;
        while(x>0){
            ld=x%10;
            if (revnum > (INT_MAX - ld) / 10) {
                return false;
        }
        revnum=(revnum*10)+ld;
        x=x/10;
        
    }return revnum==org;
    }
};