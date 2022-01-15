

void BUBBLE_SORT (int A[],int n){
    int temp ;
    int swapped = 1;
    for (int pass = n-1; pass >=0 && swapped ; pass--){
            swapped = 0;
    for (int i = 0; i < pass ; i++){
        if (A[i] > A[i+1])
        {
            temp = A[i] ;
             A[i] = A[i+1];
             A[i+1] = temp;
             swapped = 1 ;
        }
    }
    }
}



void SELECTION_SORT (int A[] , int n){
    int i , j , Min , temp ;
    for (i = 0 ; i < n  ; i++){
            Min = i ;
        for(j = i+1 ; j < n ; j++){
            if (A[j] < A[Min]) Min = j ;
        }
        temp = A[Min];
        A[Min]= A[i];
        A[i] = temp ;
    }

} 




void INSERTION_SORT (int A[] , int n){
    int i , j , v ;
    for (i = 1 ; i < n ; i++){
        v = A[i] ;
        j= i ;
        while(A[j-1]>v && j>=1){
            A[j] = A[j-1];
            j--;
        }
        A[j] = v;
    }


}





void shell_sort ( int arr[],int n ){
 int gap , i , j , temp ;
 for (gap = n/2 ; gap > 0; gap /=2 ){
    for (i = gap ; i <n ; i++){
        temp = arr[i];
        for (j = i ; j >= gap && arr[j-gap]> temp ; j-=gap){
            arr[j] = arr[j-gap];
        }
        arr[j] = temp;
    }
 }

 } 








void Merge (int A[] , int left , int right,int mid){
 int tempArray[7];
 int first1 = left;
 int last1 = mid;
 int first2 = mid + 1;
 int last2 = right;
 int index = first1;

   for ( ; (first1 <= last1) && (first2 <= last2); ++index) {
    if (A[first1] < A[first2]) {
       tempArray[index] = A[first1];
        ++first1;
        }
        else {
        tempArray[index] = A[first2];
        ++first2;
      }
    }

    for (; first1 <= last1; ++first1, ++index)
      tempArray[index] = A[first1];

    for (; first2 <= last2; ++first2, ++index)
       tempArray[index] = A[first2];

     for (index = left; index <= right; ++index)
       A[index] = tempArray[index];


 }



 void merge_sort (int A[] , int left , int right ){
    if (right > left){
       int mid = (left + right) / 2 ;
        merge_sort(A,left,mid);
        merge_sort(A,mid+1,right);
        Merge(A,left,right,mid);

    }
 }





int partion (int a[] , int low , int high){
int j = 0 ;
int i = j-1 ; //smaller element
int pivot = a[high];
for (j = 0 ; j < high ; j++){
    if (a[j]<pivot){
        i++;
        swap(a[j],a[i]);
    }

}

swap(a[i+1], a[high]);
    return (i+1);
}

int Quick_sort(int a[], int low , int high){

if (high>low){

   int pivot =  partion(a,low, high);
   Quick_sort(a, low , pivot-1);
   Quick_sort(a , pivot+1 , high);


}


} 













 

void Counting_Sort (int arr[] , int n , int range ){

int i , *Output , *Count ;
Count = new int[range];
Output = new int[n];


for (i=0 ; i < range ; i++)
    Count[i] = 0 ; 

// count evrery member in arr[i] , plus one in his order in arr[i] 
for (i=0 ;i < n;i++)
    ++(Count[arr[i]]);

for (i=1 ; i <= range ;i++)
    Count[i] += Count[i-1];

for (i=0 ; i<n ;i++){
   Output[Count[arr[i]]-1] = arr[i];
    --Count[arr[i]];
}
for (i =0 ; i < n ; i++ )
    arr[i] = Output[i];

} 




void Bucket_Sort (float arr[] , int n){

    // create a bucket array of number n buckets
    vector<float>b[n];

   // put the element of arr[i] into thier bucket
    for (int i =0 ; i < n ; i++){
        int bi = arr[i] * n;
        b[bi].push_back(arr[i]);
    }


    //sorting the the arr[i] in every buket
    for (int i =0 ; i< n ; i++){
        sort(b[i].begin() , b[i].end());
    }

 // put the arrenged elements into thier places in arr[i]
    int index = 0 ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < b[i].size(); j++)
        arr[index++] = b[i][j];
    }
}


