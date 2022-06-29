/*#include<stdio.h> 
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
}*/





#include<stdio.h>
int main()
{
	int a[20],n,asse,i,j;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the value of array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				asse=a[i];
				a[i]=a[j];
				a[j]=asse;
			}
		}
	}
	printf("assending order=\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	
	
}
