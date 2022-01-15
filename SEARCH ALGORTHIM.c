int Binary_Search(int arr[] , int Size ,  int data){
    int low = 0 ;
    int high = Size - 1;
    int mid = 0 ;

    while (high >= low){
    mid = low + (high-low)/2;
    if (arr[mid]==data) return mid ;
    else if (arr[mid]> data) high = mid-1 ;
    else  low = mid +1 ;

    }
 return -1 ;


}
int Interpolation_Search(int arr[] , int Size ,  int data){
    int low = 0 ;
    int high = Size - 1;
    int mid = 0 ;

    while (high >= low){
    mid = low + (data-arr[low]) * (high-low) / (arr[high]-arr[low]);
    if (arr[mid]==data) return mid ;
    else if (arr[mid]> data) high = mid-1 ;
    else  low = mid +1 ;

    }
 return -1 ;


}




int Rucersive_Binary_Search (int arr[] , int low , int high ,  int data) {

  int mid = low + (high-low)/2;

  if (low > high) return -1 ;
  if (arr[mid] == data) return mid ;
   else if (arr[mid]>data) return (Rucersive_Binary_Search(arr,low,mid-1,data));
   else return (Rucersive_Binary_Search(arr,mid+1,high,data));

}
