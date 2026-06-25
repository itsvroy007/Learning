#include <stdio.h>

// arr -> storing same data type value in an order 
// index start from 0 to n-1 (NO -ve indexing)
// contiuous memory allocation
int arr_intro(){
    int price[3]; // price[3]={10,20,30}; same meaning
    printf("enter item1 price:\n");
    scanf("%d",&price[0]);
    printf("enter item2 price: \n");
    scanf("%d",&price[1]);
    printf("enter item3 price:\n");
    scanf("%d",&price[2]);
    printf("finalprice of item1= %f",(price[0]+(price[0]*0.18)));
    printf("finalprice of item2= %f",(price[1]+(price[1]*0.18)));
    printf("finalprice of item3= %f",(price[2]+(price[2]*0.18)));
    return 0;
}

int arr_in_out(){
    int num_size;
    printf("enter size of arr: ");
    scanf("%d",&num_size);
    int arr[num_size];
    printf("entering value : ");
    for(int i=0;i<num_size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nprinting elem of arr : ");
    printf("[");
    for(int i=0;i<num_size;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
    printf("\nprinting reverse arr: ");
    printf("[");
    for(int i=num_size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    printf("]");
    return 0;
}
int arr_elem_sum_prod(){
    int len,sum=0,prod=1;
    printf("enter len of arr :  ");
    scanf("%d",&len);
    int arr1[len];
    printf("enter %d elem ",len); 
    for(int i=0;i<len;i++){
        // printf("enter the %d pos in arr: ",i);
        scanf("%d",&arr1[i]);
    }
    for (int i=0;i<len;i++){
        sum=sum+arr1[i];
        prod=prod*arr1[i];
        // printf("%d ",arr1[i]);
    }
    printf("the sum of all elem is: %d",sum);
    printf("the prod of all elem is :%d",prod);
    return 0;
}

int count_odd_elem(){// take an elem from user & compare with elem of arr in count loop
    int count=0;
    int arr[10];
    for(int i=0;i<10;i++){
        printf("enter your elem:");
        scanf("%d\n",&arr[i]);
    }
    // loop for count odd elem
    for(int i=0;i<10;i++){
        if (arr[i]%2 != 0){
            count = count+1;// or use count++;
        }
    }
    printf("the total num of odd num is:%d",count);
    return 0;
}

int arr_max_min_elem(){
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],temp_arr[n];
    printf("Enter %d num of elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize max and min
    int max = arr[0];
    int min = arr[0];
    // Find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}

int second_max_elem(){ // use <limit.h> and its function i.e INT_MIN for = max and 2ndmax
    int arr[8]={1,4,5,6,7,67,54,56};
    int max_elem=arr[0],second_max=arr[0];
    for(int i=0;i<=7;i++){
        if(max_elem<arr[i]){
            //second_max=max_elem; // storing prev max value
            max_elem=arr[i]; // max val changes and stores new max 
        }
        else if(second_max<arr[i] && arr[i]!=max_elem){// this will run if if cond failed
            second_max=arr[i];
        }
    }
    // for(int i=0;i<=7;i++){
    //     if(second_max<arr[i] && arr[i]!=max_elem){
    //         second_max=arr[i];
    //     }
    // }
    printf("Max elem is: %d\n2nd max elem is: %d",max_elem,second_max);
    return 0;
}

int count_ve_term_arr(){
    int num;
    printf("enter the size of arr:");
    scanf("%d",&num);
    int arr[100];
    for (int i=0;i<=num-1;i++){
        printf("enter the elem of arr post %d:",i);
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int j=0;j<=num-1;j++){
        printf("%d\t",arr[j]);
        if (arr[j]<0){
            count++;
        }
    }
    printf("total -ve term in arr is: %d",count);
    return 0;
}

int modify_arr(){// arrays are passes by reference (values get changes in their list too)
    int num_size;
    printf("enter your arr size: ");
    scanf("%d",&num_size);
    int arr[num_size];
    printf("enter elem: ");
    for(int i=0;i<num_size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num_size;i++){
        printf("%d ",arr[i]);
    }
    // modification odd index elem 2times while even get add of 10 
    for(int i=0;i<num_size;i++){
        // printf("%d ",arr[i]);
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else arr[i]=arr[i]*2;
        printf("%d ",arr[i]);
    }
    return 0;
}

int diff_oddeven_arr(){// diff of sum_even indices and sum_odd indices
    int num_size,sum_odd=0,sum_even=0;
    printf("enter your arr size: ");
    scanf("%d",&num_size);
    int arr[num_size];
    printf("enter elem: ");
    for(int i=0;i<num_size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num_size;i++){
        printf("%d ",arr[i]);
    } printf("\n");
    for(int i=0;i<num_size;i++){
        if(i%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
    printf("vale of sum of even is %d and sum of odd is %d ",sum_even,sum_odd);
    printf("diff b/w sum_even and sum_odd is %d ",sum_even-sum_odd);
    return 0;
}

int rev_arr(){// including palidrome check
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n],temp_arr[n];
    printf("Enter %d num of elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // storing elem of arr in rev arr
    for(int i=0;i<n;i++){
        temp_arr[i]=arr[n-1-i];
        printf("%d ",arr[i]);
    }printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",temp_arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            printf("not a palindrome");
            return -1;
        }
    }
    printf("it is a palindrome");
    return 0;
}

void reverse_arr(int arr[],int a,int b){// rev part of arr in same org arr no temp arr
    // int arr_size; size of arr input by user
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];// swapping elem from index a to index b
        arr[i]=arr[j];
        arr[j]=temp;
    }// use this in main fuct with defined arr and its size then print 
    return ;
}

int count_pairofelem(){// count pair of sum of elem = to user input num
    int arr[8]={1,2,3,4,5,6,7,8};
    int num,count_pair=0;
    printf("enter num: ");
    scanf("%d",&num);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){ // put j=0 for symmertric pair 
            if(num == arr[i]+arr[j]){
                printf("(%d,%d)",arr[i],arr[j]);
                printf("\n");
                count_pair++;
            }
        }
    }
    printf("total num of pair count is %d",count_pair);
    return 0;
}

int count_triplet(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int num,count_pair=0;
    printf("enter num: ");
    scanf("%d",&num);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(num == arr[i]+arr[j]+arr[k]){
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                    printf("\n");
                    count_pair++;
                }
            }
        }
    }
    printf("total num of triplet count is %d",count_pair);
    return 0;
    
}

int arr_rotation(){// shifting of elem by k steps 
    int num,k;
    printf("enter your arr size: ");
    scanf("%d",&num);
    printf("enter your k steps to be shifted: ");
    scanf("%d",&k);
    int arr[num];
    printf("enter your arr elems:");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("org arr is: ");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    printf("\nshifting of elem by k step");
    k=k%num; // minimizing value of k less than size of arr
    void reverse_arr(int arr[],int a,int b);
    reverse_arr(arr,0,num-1);
    reverse_arr(arr,0,k-1);
    reverse_arr(arr,k,num-1);
    printf("\nfinal arr is: ");
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

int search_elem(){
    int arr[7]={1,2,3,4,5,6,7};// arr can be user input
    int num,index;
    printf("Enter the number to be searched\n");
    scanf("%d",&num); // bool flag include <stdbool.h>
    int flag=0; // let's assume elem is not present 0 means false
    for(int i=0;i<7;i++){
        if(num==arr[i]){
            flag=1;// no break statm for all elem occurence 
            index=i;
            break;// to get 1st occurence rev loop to get last occ
        }
    }
    if(flag==1) printf("elem is present at index %d\n",index);
    else printf("elem is not present\n");
    return 0;
}

int find_elem(){// finding missing elem b/w a series of 1-100 
    int missElem,len_arr,arr_sum=0,seriesSum;
    int arr[9]={1,2,3,4,6,7,8,9,10};
    printf("enter your len_arr size of arr:");
    scanf("%d",&len_arr);
    for(int i=0;i<len_arr-1;i++){
        arr_sum=arr_sum+arr[i];
    }
    seriesSum= (len_arr)*(len_arr+1)/2;
    missElem=seriesSum-arr_sum;
    printf("the missing elem is %d",missElem);
    return 0;
}

int search_duplicate_Elem(){
    int len;
    printf("enter the len of arr: ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the elem in arr: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0; // assuming no duplicate elem
    for(int i=0;i<len;i++){ // search for duplicate elem
        for(int j=i+1;j<len-1;j++){
            if(arr[i]==arr[j]){
                //flag=1;
                printf("%d is the duplicate elem",arr[i]);
            }
        }
    }
    // if(flag==1) printf("duplicate elem present");
    // else printf("no duplicate elem present");
    return 0;
}

int search_unique_elem(){
    int len;
    printf("enter the len of arr: ");
    scanf("%d",&len);
    int arr[len];
    printf("enter the elem in arr: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len;i++){ // search for duplicate elem
        int flag =0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                flag=1;
            }
        }
        if(flag==0){
            printf("\nthe unique elem in arr is: %d",arr[i]);
            break; // 1st occurence unique elem (sabhi ke liye break ko remove kar do)
        }
    }
    return 0;
}

void len_strg(){
    int count=0;
    char arr1[]="vrid aawastha";
    for (int i=0;arr1[i]!='\0';i++){
        printf("%c\n",arr1[i]);
        count++;
    }
    printf("len of str is:%d",count);
    // printf("%s",arr1);
}

void name_strg(){
    char fname,lname,arr1,arr2;
    printf("enter the name:");
    scanf("%c%c",&fname,&lname);

}
int transverse_of_arr(){// still left to do
    int rows,cols;
    printf("enter rows and cols:");
    scanf("%d%d",&rows,&cols);
    int arr1[rows][cols],arr2[rows][cols],trans[rows][cols];
    return 0;
}

int temp(){
    
    return 0;
}

int main(){
    search_unique_elem();
    temp();
    return 0;
}

