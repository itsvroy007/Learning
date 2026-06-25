#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/*
short cuts
vs code , window , terminal commd and shortcuts
*/
// pointers

void fnPtr(){ // pointer which store address of var
    int num = 2;
    int *ptr = &num; // int ka address store karta hai
    int **y=&ptr; // int* ka adress store karta hai
    printf("%d \n",num); // var ki value
    printf("%p \n",&num); // %p se address print hota hai 
    printf("%d \n",*ptr); // pointer ke address par joh value store h 
    printf("%d \n",*(&num));
    printf("%d \n",(**y)); // pointer 2 -> pointer 1 addres -> var add->val of var
    return;
}
bool is_prime(int num){
    bool flag = true; // true -> prime else composite
    for (int i=2;i<=sqrt(num);i++){
        if (num%i==0){
            flag = false;
            break;
        }
    }
    if (num==1) flag=false;
    // if (flag==true) return true;
    // else return false;
    return flag;
}
void prime_factor(){// good ques still left to complete
    int num,temp;
    printf("enter your num: ");
    scanf("%d",&num);
    temp=num;
    printf("the num is :%d\n",temp);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    return;
}
int min(int a, int b){
    if (a<b) return a;
    else if (a==b) return a || b;
    else return b;
}
int gcd(){// gcd greatest common divisior i.e hcf nikalo
    int num1,num2;
    printf("enter your num1 and num2 :");
    scanf("%d%d",&num1,&num2);
    int highest_factor;
    for(int i=1;i<=min(num1,num2);i++){ // 2nd way is i=min(a,b);i-- then hcf=i atlast break; 
        if(num1%i==0 && num2%i==0){
            highest_factor=i;
        }
    }
    printf("The HCF/GCD of num %d and num %d is %d",num1,num2,highest_factor);
    return 0;
}

/* to check factors
int main(){
    int n;
    printf("enter num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if (n%i==0){
            if (is_prime(i)==true){
                printf("%d",i);
            }
        }
    }
    return 0;
}*/
int fact_num(int num){
    if (num<0){
        printf("wrong input");
    }
    else if(num == 0 || num == 1){
        return 1;
    }
    int fact=1;
    for (int i=1;i<=num;i++){
        fact = fact *i;   
    }            // ye cond define karni hogi fact (1) =1;
                // if(num==1 || num==0) return 1;
    return fact; // just return num*fact(num-1);
}
int combination(int n,int r){ // same for permutation --> n! / (n-r)!
    int comb;
    if(n==r || r==0){
        comb=1;
        printf("%d ",comb);
    }
    else {
        comb= fact_num(n)/ (fact_num(r)*fact_num(n-r));
        printf("%d ",comb);
        return 0;
    }
    //int n,r;
    //printf("enter n and r: ");
    // scanf("%d%d",&n,&r);
    // combination(n,r);
}

int pascal_tri(){
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
    // for(int k=0;k<i;k++){  //for spaces ke liye loop
        //     printf(" ");}
        for(int j=0;j<=i;j++){
            combination(i,j);
        }
        printf("\n");
    }
}
int pascal_tri2(){ // prop of nCr i.e nCr+1 = nCr * ((n-r)/(r+1))
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        int first=1;
        for(int j=0;j<=i;j++){
            printf("%d",first);
            first = first * (i-j)/(j+1);
        }
        printf("\n");
    }


}

int swap_twonum(){
    int num1,num2; // if 3 var then make a third var as temp
    printf("enter num1: ");
    scanf("%d",&num1);
    printf("enter num2: ");
    scanf("%d",&num2);
    printf("org value of num1 is %d and num2 is %d\n",num1,num2);
    num1=num1+num2; // temp = a; a=b; b=temp; 
    num2=num1-num2; // use * for reference call (pointer symbol)
    num1=num1-num2;
    printf("after swapping val of num1 is %d and num2 is %d",num1,num2);
    return 0;
}
int temp(){
    
    return 0;
}
int main(){
    //temp();
    return 0;
}