class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int x=0,n;
        if (buckets==0 || buckets==1 ||minutesToDie>=minutesToTest)
        {
            return x;
        }
        else
        {
        
        int num_of_try=floor(minutesToTest/minutesToDie);
        do
        { x++;
            n=pow(num_of_try+1,x);
            
        }while (n< buckets) ;
        return x;
        }
     
    }
};
