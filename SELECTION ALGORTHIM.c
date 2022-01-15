// find smallest and largest value in array
void find_LS (int arr[] ,int Size){
  int largest = -1 ;
  int smallest  ;
  for (int i = 0 ; i < Size - 1  ; i++){
    if (arr[i] > largest) largest = arr[i] ;
    else if  (arr[i] < smallest ) smallest = arr[i] ;
  }

 cout << "the largest =  " << largest  << endl << "the smallest =  " << smallest << endl ;

}

// find smallest and largest value in array  compare in pairs
void find_LS_compareByPaairs (int arr[] ,int Size){
  int largest = -1 , smallest ;
  for (int i = 0 ; i < Size - 1  ; i+=2){
    if (arr[i+1] > arr[i]){
        if (arr[i] < smallest) smallest = arr[i] ;
        if (arr[i+1] > largest) largest = arr[i+1];
    }
     else{
        if (arr[i]>largest) largest = arr[i];
        if (arr[i+1] < smallest) smallest = arr[i+1];

     }

  }

 cout << "the largest =  " << largest  << endl << "the smallest =  " << smallest << endl ;

}

// find the k smallest in array
  int findTheSmallK (int arr[] , int n , int k) {
  int i , j , Min ;

  for (i = 0;i < n-(1+k); i++){
    for (j = i+1 ; j < n-1 ; j++){

        if (arr[j] < Min ) Min = arr[j];
    }

  }

  return arr[k] ;


  }







// calc the pivot
int calcPivot (int arr[] , int low , int high ){
  int i = 0 , j = i-1 ;
   int pivot = arr[high];
  for (i = 0 ; i < high ; i++ ){
    if (arr[i] <= pivot) {
        j++;
        swap(arr[i] , arr[j]) ;
    }
  }
  swap(arr[high],arr[j+1]);
 return (j+1);

}

//calc the the k  with partionning

 int Selection (int arr[] , int low , int high , int k){
   int pivotpoint = calcPivot (arr , low , high);
   if (low==high) return arr[low] ;
   else {
   if (pivotpoint == k) return arr[pivotpoint] ;
   else if (k < pivotpoint) return Selection(arr, low , pivotpoint-1 , k);
   else return Selection(arr , pivotpoint+1 , high , k );
   }
 }
