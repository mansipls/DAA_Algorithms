
//c program to implement fractional knapsack
#include<stdio.h>
int n = 5;
int w[5]={2,1,4,5,3}; 
int p[5]={3,2,6,1,2}; 
int capacity = 6;
int main(){
    int curr_w ;
    int maxi;
    float tot_profit = 0;
    int used[5];
    
    for(int i = 0;i<5;++i){
        used[i]=0;
    }
    curr_w = capacity;
    while(curr_w>0){
        maxi = -1;
        for(int i = 0; i<5;++i)
            if((used[i]== 0)
                 &&((maxi == -1) || ((float)p[i]/w[i]>(float)p[maxi]/w[maxi])))
            maxi = i;
            used[maxi] = 1;
        
        curr_w -= w[maxi];
        tot_profit += p[maxi];
        
        if(curr_w>0)
            printf("Adding %d (%d rupees, %d kg completely in the bag. Remaining space = %d kg\n", maxi+1,p[maxi],w[maxi],curr_w);
        
        else{
            int percent= (1+ (float)curr_w/w[maxi])*100;
            printf("Adding %d%% of %d in the bag.",percent,maxi+1);
            tot_profit -= p[maxi];
            tot_profit += (1+(float)curr_w/w[maxi])*p[maxi];

        }
           
        
    }
    printf("The total profit = %f",tot_profit);
    return 0;
}