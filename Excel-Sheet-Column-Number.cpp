class Solution {
public:
    int titleToNumber(string s) {
        /*
        int sum = 0;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            sum += (s[i] - 'A' + 1) * pow(26, s.size() - 1 - i);
        }
        return sum;
        */
        int sum = 0; 
        for (int i = 0; i != s.size(); ++i)
        {
            sum = sum * 26 + s[i] - 'A' + 1;
        }
        return sum;
    }
};
