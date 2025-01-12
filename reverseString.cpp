class Solution {
public:
    void reverseString(vector<char>& s) {
        int a = 0;
        int e = s.size() - 1;
        char c;
        while(a<=e){
            c = s[a];
            s[a] = s[e];
            s[e] = c;
            a++;
            e--;
        }
    }
};