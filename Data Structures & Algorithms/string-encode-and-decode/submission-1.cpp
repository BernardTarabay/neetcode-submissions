class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(int i=0; i<strs.size(); i++){
            encoded += to_string(strs[i].size());
            encoded += "#";
            encoded += strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
    vector<string> result;
    int i = 0;

    while (i < s.size()) {
        int length = 0;

        while (s[i] != '#') {
            length = length * 10 + (s[i] - '0');
            i++;
        }

        i++; 

        string word = s.substr(i, length);
        result.push_back(word);

        i += length;
    }

    return result;
}
};
