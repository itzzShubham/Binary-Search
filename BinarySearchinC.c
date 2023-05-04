#include<stdio.h>

void binarysearch(int arr[] , int num , int numsearch)
{

int flag=0,s=0,e=num-1;

for(int i=0;i<num;i++)
{
int mid=(s+e)/2;

if(arr[mid]== numsearch)
{
    printf("The Number found at %d position",mid);
flag=1;
break;
 }

else if(numsearch > arr[mid])
{
s=mid+1;
}

else if(numsearch < arr[mid])
{
e=mid-1;
}


}

if(flag==0)
printf("The Number not found in the given array");

}




void main()
{

int array[5]={4,7,56,67,78};

binarysearch(array,5,67);

}