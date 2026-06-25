#include<stdio.h>
#include<stdbool.h>
#include<string.h>
// find duplicate elem from arr having elem 0 to n with arr size n+1
int duplicate_elem(){
    int arr_size;
    printf("enter arr size: ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    // method 1st brute force
    for(int i=0;i<arr_size;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    int repeated_elem;
    for(int i=0;i<arr_size;i++){
        for(int j=i+1;j<arr_size;j++){
            if(arr[i]==arr[j]){
                flag=1;
                repeated_elem=arr[i];
            }
        }
    }
    if(flag==1){
        printf("the duplicate elem is %d\n",repeated_elem);
    }
    else printf("no duplicate elem present\n");

    // method 2 optimized method if only 1 elem is repeated
    int sum_arrElem=0;
    int natural_numSum = ((arr_size)*(arr_size-1))/2;
    for(int i=0;i<arr_size;i++){
        sum_arrElem+=arr[i];
    }
    printf("the duplicate elem is %d",sum_arrElem-natural_numSum);
    return 0;
}

// arr of int in ascd ord find two num in arr their sum = specific target num 
int arr_elem(){
    int arr_size;
    int target_num;
    printf("enter arr size: ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    for(int i=0;i<arr_size;i++){
        scanf("%d",&arr[i]);
    }
    printf("arr  is: ");
    for(int i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nenter target num:");
    scanf("%d",&target_num);
    // for(int i=0;i<arr_size-1;i++){
    //     for(int j=i+1;j<arr_size;j++){
    //         if(arr[i]+arr[j]==target_num){
    //             printf("the req elem of arr are %d,%d\n",arr[i],arr[j]);
    //         }
    //     }
    // }
    // 2pointer approach [sorted arr ke liye]
    int i=0,j=arr_size-1;
    while(i<j){
        if(arr[i]+arr[j]==target_num){
                printf("the req elem of arr are %d,%d\n",arr[i],arr[j]);
                i++,j--;
                //break;
            }
        else if(arr[i]+arr[j]>target_num){
            j--;
        }
        else if(arr[i]+arr[j]>target_num){
            i++;
        }
    }
    return 0;
}

// bubble sort --> sorting in ascd ord [main principle is swap 2 num]
// in this sorting largest elem get to last index pos
// 1 complete arrange means --> 1 pass
// for n elem in arr --> n-1 is max passes in bubble sort
int bubble_sorting(){
    int n=6;
    int arr[6]={5,6,4,1,0,3};
    for(int i=0;i<n-1;i++){ // outer loop for passes
        bool flag = true; // arr is not sorted yet
        for(int j=0;j<=n-2;j++){ // for rearrgment j<=n-2 == j<n-1 
            
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag= false;
            }
        }
        if(flag == true) break;
    }
    /*
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    */
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// max num of swap in wordt case (desc ord ka arr)
// for n elem array -->( n*(n-1)) /2

// bubble sort but in desc ord

int binary_search(int arr[],int n,int target){
    int low=0,high= n-1;
    while(low<=high){
        int mid = (low +high)/2;
        if(arr[mid]==target){
            printf("target found at index %d",mid);
            return mid;
        }
        else if(target>arr[mid]){ // target is at RHS 
            low=mid +1;
        }
        else if(target<arr[mid]){ // target is at LHS
            high = mid -1;
        }
    }
    return -1; // elem not found
}

int rev_bub_sort(){

    return 0;
}
int main(){
    int arr[5]={1,2,3,4,5};
    binary_search(arr,5,6);
    return 0;
}