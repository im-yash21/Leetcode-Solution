/*#My Leet Code id = im-yash21
#Runtime:12 ms , Memory Usage: 8.4 MB */

bool isPowerOfThree(int n) {
    if(n==0){return 0;}
    for(;;){
        if(n%3==0){
            n = n/3;
        }
        else if(n==1 ){
            return true;
        }
        else{
            return false;
        }
    }
}