class Solution{
  public:
    int minJumps(int a[], int n){
        int maxR = a[0];
        int step = a[0];
        int jump = 1;
        if(n==1) return 0;
        else if(a[0]==0) return -1;
        else{
            for(int i=1;i<n;i++){
                if(i==n-1){
                    return jump;
                }
                maxR = max(maxR,i+a[i]);
                step--;
                if(step==0){
                    jump++;
                    if(i>=maxR){
                        return -1;
                    }
                    step=maxR-i;
                }
            }
        }
    }
};

