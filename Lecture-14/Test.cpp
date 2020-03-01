class Solution {
    
    // Finds endWord by BFS and create parent->children word relations
    bool findEndWordByBFS(const string& beginWord, const string& endWord,const vector<string>& wordList,unordered_map<string, vector<string>>& children) {
        unordered_set<string> dict(wordList.begin(), wordList.end()), current, next;
        current.insert(beginWord);
        while (true) {
            for (string word : current) {
                dict.erase(word);
            }
            
            for (string word : current) {
                string parent = word;
                for (int i = 0; i < word.size(); i++) {
                    char t = word[i];
                    for (int j = 0; j < 26; j++) {
                        word[i] = 'a' + j;
                        if (dict.find(word) != dict.end()) {
                            next.insert(word);
                            children[parent].push_back(word);
                        }
                    }
                    word[i] = t;
                }
            }
            
            if (next.empty())
                return false;
            
            if (next.find(endWord) != next.end())
                return true;current.clear();
            swap(current, next);
        } 
        
        return false;
    }
    //  Use DFS (backtracking) to generate the transformation sequences according to the mapping
    void buildLadders(const string& beginWord,
                      const string& endWord,
                      vector<string>& ladder,
                      vector<vector<string>>& ladders,
                      unordered_map<string, vector<string>>& children) {
        if (beginWord == endWord) {
            ladders.push_back(ladder);
        } else {
            for (string word : children[beginWord]) {
                ladder.push_back(word);
                buildLadders(word, endWord, ladder, ladders, children);
                ladder.pop_back();
            }
        }
    }
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (dict.find(endWord) == dict.end())
            return {};
        unordered_map<string, vector<string>> children;
        if (!findEndWordByBFS(beginWord, endWord, wordList, children))
            return {};
        vector<vector<string>> ladders;
        vector<string> ladder;
        ladder.push_back(beginWord);
        buildLadders(beginWord, endWord, ladder, ladders, children);
        return ladders;
    }
};