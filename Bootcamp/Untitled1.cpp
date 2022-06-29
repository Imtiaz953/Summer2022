#include<stdio.h>
int  main()
{
	int a[20];
	int n,ass,i,j;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the value of array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){	
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			    ass=a[i];
				a[i]=a[j];
				a[j]=ass;
				
			}
		}
		
	}
	printf("assending order is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
}
#include<stdio.h> 
int main() 
{ 
    int a[20],num,asse,i,j; 
    printf("Enter the array size : "); 
    scanf("%d",&num); 
    printf("Enter value to array : \n"); 
    for(i=0;i<num;i++){ 
        scanf("%d",&a[i]); 
    } 
    for(i=0;i<num;i++){ 
        for(j=i+1;j<num;j++){ 
            if(a[j]<a[i]){ 
                asse=a[i]; 
                a[i]=a[j]; 
                a[j]=asse; 
            } 
        } 
    } 
    printf("Assending\n"); 
    for(i=0;i<num;i++){ 
        printf("%d ",a[i]); 
    } 
    return 0; 
}
