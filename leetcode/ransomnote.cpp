/*
383. Ransom Note  QuestionEditorial Solution  My Submissions
Total Accepted: 13931 Total Submissions: 31552 Difficulty: Easy
 �
Given an arbitrary ransom note string and another string containing letters from all the  x
magazines, write a function that will return true if the ransom  note can be constructed  x
from the magazines ;   
otherwise, it will return false.  s


Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

//126 / 126 test cases passed.Status: Accepted Runtime: 44 ms
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rc = ransomNote.size();
        int rm = magazine.size();
        for(int i = 0; i < rc; i++){
            bool findchar = false;
            for(int j = 0; j < rm; j++){
                if(ransomNote[i]==magazine[j]){
                    //ransomnote[i]=0;
                    magazine[j]=0;
                    findchar = true;
                    break;
                }
            }
            if(!findchar)return false;
        }
        return true;
    }
};
