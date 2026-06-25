class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_sentence;
        for(string str : strs){
            int length = str.length();
            encoded_sentence += to_string(length) + "#" +str; 
        }
        return encoded_sentence;
    }
    // 5#hello4#toto
    vector<string> decode(string s) {
        vector<string> decoded_sentence;
        int i =0;
        int length =0;
        while(i<s.length()){
          int pos = s.find("#",i);
          string partNum = s.substr(i,pos-i);
          int length = stoi(partNum);
          string result = s.substr(pos+1,length);
          decoded_sentence.push_back(result);
          i=0;
          i=pos+1+length;
        }
        return decoded_sentence;
    }
};
