#include <stdio.h>

/*
Programa para ler um numero indeterminado de dados, contendo cada um, a idade de um individuo.
O ultimo dado, que não entrará nos calculos, contem um valor de idade negativo.
Calcular e imprimir a idade media deste grupo de individuos.
Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSÍVEL CALCULAR".
Conforme exemplo abaixo:

Digite as idades:
31
27
46
-5
media = 34,67

ou

Digite as idades:
-31
"IMPOSSIVEL CALCULAR
*/

int main(){
	
	//Declarar as idades, a quantidade de pessoas, a soma das idades e a media das idades.
	int idade, cont, soma;
	double media;
	//solicita as idades e ler
	printf("Digite as idades:\n");
	scanf("%d", &idade);
	
	
	//soma começa com zero
	soma = 0;
	//contador recebe zero
	cont = 0;
	
	while (idade >= 0){
		soma = soma + idade;
		cont = cont + 1;
		//ler novamente a idade
		scanf("%d", &idade);
	}
	
	if (cont == 0){
		printf("IMPOSSIVEL CALCULAR\n");
	} else {
		media = (double) soma / cont;
		printf("MEDIA = %.2lf\n", media);
	}
	
	return 0;
}