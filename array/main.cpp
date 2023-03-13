#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */



// demo of declaraion of array


//int main(int argc, char** argv) {
//	
//	int a[5];
//	int b[5]={1,2,3,45,6};
//	int c[5]={1,2,3};
//	int d[5]={0};
//	int e[]={1,2,3,4,5,6,7,8};
//	
//	int i;
//	
//	for(i=0;i<5;i++){
//		printf("%u \n", &a[i]);   // for printing addressess i can use %u 
//	}
//	
//	return 0;
//}



//static array and Dynamic Array


//int main(){
//	int a[5]={2,4,6,8,10};
//	int *p;
//	int i;
//	
//	p=(int *)malloc(5*sizeof(int));
//	
//	p[0]=3;
//	p[1]=5;
//	p[2]=7;
//	p[3]=9;
//	p[4]=11;
//	
//	for(i=0;i<5;i++){
//		printf("%d ",a[i]);
//	}
//	
//	printf("\n");
//		
//	for(i=0;i<5;i++){
//		printf("%d ",p[i]);
//	}	
//	
//	return 0;
//}



//Increase the size of array

//int main(){
//	int *p,*q;
//	int i;
////	p=new int[5];
//	
//	p=(int *)malloc(5*sizeof(int));
//	
//    p[0]=1;p[1]=3;p[2]=5;p[3]=7;p[4]=9;
//    
////    q=new int[10];
//    
//    q=(int *)malloc(10*sizeof(int));
//    
//    for(i=0;i<5;i++){
//    	q[i]=p[i];
//	}
//	
//	free(p);
//	p=q;
//	q=NULL;
//	
//	for(i=0;i<5;i++){
//		printf("%d \n",p[i]);
//	}
//	return 0;
//}


//	



//2d array

//int main(){
//	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//	
//	int i;
//	int j;	
//	for(i=0;i<3;i++){
//		
//		for(j=0;j<4;j++){
//			printf("%d ",a[i][j]);
//		
//		}
//			printf("\n");
//	}	
//	
//	return 0;
//}


//int main(){
//	int *a[3];
//	a[0]=new int[4];
//	a[1]=new int[4];
//	a[2]=new int[4];
//	a[3]=new int[4];	
//	
//	int i;
//	int j;	
//	for(i=0;i<3;i++){
//		
//		for(j=0;j<4;j++){
//			printf("%d ",a[i][j]);
//		
//		}
//			printf("\n");
//	}	
//	
//	return 0;
//}


int main(){
	int **a;
	a=new int *[3];
	a[0]=new int[4];
	a[1]=new int[4];
	a[2]=new int[4];
	a[3]=new int[4];	
	
	int i;
	int j;	
	for(i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			printf("%d ",a[i][j]);
		
		}
			printf("\n");
	}	
	
	return 0;
}




	















