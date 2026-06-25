
#include <stdio.h>

int count_digit(){
    int num,count=0;
    printf("enter your num:");
    scanf("%d",&num);
    
    for (int i=0;num>0;i++){
        num=num/10;
        count=count+1;
        if (num==0){
            break;
        }
    }
    printf("the count of digit is %d",count);
}

int sumofdigit(){
    int num,sum=0;
    printf("enter you num:");
    scanf("%d",&num);
    for (int i=0;num>0;i++){
        sum=sum+num%10;
        num=num/10;
    }
    printf("the sum of digit of num is %d",sum);
}

int sumofevendigit(){
    int num,sum=0,rem;
    printf("enter your num:");
    scanf("%d",&num);
    for (int i=0;num>0;i++){
        rem=num%10;
        if (rem%2==0){
            sum=sum+rem;
        }
        num=num/10;
    }
    printf("sum of even digit in num is %d",sum);
}

int rev_num(){
    int num,rem,rev=0;
    printf("enter your num:");
    scanf("%d",&num);
    printf("your entered num is %d",num);
    for (int i=0;num>0;i++){
        rem=num%10;
        rev=rev*10+rem; 
        num=num/10;
    }
    printf("\nthe rev of entered num is %d",rev);

}

void is_palindrome(){
    int num,rem,rev=0;
    printf("enter your num:");
    scanf("%d",&num);
    printf("your entered num is %d",num);
    int num_cpy=num; // need a cpy of num as its value changes later
    for (int i=0;num>0;i++){
        rem=num%10;
        rev=rev*10+rem; 
        num=num/10;
    }
    printf("\nthe rev of entered num is %d",rev);
    if (num_cpy==rev)
        printf("\nentered num is a palindrome");
    else 
        printf("\nnot a palindrome");

} 

void is_armstrong(){ // armstrong is entered num digits ka cube ka sum == num
    int num,temp_num,cubic_sum=0,count=0;
    printf("enter your num:");
    scanf("%d",&num);
    temp_num=num;
    while(num>0){
        int rem=num%10;
        num=num/10;
        count++;
        cubic_sum= cubic_sum + rem*rem*rem;
    }
    printf("\ncount digit of the entered num is %d",count);
    if (cubic_sum==temp_num){
        printf("\n%d entered num was ARMSTRONG",temp_num);
    }
    else printf("\n%d entered num was not a armstrg",temp_num);
}

void fibonacci_series(){
    int a=0,b=1,n,next_term;
    printf("enter your num till series to be printed:");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for (int i=1;i<=n-2;i++){ // n-2 bcs 0 n 1 are first two terms
        next_term=a+b;
        printf("\t%d",next_term);
        //printf("\n the %d term of fibonacci is %d ",i+2,next_term);
        a=b;
        b=next_term;
    }
}

int gp_display(){
    int n,a,term;
    float cr;
    printf("enter num of terms to be display:");
    scanf("%d",&n);
    printf("enter the first term");
    scanf("%d",&a);
    printf("enter the comm ratio");
    scanf("%f",&cr);
    term=a;
    for (int i=1;i<=n;i++){
        printf("%d \t",term);
        term=term*cr;
    }
    return 0;
}

int ap_display(){
    int n,a,term;
    float cd;
    printf("enter num of terms to be display:");
    scanf("%d",&n);
    printf("enter the first term");
    scanf("%d",&a);
    printf("enter the comm diff");
    scanf("%f",&cd);
    term=a;
    for (int i=1;i<=n;i++){
        printf("%d \t",term);
        term=term+cd;
    }
    return 0;
}

int ap_positiveterm_display(){
    int n,a,term;
    float cd;
    printf("enter num of terms to be display:");
    scanf("%d",&n);
    printf("enter the first term");
    scanf("%d",&a);
    printf("enter the comm diff");
    scanf("%f",&cd);// cd has to be negative else loop will go to infinite
    term=a;
    for (int i=1;term>0;i++){
        printf("%d \t",term);
        term=term+cd;
    }
    return 0;
}

int num_pow_num2(){ 
    int num1,num2,sol=1;
    printf("enter base and power raised to ");
    scanf("%d %d",&num1,&num2);
    if (num2>=0){
        for (int i=1;i<=num2;i++){
        sol=sol*num1;
        }
    }
    else printf("wrong input in num2");
    printf("\n%d raised to power %d is %d",num1,num2,sol);
}

int ascii_value(){
    char ch;
    int num=65; // A is 65
    printf("enter your char:");
    scanf("%c",&ch);
    printf("the vaule of %c is %d",ch,(int)ch);
    for (int i=65;i<=num+25;i++){
        printf("\nthe ascii value of char %c is %d",(char)i,i);
    }
    for (int i=97;i<=97+25;i++){ // a is  97
        printf("\nthe ascii value of char %c is %d",(char)i,i);
    }
}



int main(){
    num_pow_num2();
    
    return 0;
}
