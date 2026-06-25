
#include <stdio.h>

void baic_cal(){
    int num1,num2;
    printf("enter your nums: ");
    scanf("%d%d",&num1,&num2);
    printf("the sum of num1 %d , num2 %d is %d",num1,num2,num1+num2);
    printf("the sub of num1 %d , num2 %d is %d",num1,num2,num1-num2);
    printf("the prod of num1 %d , num2 %d is %d",num1,num2,num1*num2);
    printf("the mod of num1 %d , num2 %d is %d",num1,num2,num1%num2);
    printf("the div of num1 %d , num2 %d is %d",num1,num2,num1/num2);
    return;
}


void is_prime(){
    int num,flag=1;
    printf("enter your num:");
    scanf("%d",&num);
    if (num==1){
        printf("\n1 is neither prime nor composite");
    }
    else if (num==2){
        printf("\n 2 is a prime num");
    }
    else if (num<=0){
        printf("wrong input");
    }
    int i=2;
    while(i<num){
        if (num%i==0){
            printf("%d num is not a prime",num);
            flag=0;
            break;
        }
        i++;
    }
    if (flag==1)
        printf("\n%d entered num is a prime",num);
}

void primefrom1tonum(){
    int num,count=1;
    printf("enter num jah tak prime num chaiye");
    scanf("%d",&num);
    if (num<=0){
        printf("wrong input");
    }
    else if(num==1){
        printf("1 is neither prime nor composite");
    }
    else if (num==2){
        printf("2 is a prime num");
    }
    for (int i=2;i<num;i++){
        if (num%i==0){
            printf("\nthe num %d is a prime num.",i);
            count++;
        }
    }
    printf("\nthe total number of prime between 1 to %d is %d",num,count);
}

int fact_num(){
    int num;
    printf("enter num jiska fact chaiye ");
    scanf("%d",&num);
    if (num<=0){
        printf("wrong input");
    }
    int fact=1;
    for (int i=1;i<=num;i++){
        fact = fact *i;   
    }
    printf("fact of the num is %d",fact);
}

int sum_naturalnum(){
    int num;
    printf("enter your num of terms: ");
    scanf("%d",&num);
    int sum=0;
    int output;
    for (int i=1;i<=num;i++){
        sum=sum+i; // for odd natural num sum is if cond mai i%2!=0 karke sum=sum+i
    }
    output = (num*(num+1))/2; // output= n*n
    printf("sum of n natural num is:%d\n",sum);
    printf("output is %d",output);
}

int temp(){


}


int main(){
    
    return 0;
}