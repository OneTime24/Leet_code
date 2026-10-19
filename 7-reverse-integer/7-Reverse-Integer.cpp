class Solution {
public:
    int reverse(int x) {
        string str;
        int tm;
        int num;
        if(x>0){
        while(x>=1){
            tm=x%10;
            x/=10;
            str+=abs(tm)+'0';
        }

    if(str.empty())
        return 0;
        
        try {
    num = stoi(str);
} catch (out_of_range&) {
    return 0;
}
    }else{
        x*=-1;
        string str;
        int tm;
        if(x>0){
        while(x>=1){
            tm=x%10;
            x/=10;
            str+=abs(tm)+'0';
        }

        if(str.empty())
        return 0;
        
        try {
    num = stoi(str);
} catch (out_of_range&) {
    return 0;
}
        num*=-1;
        
        }
        }
        return num;
        }
};