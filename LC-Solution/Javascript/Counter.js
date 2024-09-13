/*#My Leet Code id = im-yash21
#Runtime:53 ms , Memory Usage: 49.20 MB */
var num=0
var createCounter = function(n) {
    return function() {
        return n++
    };
};