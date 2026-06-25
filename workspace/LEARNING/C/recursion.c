#include<stdio.h>
// topic -> recursion function

int fact(int num){
    if (num==1 || num==0) return 1;
    return num*fact(num-1);
}
int rev_series(int num){
    printf("%d\n",num);
    if (num==1) return 1;
    return rev_series(num-1);
}

void inc_series(int num){ // use another argument/parameter (int x, int num)
    if(num <1 ){ // if (x>num) return;
        return;     // printf("%d ",x);
    }
    inc_series(num-1); // inc_series(x+1,n); then call ke time inc_series(1,num)
    printf("%d\n",num);
    
}
void dec_inc_series(int num){ // do it again with recurssion
    int rev_series(int num);
    rev_series(num);
    void inc_series(int num);
    inc_series(num);
    return;
}
void sum_natural_num(int num,int sum){ // int sum(int num) single parameter se
    if(num==0){         // if (num ==1) return n;
        printf("%d",sum); // int recurssion_ans=n+sum(n-1);
        return;             // return ans
    }
    sum_natural_num(num-1,sum+num); // at time of calling sum mai 0 hona chaiye 
    return ;
}
int power(int base, int pow){ 
    if(pow==0) return 1;
    int recAns= base * power(base,pow-1);
    printf("the pow %d of base num %d is %d\n",pow,base,recAns);
    return recAns;// not print line for final ans
}
int powerlog(int base, int pow){
    int recAns;
    if (pow==1) return base;
    if (pow==0) return 1;
    int logPow = powerlog(base,(pow/2));
    if(pow%2==0){
        return logPow * logPow  ;
    }
    return logPow * logPow * base;  
}
int fibo(int num){
    if(num==1 || num==2){
        return 1;
    }
    int recAns=fibo(num-1)+fibo(num-2);
    // printf("The %dth term of fibonacci series is %d\n",num,recAns); use it in main
    return recAns; 
}
void fibonacci(int num,int a,int b){ // a and b are 1st and 2nd term
    if (num>0){
        printf("%d ",a);
        fibonacci(num-1,b,a+b);
    }
    return; // fibonacci(num,0,1); while calling 
}

int stairpath_ways(int num){
    if(num==1 || num==2) return num;
    else if (num==3) return 4; // if max jump is 3step
    int totalWays= stairpath_ways(num-1)+stairpath_ways(num-2)+stairpath_ways(num-3);
    return totalWays;
}

int maze_path(){// resume from 2.5 hr video lec 6

    return 0;
}

int main(){
    int a,b;
    printf("enter your base and pow : ");
    scanf("%d%d",&a,&b);
    printf("%d",powerlog(a,b));
    return 0;
}