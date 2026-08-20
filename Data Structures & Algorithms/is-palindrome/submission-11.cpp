class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";

        for(char c : s) {
            if(isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        string left = cleaned.substr(0, cleaned.size()/2);
        string right = cleaned.substr((cleaned.size()+1)/2);

        reverse(right.begin(), right.end());

        return left == right;
    }
};