#include<iostream>
using namespace std;

int perimeterAndAreaOfFigures(){
    cout<<"choice the figures by entering num "<<endl;
    cout<<"1. CIRCLE circumference n AREA\n";
    cout<<"2. Square perimeter n area\n";
    cout<<"3. Rectangle perimeter n area\n";
    cout<<"4. Triangle perimeter n area\n";
    int choice;
    cin>>choice;
    if(choice == 1){
    // area of circle
    int radius ;
    cout<<"enter circle radius : ";
    cin>>radius;
    cout<<"area of circle is "<< 3.14*radius*radius<<endl;
    cout<<"circumference is " << 2*3.14*radius<<endl;
    }
    else if(choice == 2){
    // area of square
    int side ;
    cout<<"enter sq side : ";
    cin>>side;
    cout<<"area of square is "<< side*side<<endl;
    cout<<"perimeter of sq is "<< 4*side<<endl;
    }
    else if(choice == 3){
    // area of rectangle
    int length,breadth ;
    cout<<"enter length of rect : ";
    cin>>length;
    cout<<"enter breadth of rect : ";
    cin>>breadth;
    cout<<"area of rectangle is "<< length*breadth <<endl;
    cout<<"perimeter of reactangle is "<< 2*(length+breadth)<<endl;
    }
    else if(choice == 4){
    // area of triangle
    int base, height ;
    cout<<"enter base of rect : ";
    cin>>base;
    cout<<"enter height of rect : ";
    cin>>height;
    cout<<"area of triangle is "<< (float)(base*height)/2 <<endl;
    //cout<<"perimeter of triangle is "<< side1+side2+side3 <<endl;
    }

    else cout<<"wrong choice"<<endl;

}
int simpleInterest(){
    int p,r,t;
    cout<<"\nenter principle amt :";
    cin>>p;
    cout<<"enter rate of interest :";
    cin>>r;
    cout<<"enter time :";
    cin>>t;
    cout<<"\nsimple interest is: "<<(p*r*t)/100;
    cout<<"\namount to be paid :"<< p + (p*r*t)/100<<endl; 
}
int oddEven(){
    int num;
    cout<<"\nenter your num :"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"entered num is even"<<endl;
    }
    else cout<<"entered num is odd";

}
int absoluteNum(){
    // absolute num --> same as modulus in maths 
    int num1;
    cout<<"\nenter your num1 :";
    cin>>num1;
    if(num1<0){
        // change value in num1 --> num1 = -(num1)
        cout<<"absolute num1 is :"<< -(num1)<<endl;
    }
    else cout<<"absolute num1 is :"<<num1<<endl;
}
int profitloss(){
    float cp,sp;
    cout<<"enter the cost price of item :";
    cin>>cp;
    cout<<"enter the selling price of item :";
    cin>>sp;
    if(sp>cp){
        float profit = sp-cp;
        cout<<"profit made is :"<< profit<<endl;
        cout<<"profit percentage is "<< (profit/cp)*100<<endl;
    }
    else if(cp>sp){
        float loss = cp-sp;
        cout<<"loss faced is :"<< loss <<endl;
        cout<<"loss percentage is "<< (loss/cp)*100<<endl;
    }
    else cout<<"no loss no profit";
}
int validTriangle(){
    // rule -> sum of any 2 side > 3rd side 
    int side1,side2,side3;
    cout<<"enter len of side1 :"<<endl;
    cin>>side1;
    cout<<"enter len of side2 :"<<endl;
    cin>>side2;
    cout<<"enter len of side3 :"<<endl;
    cin>>side3;
    if(side1+side2>side3 and side2+side3>side1 && side3+side1>side2){
        cout<<"it is a valid triangle\n";
    }
    else cout<<"invalid triangle";
}

int greatestNum(){ // for least just change > to < less than symbol
    int num1,num2,num3;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    cout<<"enter num3 :";
    cin>>num3;
    if(num1 > num2 and num1 > num3){
        cout<<"max num is :"<<num1<<endl;
    }
    else if(num2 > num1 and num2 > num3){
        cout<<"max num is :"<<num2<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<"max num is :"<<num3<<endl;
    }
    else if(num1==num2 and num1==num3){
        cout<<"all num are equal\n";
    }
}
int grading(){
    int marks;
    cout<<"enter your marks :";
    cin>>marks;
    if(marks>80){
        cout<<"Grade A \n Very Good";
    }
    else if(marks>60 and marks<=80){
        cout<<"Grade B \n Good";
    }
    else if(marks>40 and marks<=60){
        cout<<"Grade C \n Average";
    }
    else if(marks>0 and marks<=40){
        cout<<"Grade D \n Fail";
    }
    else cout<<"wrong input";
}
int quadrant(){
    int x,y;
    cout<<"enter the x :";
    cin>>x;
    cout<<"enter the y :";
    cin>>y;
    if(x>0 and y>0){
        cout<<"1st quadrant";
    }
    else if(x<0 and y>0){
        cout<<"2nd quadrant";
    }
    else if(x<0 and y<0){
        cout<<"3nd quadrant";
    }
    else if(x<0 and y<0){
        cout<<"4nd quadrant";
    }
    else if(x=0){
        cout<<"point is on y-axis";
    }
    else if(y=0){
        cout<<"point is on x-axis";
    }
    else cout<<"point is on origin";
}
int switchCalc(){
    int num1,num2;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    char ch;
    cout<<"enter char :";
    cin>>ch;
    switch (ch){
        case '+':
            cout<<"sum of num1 + num2 is :"<<num1+num2<<endl; 
            break;
        case '-':
            cout<<"sub of num1 - num2 is :"<<num1-num2<<endl; 
            break;
        case '*':
            cout<<"product of two num is :"<<num1*num2<<endl;
            break;
        case '/':
            cout<<"division of two num num1/num2 is :"<<num1/num2<<endl;
            break;
        case '%':
            cout<<"modulus of two num is :"<<num1%num2<<endl; 
            break;
        default :
            cout<<"invalid input";
    }
}
int table(){
    int num;
    cout<<"enter the num :";
    cin>>num;
    for(int i=1;i<11;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
}
int displayOfAP(){
    int first_term,comm_diff,numOfterms;
    cout<<"enter 1st term :";
    cin>>first_term;
    cout<<"enter comm_diff :";
    cin>>comm_diff;
    cout<<"enter num of terms :";
    cin>>numOfterms;
    int temp = first_term;
    for(int i=1;i<=numOfterms;i++){
        cout<<temp<<" ";
        temp=temp+comm_diff;
    }
    /*
    for(int i=first term;i<=last_term;i+/-=comm_diff){
        cout<<i<<" ";
    }
    */
}
int displayOfGP(){
    int first_term,comm_ratio,numOfterms;
    cout<<"enter 1st term :";
    cin>>first_term;
    cout<<"enter comm_ratio :";
    cin>>comm_ratio;
    cout<<"enter num of terms :";
    cin>>numOfterms;
    int temp = first_term;
    for(int i=1;i<=numOfterms;i++){
        cout<<temp<<" ";
        temp=temp*comm_ratio;
    }
}
int factorsOfNum(){
    int num;
    cout<<"enter num :";
    cin>>num;
    int factor=1;
    for(int i=1;i<=num/2;i++){ //i<=num for all factors 
        if(num%i==0){
            cout<<i<<" ";
        }
        factor=i;
    }
    cout<<"\nThe 2nd highest factor is :"<<factor;
}

int is_CompositeOrPrime(){
    int num;
    cout<<"enter num :";
    cin>>num;
    bool flag = true; // letting it is a prime 
    if(num==1) cout<<"Neither prime nor composite"<<endl;
    else if(num<=0) cout<<"wrong input"<<endl;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag = false ;
            cout<<"it is composite num"<<endl;
            break;
        }
        else cout<<"it is a prime num"<<endl;
        break;
    }
    
} 

int countDigit(){
    int num;
    cout<<"enter your num :";
    cin>>num;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<"the total digit in num is :"<<count;
}
int sumOfDigit(){
    int num;
    cout<<"enter your num :";
    cin>>num;
    int sum=0;
    while(num>0){ 
        // for even digit sum -> rem=num%10 if (rem%2==0) then sum=sum+rem
        sum= sum + num%10;
        num=num/10;
    }
    cout<<"the sum of digit of num is :"<<sum;
}
int productOfDigit(){
    int num ,rem,prod=1;
    cout<<"enter your num :";
    cin>>num;
    if(num<=0){
        cout<<"enter number greater than 0";
    }
    while(num>0){
        rem=num % 10;
        if(rem!=0){
            prod = prod*rem;
        }
        num=num/10;
    }
    cout<<"the product of digit of num is :"<<prod;
    return 0;
}
int reverseNum(){
    int num,rev=0,rem;
    cout<<"enter your num :";
    cin>>num;
    int temp_num=num;
    while(num>0){
        rem=num%10;
        rev = rev*10 +rem ;
        num=num/10;
    }
    cout<<"the reverse of org num is :"<<rev<<endl;
    if(temp_num == rev){
        cout<<"it is a palindrome"<<endl;
    }
}
int factorial(int num){
    if (num==0 or num ==1 ) return 1;
    return num * factorial(num-1);
}
int AsciiValue(){
    // for all alphabet A = 65 ,a = 97 , 0 char = 48
    for(int i=65;i<=122;i++){
        cout<<"Ascii vale of "<<(char)i<<" is "<<i<<endl;
    }
}

int swapTwoNum(){
    int num1,num2;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    // swapping two num without 3rd var
    num1= num1+num2;
    num2=num1-num2;
    num1=num1-num2; 
    cout<<"num1 is :"<<num1<<endl;
    cout<<"num2 is :"<<num2<<endl;
    // using 3rdd var
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"num1 is :"<<num1<<endl;
    cout<<"num2 is :"<<num2<<endl;
    return 0;
}

int PnC(){
    // permutation and combination
    // nPr = n !/(n-r)! and nCr = n! / (r! * (n-r)! or nPr / r!
    int n,r;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter r :";
    cin>>r;
    int permutation = factorial(n) / factorial(n-r);
    int combination = permutation / factorial(r) ;
    cout<<"the permutation of n and r is "<<permutation<<endl;
    cout<<"the combination of n and r is "<<combination<<endl;
}
int SumOfNaturalNum(int num){
    // int natural_sum = (num * (num+1))/2   // odd natural num sum= num * num
    if (num == 1) return 1;
    return num + SumOfNaturalNum(num-1);
    // sum =0 for(int i =1;i<=num;i++) sum=sum+i  

}
int power(int a,int b){
    // a raised to power b
    if(b==0) return 1;    
    return a*power(a,b-1);
    // loops -> output=1 for(int i=b;i>0;i--) output= ouput*a
}
int fibonnaciSeries(){
    int a=1,b=1;
    int n_term,sum;
    cout<<"enter num of terms to be printed :";
    cin>>n_term;
    sum = a + b;
    cout<<a<<" "<<b;
    for(int i=1;i<=n_term-2;i++){
        cout<<" "<<sum;
        a=b;
        b=sum;
        sum=a+b;
    }
}
int fibo(int n_term){
    // to print nth term of fibo
    if(n_term==1 or n_term==2) return 1;
    return fibo(n_term-1)+fibo(n_term-2);
}

int arrElemSum(int arr[],int size){
    // arr declaration nd initialization same as C
    // int arr[] = {elem1,elem2,elem3.....};
    int Elems_Sum=0;
    for(int i=0;i<size;i++){
        Elems_Sum += arr[i];
    }
    cout<<"sum of all elem of arr is : "<<Elems_Sum<<endl;
    return 0;
}
int arrElemprod(int arr[],int size){
    int Elems_prod=1;
    for(int i=0;i<size;i++){
        Elems_prod *= arr[i];
    }
    cout<<"prod of all elem of arr is : "<<Elems_prod<<endl;
    return 0;
} 
void Max_MinInArr(int arr[],int size){
    // let max=arr[0] then compare to all elem 
    int max= arr[0];
    int min= arr[0];
    for(int i=1;i<size;i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"max elem of arr is : "<<max<<endl;
    cout<<"min elem of arr is : "<<min<<endl;
    return;
} 
int squareElemArr(int size){
    int arr[size];
    for(int i=0;i<=size-1;i++){
        arr[i]= (i+1)*(i+1);
    }
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    cout<<"hello pw";
    cout<<endl; // endl endline move cursor to next line
    cout<<"we r studying cpp\n";
    // "\n" work same as endl
    cout<<"hello"<<"\n"<<"nice keep going\n";
    int x=5,y=6; // declaration and initialization work same as c
    int sum=x+y;
    cout<<sum<<endl;
    
    // ternary operator condition? exp1 True : exp2 False
    // (num%2==0) ? cout<<"even" : cout<<"odd";
    
    int arr1[5]={1,5,7,9,4};
    
}