#include <stdio.h>
int Factorial(int n);
int main(){
	int n, resultado;
	printf("Escribe el numero que deseas saber el factorial\n");
	scanf("%d", &n);
	resultado=Factorial(n);
	printf("%d\n", resultado);
	return 0;
}
int Factorial(int n){
	int res ;
	if(n==1){
		return 1;
	}else{
		res=n;
		n=n-1;
		n=res*Factorial(n);
		return n;
	}
}

