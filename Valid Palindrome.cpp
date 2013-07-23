class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function

        int len, head, tail;
        char hc, tc;

        len = s.length();

        if ( len==0 || len==1 )
            return true;

        head = 0;
        tail = len-1;

        while ( head<tail )
        {
            while ( !( (s[head]>='a' && s[head]<='z') || ( s[head]>='A' && s[head]<='Z') || (s[head]>='0' && s[head]<='9') ) && head<len && head<tail )
                head++;

            if ( head>=tail )
                return true;

            while ( !( (s[tail]>='a' && s[tail]<='z') || ( s[tail]>='A' && s[tail]<='Z') || (s[tail]>='0' && s[tail]<='9') ) && tail>=0 && head<tail )
                tail--;

            if ( head>=tail )
                return true;

            hc = s[head];
            tc = s[tail];

            if ( hc>='A' && hc<='Z' )
                hc = hc + ('a'-'A');
            if ( tc>='A' && tc<='Z' )
                tc = tc + ('a'-'A');

            if ( hc!=tc )
                return false;

            head++;
            tail--;
        }

        return true;
    }
};
