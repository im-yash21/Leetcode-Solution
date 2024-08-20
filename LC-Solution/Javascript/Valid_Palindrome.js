/*#My Leet Code id = im-yash21
#Runtime:64 ms , Memory Usage: 54.4 MB */

var isPalindrome = function(s) {
    var k= ''
    var g = ''
    for(let i=0;i<s.length;i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            k +=s[i]
        }
    }
    k = k.toLowerCase()
    for(let i = k.length - 1 ;i>=0;i--){
                g += k[i]
    }
    return k==g
};