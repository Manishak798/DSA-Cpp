class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // Fill the hashmap with the character counts from chars
        unordered_map<char, int> charCount;
        for (char c : chars) {
            charCount[c]++;
        }

        int count = 0;

        // Iterate over each word
        for (string word : words) {
            unordered_map<char, int> wordCount;

            // Count frequency of each character in the word
            for (char c : word) {
                wordCount[c]++;
            }

            // Check if the word can be fully formed
            bool canForm = true;
            for (auto& pair : wordCount) {
                char c = pair.first;
                int freq = pair.second;

                // If the word requires more of 'c' than available in chars, skip it
                if (charCount[c] < freq) {
                    canForm = false;
                    break;
                }
            }

            // Increment count if the word can be fully formed
            if (canForm) {
                count += word.length();
            }
        }

        return count;
    }
};
