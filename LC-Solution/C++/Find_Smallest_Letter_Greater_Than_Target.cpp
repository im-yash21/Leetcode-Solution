/*#My Leet Code id = im-yash21
#Runtime:11 ms , Memory Usage: 19.7 MB */
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
     for(int i=0;i<letters.size();i++){
       if(letters[i]>target){
        return letters[i];
       }
    }
    return letters[0];   
    }
};