/*#My Leet Code id = im-yash21
#Runtime:57 ms , Memory Usage: 53.3 MB */
var countMatches = function(items, ruleKey, ruleValue) {
    let a = ["type","color","name"]
    let i=0,k=0
    while(i<2){
        if(a[i]==ruleKey){
            break
        }
        i++
    }
    for(let j =0 ;j<items.length;j++){
            if(items[j][i]==ruleValue){
               k++
            }
    }
    return k
};