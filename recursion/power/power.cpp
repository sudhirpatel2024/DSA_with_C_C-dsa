#include<iostream>


//int pow(int m,int n)
//{
//	if(n==0){
//	return 1;}
//	else{
//	
//	return pow(m,n-1)*m;
//   }
//
//}



int pow(int m,int n)
{
	if(n==0){
	return 1;
	}
	else if(n%2==0)
	{
	return pow(m*m,n/2) ;
    }
    else{
    	return m*pow(m*m,(n-1)/2);
	}

}	
	
int main(){
	int r=pow(2,10);

	printf("%d ",r);	
	
	return 0;
}
