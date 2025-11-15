#include<stdio.h>
void loop(int n,int mid,int a[]){
  int i,j,midl = mid,midr = mid,jc = 0,merged[25];
  int left[20],right[20];
  int temp;  
  
  printf("%d",n);
  
     for(i = 0;i<mid;i++){     if(midl != 1){
      for(j =0;j<n;j++) 
      {
        printf("%d",midl);
     
        if(j<mid){
             
            if(midl>=j)
            {
                printf("The value of %d = %d\n",j,a[j]);
                right[j] = a[j];               
            }
            
        }
        
        else{
            
            if(midr<=j)
            {
                printf("The value of array for A > mid %d = %d\n",jc,a[j]);
                left[jc] = a[j];
                jc++;
            }
            
        } 
}
  midl = (0+midl)/2;
  midr = (midr+n)/2;
  
}
     }

     for(i = 0;i<=mid; i++)
     {
        
    for(j = i+1;j<mid;j++){
        if(left[i]>left[j])
        {
           temp = left[j];
           left[j] = left[i];
           left[i] = temp;
           
        }
        if(right[i]>right[j])
        {
        temp = right[j];
        right[j] = right[i];
        right[i] = temp; 

        }
    }
     }
     
    int le =0, n1 = mid - le + 1;
    int k = 0,n2 = n - mid;
     i = 0; j = 0;
  while (i < n1 && j < n2) {
    if (left[i] <= right[j])
    merged[k++] = left[i++];
else
    merged[k++] = right[j++];

}
while (i < n1) {
    merged[k++] = left[i++];
}

while (j < n2) {
    merged[k++] = right[j++];
}

for(i = 0;i<n;i++){
    printf("%d\n",merged[i]);
}
}


void main(){
    int i,n,k,temp,a[25];
    printf("Enter the number of elements -: ");
    scanf("%d",&n);
    int mid = n/2;
    printf("mid val = %d\n",mid);
    for(i=0;i<n;i++)
    {
        printf("Enter the Value of array %d = ",i+1);
        scanf("%d",&a[i]);

    }
    loop(n,mid,a);


}