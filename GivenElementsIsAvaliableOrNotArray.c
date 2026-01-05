#include <stdio.h> 
int main()  
{ 
    int n, i, element, found = 0; 
    
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
 
    
    int arr[n]; 
 
    
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
   
    printf("Enter the element to search: "); 
    scanf("%d", &element); 
 
    
    for(i = 0; i < n; i++)  
    { 
        if(arr[i] == element)  
       { 
            found = 1; 
            break; 
        } 
    } 
 
    
    if(found == 1)  
    { 
         printf("Element %d is present in the array.\n", element); 
    }  
     else  
    { 
         printf("Element %d is not present in the array.\n", element); 
    } 
    return 0; 
}
