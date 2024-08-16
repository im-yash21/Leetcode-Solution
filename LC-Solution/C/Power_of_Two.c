/*#My Leet Code id = im-yash21
#Runtime:3 ms , Memory Usage: 7.6 MB */

bool isPowerOfTwo(int n) {
if(n==0){
    return false;
}
 for(;;){
    if(n%2==0){
        n = n/2;
    }
    else if(n==1){
        return true;
    }
    else{
        return false;
    }
 }
}