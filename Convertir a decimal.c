#include <stdio.h>
#include <string.h>
#include <math.h>

int toDecimal (char numeroDeOtroSistema[],int baseDeSistema,char numeros[]);
int convertirCharANumero(char caracter,char numeros[]);
int validar(int k,int baseDeSistema);

int main(int argc, char *argv[]) {
	char numeros[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int base;
	int res = 0;
	char numeroEntrada[20];
	int nuevoDecimal;
	int baseAConvertir;

	while(res!=2){
		printf("------CONVERTIDOR DE NUMEROS------\n");
		printf("Ingresa el numero: ");
		scanf("%s",numeroEntrada);
		printf("Ingresa la base del numero: ");
		scanf("%d",&base);
		printf("Ingrese en que base desea convertirlo: ");
		scanf("%d", &baseAConvertir)

		nuevoDecimal=toDecimal(numeroEntrada,base,numeros);

		printf("El numero %d base %d es %d: ", numeroEntrada, baseAConvertir);
		printf("1.Continuar -- 2.Salir");
		scanf("%d",&res);
	}
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
		k=convertirCharANumero(numeroDeOtroSistema[j],numeros);
		if (validar(k,baseDeSistema)==1){
			break;
		}
		elevado=k*pow(baseDeSistema,i-j);
		sumatoria=sumatoria+elevado;
	}
	return sumatoria;
}

int convertirCharANumero(char caracter,char numeros[]){
	int k;
	for (k=0;numeros[k]!=caracter;k++){
		//Solo guarda la k
	}
	return k;
}

int validar(int k,int baseDeSistema){
	int flag=0;
	if (k<0 || k>=baseDeSistema){
		printf("Uno de los digitos ingresados no es valido!!!\n");
		flag=1;
	}
	return flag;
}
