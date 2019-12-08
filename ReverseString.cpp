class Solution {
public:
    void reverseString(vector<char>& s) {
        int x = s.size()-1;
        int i = 0;
        char temp;
        while(i <= x) {
                temp = s[i];
                s[i++] = s[x];
                s[x--] = temp;
            }
        }
};
