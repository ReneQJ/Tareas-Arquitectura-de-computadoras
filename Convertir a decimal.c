#include <stdio.h>
#include <string.h>
#include <math.h>

int toDecimal (char numeroDeOtroSistema[],int baseDeSistema,char numeros[]);

int main(int argc, char *argv[]) {
	
	
	char numeros[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int base;
	printf("Ingresa la base del numero: \n");
	scanf("%d",&base);
	char numeroEntrada[20];
	printf("Ingresa el numero en su respectiva base: \n");
	scanf("%s",numeroEntrada);
	int nuevoDecimal;
	nuevoDecimal=toDecimal(numeroEntrada,base,numeros);
	printf("Suma: ");
	printf("%d",nuevoDecimal);
	
	return 0;
}

//Conversión de cualquier sistema a decimal
int toDecimal (char numeroDeOtroSistema[],int baseDeSistema,char numeros[]){
	int i,j,k;
	for (i=0;numeroDeOtroSistema[i]!='\0';i++){
		//Solo guarda la i
	}
	i--;
	int elevado=0;
	int sumatoria=0;
	for (j=i;j>=0;j--){
		for (k=0;numeros[k]!=numeroDeOtroSistema[j];k++){
			//Solo guarda la k
		}
		if (k<0 || k>=baseDeSistema){
			printf("Uno de los digitos ingresados no es valido!!!\n");
			break;
		}
		elevado=k*pow(baseDeSistema,i-j);
		sumatoria=sumatoria+elevado;
	}
	return sumatoria;
}


//Conversión de decimal a binario

