#include<stdio.h>
#include "hider.h"
int main()
{
 int a[20],i,search,n;
 n=inputd("enter the number of elements : ");
 for(i=0;i<n;++i)
 a[i]=inputd("Enter array elements : ");

 search=inputd("Enter element to search: ");
 for(i=0;i<n;++i)
 if(a[i]==search)
 break;

 if(i<n)
 printf("\n %d is found at position : %d",search, i+1);
 else
 printf("\nElement not found");

 return 1;
}