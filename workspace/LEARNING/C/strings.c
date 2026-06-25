#include<stdio.h>
#include<string.h>

// str is sequence of char in an array structure(index start from 0 to size-1)
// char size is 1 bytes while int is 4 bytes [1 byte = 8bits]
// ascii values -> A is 65 , a is 97 and 0 is 48 and 9 is 57
// \0 is a null chr and its ascii val is 0
void strg_declare(){
    char arr[5]={'a','b','c','d','e'}; // complusory to write '\0'
    for(int j=0;j<5;j++){
        printf("%c ",arr[j]);
    }
    for(int k=0;arr[k]!='\0';k++){
        printf("%c ",arr[k]);
    }
    // size of arr must include '\0' in it
    char str[]="Hello World"; // \0 optional to write in string here (has to be Add in size of arr)
    // size of str arr can be greater than len of str but cannot be = or less than len of str
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]); // str[i] == i[str] same goes for *(str+i) or *(i+str)
        i++; 
    }
    return;
}
// address of any char arr is its address of its 1st(0th index) elem
void print_str(char str[]){
    // for(int i=0;str[i]!='\0';i++){
    //     printf("%c",*(str+i));
    // }
    // or 
    printf("%s",str);
    //puts(str); // puts give \n at end
    return;
}
int len_str(char str[]){
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++; // for size of arr --> len+1 1 for \0
    }
    /*another way is that 
    int len=sizeof(str)/sizeof(str[0]);
    printf("len of str arr is %d",len-1); {-1 bcs its include '\0' in it}
    */
    return len;
}
void modify_str(){
    char str[]="Hello World";
    str[1]='u'; // any index out limit the size will not affect str
    printf("%s",str); // using format specifer to print str instead using loop
}

void input_str(){// input str without loops
    int ArrSize;
    printf("enter size of arr: ");
    scanf("%d",&ArrSize);
    char str[ArrSize];
    // scanf("%s",str); // only the 1st word will be consisdered (before space)
    // scanf("%[^\n]s",str); // now it can store entire sentence
    gets(str);// saved entire sentence
    puts(str);
    return;
}

void reverse_str(char str[]){
    /*if given to take input then 
    char  str[]; --> will give error as declaring without an arr size
    but declaring and intiating at same time wont give error
    gets(str);
    */
    int StrSize=len_str(str);
    char  rev_str[StrSize];
    for(int i=0;i<=StrSize-1;i++){
        // printf("%c",str[i]);
        rev_str[i]=str[StrSize-1-i];
    }
    /*
    for(int i=0,j=strsize-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
        */
    return;
}

void is_palindrome(char str[]){
    int len=len_str(str);
    int flag=1;
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(str[i]!=str[j]){
            flag=0;
        }
    }
    if(flag==0) printf("not a palindrome");
    else printf("it is a palindrome");
    
    return;
}

/* use of string built in functions
strlen(char* str)--> count len of str
strcpy(char* str1,char* str2) --> copies content of 2 into 1
strcat(char*str1,char* str2) --> add content of 2 into str1 and saved in str1
strcmp(char* s1,char*s2) --> compare two strings
strcpy(char s1,char s2,int len) --> copy of substring of s2 into s1
*/ 
void pointer_string(){ // no changes even changing value of str2
    char* str1="Physics wallah";
    printf("the org str is :%s",str1);
    char* str2;
    str2=str1;
    printf("\nstr2 is :%s",str2);
    str2="college wallah";
    printf("\nnew string str2 is :%s",str2);
    printf("\nstr1 is :%s",str1);
    return;
}
void shallow_copy(){ // changes in str1 reflects in str2
    
    char str1[]="Physics wallah";
    printf("org str is:%s",str1);
    char* str2 = str1; // str2 pointing to address of str1
    str1[0]='M';
    printf("str2 is:%s",str2);
    if(str1==str2){
        printf("str1 is = to str2");
    }
    return;
}
void deep_copy(){// diff char arr pointing to different address
    char str1[]="Hello";
    char str2[]="Hello";
    // even though both are equal but are stored in diff address
    if(str1==str2){ // not equal 
        printf("%s",str1);
    }
    else {
        printf("not equal");
    }
    return;
}
int string_functions(){
    char str1[] = "Ramanujan";
    int len= strlen(str1); // len function doesnt considered "\0" in it
    char str2[len];
    strcpy(str2,str1);
    strcat(str1,str2);
    strcmp(str1,str2); // returns false/true
    
    return 0;
}
int insert_elem_atgivenIndex(){
    int index;
    int char_insertion;
    printf("enter the index elem to be pushed: ");
    scanf("%d",&index);
    // int ArrSize;
    // printf("enter arr size: ");
    // scanf("%d",&ArrSize);
    char str[100];
    printf("enter the str: ");
    //scanf("%[^\n]s",str);
    scanf("%s",&str);
    printf("entered string was:%s",str);
    printf("\nenter the char to be pushed: ");
    scanf("%d",&char_insertion);
    int len= strlen(str);
    printf("the len is :%d",len);
    for(int i=len;i>index;i--){
        str[i+1]=str[i];
    }
    str[index]=char_insertion;
    printf("\nnew string is :%s",str);
}


// resume str lec from  
int main(){
    pointer_string();
    return 0;
}