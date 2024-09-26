#include<stdio.h>
int main(){
	int m,n,z;
	
	printf("Enter no of  rows in array1 :  ");
	scanf("%d",&m);
	printf("Enter no of  cols in array1 :  ");
	scanf("%d",&n);
	printf("No of  rows in array2 :  %d\n",n);
	printf("Enter no of  cols in array2 :  ");
	scanf("%d",&z);
	int first[m][n];
	int second[n][z];
	int third[m][z];
	//taking input to the first array
	printf("Enter the elements in array1 : \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&first[i][j]);
		}
	}

//taking input to the second array
	printf("Enter the elements in array2 : \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<z;j++){
			scanf("%d",&second[i][j]);
		}
	}


//storing values in third array 	
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<z;j++){
			
			for(int k=0;k<n;k++){
				sum+=first[i][k]* second[k][j];
			}
			third[i][j]=sum;
			sum=0;
		}
	}


printf("The multiplication of first and second array is  : \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",third[i][j]);
		}printf("\n");
	}

return 0;
}
