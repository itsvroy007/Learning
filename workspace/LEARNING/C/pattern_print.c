
#include <stdio.h>

void display_rec(){
    int length,breadth;
    printf("enter the len: ");
    scanf("%d",&length);
    printf("enter the breadth: ");
    scanf("%d",&breadth);
    for (int i=1;i<=breadth;i++){
        for (int j=1;j<=length;j++){
            printf(" * ");
        }
        printf("\n");
    }
}

int dis_sqnum_pattern(){
    int num;
    printf("enter your num: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){ // num of rows -> i
        for (int j=1;j<=num;j++){ // num of column -> j
            printf("%d ",j); // if j ki jagah * toh star sq banega
        }
        printf("\n");
    }
    return 0;
}

int dis_sqchar_pattern(){ /* proper sq shape mai i<=num and j<=num*/
    int num;            // but rght tri mai i<=num and j <=i 
    //char ch = 'A';  for continuous increment in char or num like A \n BC \N DEF cont..
    printf("enter your num: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){ // num of rows -> i
        char ch = 'A';
        for (int j=1;j<=num;j++){ // num of column -> j
            printf("%c",ch); // if j ki jagah * toh star sq banega
            ch++;
        }
        printf("\n");
    }
    return 0;
}

int star_rgt_tri(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            printf(" * "); // if * -> %d j then num ka tri ban jayega
        }
        printf("\n");
    }
    return 0;
}

int invrt_star_rgt_tri(){
    int num;
    printf("enter the num: ");
    scanf("%d",&num);         // sir method
    for (int i=num;i>0;i--){ // i=1;i<=num;i++
        for (int j=1;j<=i;j++){ // j=1;j<=n+1-i;j++
            printf(" * "); // * ki jagah j then rev num tri banega
        }
        printf("\n");
    }
    return 0;
}

int oddnum_tri(){
    int num;
    printf("enter the num(rows): ");
    scanf("%d",&num);         
    for (int i=1;i<=num;i++){       // int a=1 (outer loop mai)
        for (int j=1;j<=i*2;j++){ // J<=i  then inner loop mai print a ke baad mai a=a+2
            if (j%2!=0){ // j%2==0 then even print honge
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}

int alph_num_tri(){
    int num;
    printf("enter the num of rows: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        if (i%2!=0){
            for (int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else {
            for (int k=1;k<=i;k++){
                printf("%c ",(char)k+64);
            }
        }
        printf("\n");
    }
    return 0;
}

int oddnum_star_pattern(){
    int num;
    printf("enter your num must be odd: ");
    scanf("%d",&num);
    if (num%2!=0){
        for (int i=1;i<=num;i++){
            if (i==(int)num/2+1){
                for (int j=1;j<=num;j++){
                    printf(" * ");
                }
                printf("\n");
            }
            else {
                for (int j=1;j<=num;j++){
                    if (j==(int)num/2+1){
                        printf(" * ");
                    }
                    else {
                        printf("   ");
                    }
                }
            printf("\n");
            }
        }
    }
    else 
        printf("wrong input");
    return 0;
}

int alt_oddnum_starpat(){
    int num;
    printf("enter your num for rows: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int j=1;j<=num;j++){
            if (i==num/2+1 || j == num/2+1){
                printf(" * ");
            }
            else printf(" # "); // give blank for just stars
            
        }
    printf("\n");
    }
    return 0;
}

int hollow_rect(){
    int row,col;
    printf("enter your no of rows: ");
    scanf("%d",&row);
    printf("enter your num of col: ");
    scanf("%d",&col);
    for (int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if (i==1 || i==row || j==1 || j==col){
                printf(" * ");
            }
            else printf("   ");
        }
        printf("\n");
    }
    return 0;
}

int cros_star(){
    int num;
    printf("enter your num: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){ 
        for (int j=1;j<=num;j++){ 
            if( i==j || (i+j)==6){
                printf("*");
            } // if j ki jagah * toh star sq banega
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int floyd_tri(){
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    int a =1;
    for (int i=1;i<=num;i++){ // num of rows -> i
        
        for (int j=1;j<=i;j++){ // num of column -> j
            printf("%d ",a); // if j ki jagah * toh star sq banega
            a=a+1; // a=a+2 for odd floyd tri 
        }
        printf("\n");
    
    }
    return 0;
}

int Zero_One_tri(){
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    int a;
    for (int i=1;i<=num;i++){ // num of rows -> i
        if (i%2!=0) a=1;
        else a=0;
        for (int j=1;j<=i;j++){ // num of column -> j
            printf("%d ",a); // if j ki jagah * toh star sq banega
            if (a==0) a=1;
            else a=0;
        }
        printf("\n");
    
    }
    return 0;
}
int star_pyrmid(){
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        for(int j=num-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int star_tri_mast(){ // same for alphabet
    int num;
    printf("enter your num: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        for (int j=1;j<=num-i;j++){
            printf(" # ");
        }
        for (int k=1;k<=i;k++){
            printf(" * "); // * ki jagah ABCD ke liye typecasting (char)k+64
        }
    printf("\n");
    }
}


int rhombus_patt(){
    int num;   // taken hint invt rght tri + rect
    printf("enter the num of rows: ");
    scanf("%d",&num);
    for (int i=num;i>0;i--){
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=num;k++){
            printf(" * ");
        }
        printf("\n");
    }
        return 0;
}

int str_pyramid(){ // star/nu/alpha pyramid
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num-i;j>0;j--){
            printf(" ");
        }
        for (int k=1;k<=2*(i)-1;k++){ // or 2*-1 ki jagah aap define
        //  a new var then inside loop put var=var+2 cond
            printf("*"); // use %d k for num pyramid %c char on k+64 for alp pyrmid
        }
        printf("\n");
    }
    return 0;
}

int num_pyrmid_mast(){ // 1 \n 121 \n 12321 ...  
    int num;
    printf("Enter you num of row:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num-i;j>0;j--){
            printf("#");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);// same for alph by char k+64 and for l loop
        }
        for(int l=i-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
}
int star_diamond(){
    int num;
    printf("enter you num for rows:");
    scanf("%d",&num);
    int num_sp=num/2;
    int num_str=1;
    int mid_line=num/2+1;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num_sp;j++){// loop for space 
            printf(" ");
            }
        for(int k=1;k<=num_str;k++){
            printf("*");
        }
        if(i<mid_line){
            num_sp--;
            num_str+=2;
        }
        else{
            num_sp++;
            num_str-=2;
        }
        printf("\n");
    }
    return 0;
}

int str_tri_rev(){
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    int num_sp=0;
    int num_str=num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num_sp;j++){
            printf(" ");
        }
        for(int k=1;k<=num_str;k++){
            printf("*");
        }
        num_sp++;
        num_str--;
        printf("\n");
    }
    return 0;
}
int str_tri_pyramid_mast(){
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    int num_sp=1;
    int num_str=num;
    for(int i=1;i<=num*2+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num_str;j++){
            printf("*");
        }
        for(int k=1;k<=num_sp;k++){
            printf(" ");
        }
        for(int j=1;j<=num_str;j++){
            printf("*");
        }
        num_str--;
        num_sp+=2;
        printf("\n");
    }
}
int num_pyramid_mast(){
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    int num_sp=1;
    int a=num+1; 
    for(int i=1;i<=num*2-1;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=num-1;i>0;i--){ // a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",j);// print of a instead
            //  of j then a++ in same loop
        }
        for(int k=1;k<=num_sp;k++){
            printf("  "); // a++ in next line
        }
        
        for(int l=a;l<=num*2-1;l++){
            printf("%d ",l);// l=1;l<=num_st;l++
        } // print a then a++
        printf("\n");
        num_sp+=2; // num_str--;
        a++;
    }
    return 0;   
}
int alph_pyramid_mast(){// just convt int into char nd +64 in all
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    int num_sp=1;
    int a=num+1; 
    for(int i=1;i<=num*2-1;i++){
        printf("%c ",(char)i+64);
    }
    printf("\n");
    for(int i=num-1;i>0;i--){ // a=1;
        for(int j=1;j<=i;j++){
            printf("%c ",(char)j+64);// print of a instead
            //  of j then a++ in same loop
        }
        for(int k=1;k<=num_sp;k++){
            printf("  "); // a++ in next line
        }
        
        for(int l=a+64;l<=num*2-1+64;l++){
            printf("%c ",(char)l);// l=1;l<=num_st;l++
        } // print a then a++
        printf("\n");
        num_sp+=2; // num_str--;
        a++;
    }
    return 0; 
}
int num_revnum_pyramid(){
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    int num_sp=1;
    int a=num-1;
    for(int i=1;i<=num;i++){
        printf("%d ",i);
    }
    for(int i=num-1;i>0;i--){
        printf("%d ",i);
    }
    printf("\n");
    for(int j=num-1;j>0;j--){ // a=1;
        for(int k=1;k<=j;k++){
            printf("%d ",k);// print of a instead
            //  of j then a++ in same loop
        }
        for(int l=1;l<=num_sp;l++){
            printf("  "); // a++ in next line
        }
        for(int m=a;m>0;m--){
            printf("%d ",m);// l=1;l<=num_st;l++
        } // print a then a++
        printf("\n");
        num_sp+=2; // num_str--;
        a--;
    }
    return 0; 
}
int hollow_num_rect(){
    int num;
    printf("enter your num for rows:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=2*num-1;j++){
            if(i==1 || j==1 || i==num || j==2*num-1){
                printf(" %d ",j);
            }
            else 
                printf("   ");
        }
        printf("\n");
    }
    return 0; 
}

int inv_star_pyramid(){
    int num;
    printf("enter your num of rows: ");
    scanf("%d",&num);
    int num_str=num;
    for(int i=1;i<=num;i++){
        for(int p=1;p<i;p++){
            printf("  ");
        }
        
        for (int k=1;k<=2*num_str-1;k++){ // or 2*-1 ki jagah aap define
        //  a new var then inside loop put var=var+2 cond
            printf("* ");
             // use %d k for num pyramid %c char on k+64 for alp pyrmid
        }
        num_str--;
        printf("\n");
    }
    return 0;
}

int special_patt(){ 
    /*4444
    4334
    4334
    4444*/
}// still left to finish

int temp(){
    
}
int main() {
    str_pyramid();
    temp();
    return 0;
}
