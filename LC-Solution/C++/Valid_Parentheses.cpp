/*#My Leet Code id = im-yash21
#Runtime:0 ms , Memory Usage: 7.7 MB */
class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1){
            return false;
        }
       char stk[s.size()];
       int top = -1;
        for( char c : s){
            if (  c == '('){
                 stk[++top] = c;
            }
            else if(  c ==  ')'){
                if(top == -1){
                    return false;
                }
                if(stk[top] == '(')
                top--;
                else
                return false;
            }
            else if( c == '{'  ){
             stk[++top] = c;
            }
            else if( c == '}' ){
                if(top == -1){
                    return false;
                }
              if(stk[top ] == '{')
                top--;
               else
                return false;
            }
            else if( c == '[' ){
              stk[++top] = c;
            }
            else if( c == ']' ){
                if(top == -1){
                    return false;
                }
            if(stk[top] == '[')
                top--;
                else
                return false; 
            }
            else {
                return false;
            }
        }
        if(top == -1){
        return true;
        }
        return false;
    }
};