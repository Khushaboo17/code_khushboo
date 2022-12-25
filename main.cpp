#include <bits/stdc++.h>
using namespace std;

//creating set
set<int> st;
int delete_duplicate(int arr[], int n)  
{  
 int ret;
 //inserting array elements in set
 for(int i=0;i<n;i++)
 st.insert(arr[i]);
 
 return ret;
}  
int main()  
{  
 int n;  
 printf("\n Enter the array size ");  
 scanf("%d", &n);  
 int array[n];  
 int i;  
 printf("\n Enter the array values ");  
 for (i = 0; i < n; i++)  
 {  
 scanf("%d", &array[i]);  
 }  
 printf("\nArray value before removing duplicate ");  
 // Please add your code Here  
 
 for(int i=0;i<n;i++)
 printf("%d ",array[i]);
 
 //clear ddummy set, maybe dummy vals:()
 st.clear(); 
 n = delete_duplicate(array, n); 
 //print the array without duplicates  
 // Please add your code Here  

printf("\n\nArray after removing the duplicates:\n");

//printing the output
 for(auto it: st)
 cout<<it<<" ";


 return 0;  
}  
