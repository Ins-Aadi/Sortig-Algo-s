#include<stdio.h>
void main(){
int s = 0,n,j,temp,i,mid,found= 0;

printf("Enter the nnumber of elements -: ");
scanf("%d",&n);
int key;
printf("Enter the key number -: ");
scanf("%d",&key);
int e=n;
int a[n+1];
for(i = 0;i<n;i++)
{
    printf("Enter the array a[%d] value -: ",i);
    scanf("%d",&a[i]);
}
while(s<=e){
mid = (s+e)/2;
if(a[mid]==key){
 printf("Element found at location = a[%d]",(s+e)/2);
 found = 1;
 break;
}
else if (key<a[mid]){
    e = mid-1;
}
else{
    s = mid+1;
}
if(!found){
    printf("element not exists on the array");
}
}
}