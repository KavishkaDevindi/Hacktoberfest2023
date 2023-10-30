#include <stdio.h>  
int binarySearch(int array[], int begin, int end, int val)    
{    
    int mid;    
    if(end >= begin)     
    {        mid = (begin + end)/2;    
/* if the item to be searched is present at middle */  
        if(array[mid] == val)    
        {                 
            return mid+1;    
        }     
        else if(array[mid] < val)     
        {  
            return binarySearch(array, mid+1, end, val);    
        }    
             
        else     
        {  
            return binarySearch(array, begin, mid-1, val);    
        }          
    }    
    return -1;     
}   
int main() {  
  int array[] = {10, 12, 15, 20, 30, 41, 55, 68, 70}; // array  
  int val = 65;  
  int n = sizeof(array) / sizeof(array[0]); // size of array  
  int res = binarySearch(array, 0, n-1, val);   
  printf("The elements of the array :  ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", array[i]);   
  printf("\nElement to be searched is:  %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array.");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  
