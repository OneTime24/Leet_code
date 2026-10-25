class Solution {
public:
    int myAtoi(string s) {
        long long num=0;
        int sig=0;
        int cnt=0;
        for(char ch:s){

            // if(ch=='0'&&cnt==0){
            //     return 0;
            // }
            if(ch==' '){
    if(cnt == 0){
        continue;
    }else{
        return sig == 1 ? -num : num;
    }
}
          if (ch == '+' || ch == '-') {
    if (cnt > 0) {
        return sig == 1 ? -num : num;
    }

    if (ch == '-') {
        sig = 1;
    }

    cnt++;
    continue;
}
           

            if(ch-'0'<=10 &&ch-'0'>=0){
                num=num*10;
                num+=ch-'0';
                cnt++;
            }else{
                if(sig==1){
                return num*-1;
                }else{
                    return num;
                }
            }
            if (sig == 1 && num > 2147483648LL) {
    return INT_MIN;
}
if (sig == 0 && num > INT_MAX) {
    return INT_MAX;
}
            
            
        }
        
        if(sig==1){
        return num*-1;
        }else{
            return num;
        }
    }
};