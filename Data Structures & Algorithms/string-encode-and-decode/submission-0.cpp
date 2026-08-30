class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for (string i : strs){
            encoded_string += to_string(i.length()) + '#' + i;
        }
        return encoded_string;
    }

    vector<string> decode(string encoded_string) {
        string counts;
        vector<string> results;
        for(int i = 0; i < encoded_string.length(); i++){
            if(encoded_string[i] != '#'){
                counts.push_back(encoded_string[i]);
            }
            else{
                int number = std::stoi(counts);
                results.push_back(encoded_string.substr(i + 1, number));
                i = i + number;
                counts.clear();

            }
        }
        return results;
    }
};
