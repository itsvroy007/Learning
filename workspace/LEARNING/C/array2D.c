#include<stdio.h>

//2d matrix
int arr2d(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // arr[2][2]= {{1,2},{3,4}}; another way to create 2d arr
    printf("Matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int sum_allElem(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is:\n"); // for partial rctangle elem sum 
    for (int i = 0; i < rows; i++) { // initiate & terminate i and j with given cordinates
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int elem_sum=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            elem_sum=elem_sum+arr[i][j];
        }
    }
    printf("Sum of all elem is :%d",elem_sum);
    return 0;
}

int input_elem_2Darr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}
int print2Darr(int row,int col,int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int sum_partialRect_Elem(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    int r1,c1,r2,c2;
    printf("enter your r1,c1 and r2,c2 : ");
    scanf("%d%d %d%d",&r1,&c1,&r2,&c2);
    printf("Matrix is:\n"); // for partial rctangle elem sum 
    print2Darr(rows,cols,arr);
    printf("partial matrix is:\n");
    for (int i = r1; i <=r2; i++) {
        for (int j = c1; j <= c2; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int elem_sum=0;
    for (int i = r1; i <=r2; i++) {
        for (int j = c1; j <= c2; j++) {
            elem_sum=elem_sum+arr[i][j];
        }
    }
    printf("Sum of partial rectangle elem is :%d",elem_sum);
    return 0;
}

int row_colwise_sum() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    // Row-wise sum
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }
    // Column-wise sum
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }
    return 0;
}
int row_with_maxSum(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is:\n");
    print2Darr(rows,cols,arr);
    int maxSum=0,rowNum;
    // Row-wise sum then find max sum print its row num
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
            if(rowSum>=maxSum){
                maxSum=rowSum;
                rowNum=i;
            }
        }
    }
    printf("MaxSum is present in row %d = %d\n", rowNum+1, maxSum);
    return 0;
}
int row_num_withMax1(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is:\n");
    print2Darr(rows,cols,arr);
    int rowNum=0,max_count=0;
    // count of max 1's elem in a row and display row number
    for (int i = 0; i < rows; i++) {
        int count=0;
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]==1){
                count++;
            }
        }
        if(max_count<count){
            max_count=count;
            rowNum=i;
        }
    }
    printf("Max 1's elem is present in row %d = %d\n", rowNum, max_count);
    return 0;
}
int sum_of_twoarr() { // same for sub
    int rows,cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];
    // sum is only posible if r1 c1 == r2 c2 
    printf("Enter 1st matrix elem:\n");
    input_elem_2Darr(rows,cols,arr1);
    printf("Enter 2nd matrix elem:\n");
    input_elem_2Darr(rows,cols,arr2);
    // Add of two mat
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Resultant matrix (Addition):\n");
    print2Darr(rows,cols,sum);
    return 0;
}

int max_min2D_arr(){//with their index pos
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is :\n");
    print2Darr(rows,cols,arr);
    // int max = arr[0][0], min = arr[0][0];
    int min_i =0  , min_j=0 , max_i=0 , max_j=0; 
    int min = arr[min_i][min_j], max = arr[max_i][max_j];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
                max_i=i;
                max_j=j;
            }
            if (arr[i][j] < min){
                min = arr[i][j];
                min_i=i;
                min_j=j;
            }
        }
    }
    printf("\nMaximum element = %d , at index %d,%d", max,max_i,max_j);
    printf("\nMinimum element = %d, at index %d,%d", min,min_i,min_j);
    return 0;
}

int prod_oftwoArray(){
    int r1, c1, r2, c2;
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    int arr1[r1][c1], arr2[r2][c2], prod[r1][c2];
    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &arr1[i][j]);
    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &arr2[i][j]);
    // Initialize product matrix
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            prod[i][j] = 0;
    // Multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Resultant matrix (Multiplication):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int transpose_2Darr(){ // leetcode 867
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is:\n");
    print2Darr(rows,cols,arr);
    int trans_arr[cols][rows];
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            trans_arr[i][j]=arr[j][i];
        }
    }
    printf("Transpose Matrix is :\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",trans_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int transpose_sq_matrix(){
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is:\n");
    print2Darr(rows,cols,arr);
    // change within org arr
    for(int i=0;i<rows;i++){
        for(int j=i;j<cols;j++){ // j=i as to move from next line poselse 0 se woh same org matrix return karega
                        // also j=0 but till j<=i then also same result aayega
            // if(i!=j) arr[i][j]=arr[j][i]; {this is wrong logic} doesnt swap all elem
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("Transpose of org Matrix is :\n");
    print2Darr(rows,cols,arr);
    return 0;
}
int rotated_sq_matrix(){// rotation of matrix by 90 deg clockwise
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is:\n");
    print2Darr(rows,cols,arr);
    // transpose of matrix within org
    for(int i=0;i<rows;i++){
        for(int j=i;j<cols;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("Transpose of org matrix is :\n");
    print2Darr(rows,cols,arr);
    printf("rotated by 90 degree matrix:\n");
    for(int i=0;i<rows;i++){
        int j=0,k=rows-1;
        while(j<k){
            //swap arr[i][j] = arr[i][k]
            int temp = arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    print2Darr(rows,cols,arr);
    return 0;
}
int multiply_of_twoarr(){// prod of two matrix
    int r1,r2,c1,c2;
    printf("enter r1 and c1 of arr1:");
    scanf("%d%d",&r1,&c1);
    printf("enter r2 and c2 of arr2:");
    scanf("%d%d",&r2,&c2);
    int arr1[r1][c1],arr2[r2][c2];
    printf("Enter elements of matrx1:\n");
    input_elem_2Darr(r1,c1,arr1);
    printf("Matrix1 is:\n");
    print2Darr(r1,c1,arr1);
    printf("Enter elements of matrix2:\n");
    input_elem_2Darr(r2,c2,arr2);
    printf("Matrix2 is:\n");
    print2Darr(r2,c2,arr2);
    if(c1!=r2){
        printf("mult is not possible");
        return 0;    
    }
    int prod[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            prod[i][j]=0;
            for(int k=0;k<c1;k++){
                // (arr1[i][0],arr1[i][1]......)*(arr2[0][j],arr2[1][j]....)
                prod[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("prod matrix is :\n");
    print2Darr(r1,c2,prod);
    return 0;
}

int wave_matrix_print(){
    // wave printing 
    // 1 2 3 [strt from 1 to 3 then move to 6 to 4 then 7 to 9]
    // 4 5 6
    // 7 8 9 ---> output be like 123 654(rev of odd index) 789
    int rows,cols;
    printf("enter the rows and cols: ");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    printf("Enter elem in matrix:\n");
    input_elem_2Darr(rows,cols,arr);
    printf("Matrix is :\n");
    print2Darr(rows,cols,arr);
    printf("Wave printing of matrix is :\n");
    for(int i=0;i<rows;i++){
        int j=0,k=rows-1;
        if (i%2 != 0){
            while(j<k){
                //swap arr[i][j] = arr[i][k]
                int temp = arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
                j++;
                k--;
            }
        }
    }
    print2Darr(rows,cols,arr);
}

int temp(){ // 3.5hr se continue karna hai (2d array)
    
}
int main(){
    temp();
    prod_oftwoArray();
    
    return 0;
}