#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    // Count the occurrences of each character
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first non-repeating character and return its index
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1; // If no non-repeating character found
}

int main() {
    string s = "leetcode";
    cout << "Input: " << s << endl;
    int result = firstUniqChar(s);
    cout << "Output: " << result << endl;

    s = "loveleetcode";
    cout << "Input: " << s << endl;
    result = firstUniqChar(s);
    cout << "Output: " << result << endl;

    s = "aabb";
    cout << "Input: " << s << endl;
    result = firstUniqChar(s);
    cout << "Output: " << result << endl;

    return 0;
}
