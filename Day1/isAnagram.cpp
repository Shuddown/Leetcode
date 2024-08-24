#include <vector>
#include <unordered_map>
#include <string>

using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t){
    int letters[26] = {0};
    for (char c: s){
        letters[c - 'a']++;
    }

    for (char c: t){
        letters[c  - 'a']--;
    }

    for (int val: letters){
        if(val != 0) return false;
    }
    return true;
}
};


