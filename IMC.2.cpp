#include <stdio.h>

int main() {
// Valores de altura e peso do usuário
	float altura, peso, imc, h, j;
	char cod;
	cod = 'C' ;
	
	while (cod != 'F'){
	
	printf("Digite a sua altura:");
	scanf("%f" , &altura);
	printf("Digite o seu peso:");
	scanf("%f" , &peso);
//Calculo de imc
	imc = peso / (altura * altura);
	printf("Resultado do seu imc e' ; %0.2f.\n" , imc);
	//calculo para perder peso
	h = 24.9 - imc ;
	j = h * (altura * altura);
	if(j<0.1){
	printf("Voce deve perder em peso no minimo ; %0.3f.\n", j);
}
if(j>0){
	printf("voce deve ganhar em peso no maximo ; %0.3f.\n", j);
}
	//Magreza, quando o resultado é menor que 18,5 kg/m2;
	if(imc < 18.5) {
		printf("MAGREZA. \n Voce precisa ganhar peso. Assim, para ganhar peso de forma saudavel e sem ganhar barriga,\n voce deve continuar praticando atividade fisica, aumentar o volume das refeicoes e comer a cada 3 horas.\n\n\n");
	}
//Normal, quando o resultado está entre 18,5 e 24,9 kg/m2;

	if(imc > 18.5 && imc < 24.9) {
		printf("NORMAL. \n Voce esta dentro do peso adequado! \n Por isso continue tendo cuidado com a alimentacao e praticando atividade fisica regularmente para manter o peso e prevenir doenças.\n\n\n");
	}
//Sobrepeso, quando o resultado está entre 24,9 e 30 kg/m2;
	if(imc > 25 && imc < 30) {
		printf("SOBREPESO. \n Voce esta acima do peso e deveria emagrecer. Para emagrecer com saude e importe comer mais frutas e verduras,\n alem de preaticar exercicios fisicos entre 2 ou 3 vezes por semana.\n\n\n");
	}
	//Obesidade, quando o resultado é maior que 30 kg/m2.
	if(imc >30.1) {
		printf("OBESIDADE. Seu peso esta acima do esperado. Porfavor procure um medico.\n\n\n");
}
altura = 0;
peso=0;
imc=0;
h=0;
j=0;
printf("Deseja calcular o imc de mais alguem? pressione qualquer tecla para prosseguir, ou a tecla 'F' para finalizar\n\n\n\n\n");
}
	return 0;
}
