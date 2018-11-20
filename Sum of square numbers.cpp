class Solution {
public:
    bool judgeSquareSum(int c) {
        bool t1=0;
        int temp=c;
        int num=sqrt(c);
        if(c==0) t1=1;
        else
        {
            for(int i=1;i<num+1;i++){
                double flo_num,test;
                int int_num,sub;
                sub=c-i*i;
                if(sub<0)
                {
                    t1=0;
                    break;
                }
                if(sub==0)
                {
                   t1=1;
                    break;
                }
                flo_num=sqrt(sub);
                int_num=sqrt(sub);
                if(flo_num==int_num)
                {
                    t1=1;
                    break;
                }
            }
        }
        return t1;
    }
};
