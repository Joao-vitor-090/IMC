#include<stdio.h>
#include<stdlib.h>
int main(){
	float peso;float altura;
	float imc;char sexo;
	int id;
	printf("\n Insira 'f'para feminino: \n Insira'm'para masculino:\n");
	scanf(" %c" ,&sexo);
	fflush(stdin);
	printf("\n \n Usar '.'(ponto) ao inves de ','(virgula)\n \n");
	printf("\n Insira sua altura  : \n");
	scanf(" %f" ,&altura);
	printf(" Insira sua peso  : \n");
	scanf(" %f" ,&peso);
	printf(" Seu peso : %.1f\n Sua altura:%.2f \n", peso,altura);
    imc=peso/(altura*altura);
    printf("\n  Seu IMC :%.2f   \n",imc);
    if(imc < 18.5){
    	printf("\n Classificacao :\n Magreza \n");
	}
	 if((imc >= 18.5) && (imc <= 24.9)){
    	printf("\n Classificacao :\n Normal\n");
	}
	 if((imc >= 25.0) && (imc <= 29.9)){
    	printf("\n Classificacao :\n Sobrepeso\n");
	}
	 if((imc >= 30.0) && (imc <= 39.9)){
    	printf("\n Classificacao :\n Obesidade\n");
	}
	 if(imc>40){
    	printf("\n Classificacao :\n Obesidade Grave\n");
	}
	printf("\n Para um auxilio em indicar seu peso ideal indique sua altura novamente,\n porem sem pontuacao \n \n EXEMPLO:1.70=170: \n");
	scanf(" %d" ,&id);
	if( sexo== 'f'){
	switch(id){
		
		case (148):{
			printf("\n Seu peso ideial varia entre '39.4kG' ");
			break;
		}
		case (149):{
			printf("\nSeu peso ideial varia entre '40KG'\n");
			break;
		}
		case (150):{
			printf("\nSeu peso ideial varia entre 'KG' ");
			break;
		}
		case (151):{
			printf("\nSeu peso ideial varia entre '41KG' ");
			break;
		}
		case (152):{
			printf("\nSeu peso ideial varia entre '41.6KG' ");
			break;
		}
		case (153):{
			printf("\nSeu peso ideial varia entre '42.1KG'\n");
			break;
		}
		case (154):{
			printf("\nSeu peso ideial varia entre '42.7KG'\n");
			break;
		}
		case (155):{
			printf("\nSeu peso ideial varia entre '43.2KG'\n");
			break;
		}
		case (156):{
			printf("\nSeu peso ideial varia entre '43.8KG'\n");
			break;
		}
		case (157):{
			printf("\nSeu peso ideial varia entre '44.4KG'\n");
			break;
		}
		case (158):{
			printf("\nSeu peso ideial varia entre '44.9KG'\n");
			break;
		}
		case (159):{
			printf("\nSeu peso ideial varia entre '45.5KG'\n");
			break;
		}
		case (160):{
			printf("\nSeu peso ideial varia entre '46.1KG'\n");
			break;
		}
		case (161):{
			printf("\nSeu peso ideial varia entre '46.7KG'\n");
			break;
		}
		case (162):{
			printf("\nSeu peso ideial varia entre '47.2KG'\n");
			break;
		}
		case (163):{
			printf("\nSeu peso ideial varia entre '47.8KG'\n");
			break;
		}
		case (164):{
			printf("\nSeu peso ideial varia entre '48.4KG'\n");
			break;
		}
		case (165):{
			printf("\nSeu peso ideial varia entre '49KG'\n");
			break;
		}
		case (166):{
			printf("\nSeu peso ideial varia entre '49.6KG'\n");
			break;
		}
		case (167):{
			printf("\nSeu peso ideial varia entre '50.2KG'\n");
			break;
		}
		case (168):{
			printf("\nSeu peso ideial varia entre '50.8KG'\n");
			break;
		}
		case (169):{
			printf("\nSeu peso ideial varia entre '51.4KG'\n");
			break;
		}
		case (170):{
			printf("\nSeu peso ideial varia entre '52KG'\n");
			break;
		}case (171):{
			printf("\nSeu peso ideial varia entre '52.6KG'\n");
			break;
		}
		case (172):{
			printf("\nSeu peso ideial varia entre '53.3KG'\n");
			break;
		}
		case (173):{
			printf("\nSeu peso ideial varia entre '53.9KG'\n");
			break;
		}
		case (174):{
			printf("\nSeu peso ideial varia entre '54.5KG'\n");
			break;
		}
		case (175):{
			printf("\nSeu peso ideial varia entre '55.1KG'\n");
			break;
		}
		case (176):{
			printf("\nSeu peso ideial varia entre '5.8KG'\n");
			break;
		}
		case (177):{
			printf("\nSeu peso ideial varia entre '56.8KG'\n");
			break;
		}
		case (178):{
			printf("\nSeu peso ideial varia entre '57KG'\n");
			break;
		}
		case (179):{
			printf("\nSeu peso ideial varia entre '57.7KG'\n");
			break;
		}
		case (180):{
			printf("\nSeu peso ideial varia entre '58.3KG'\n");
			break;
		}
		case (181):{
			printf("\nSeu peso ideial varia entre '59KG'\n");
			break;
		}
		case (182):{
			printf("\nSeu peso ideial varia entre '59.6KG'\n");
			break;
		}
		case (183):{
			printf("\nSeu peso ideal varia entre '60.2KG'\n");
			break;
		}
	}
}
if(sexo == 'm'){
	switch(id){
		
		case (148):{
			printf("\nSeu peso ideial varia entre '39.4kG' ");
			break;
		}
		case (149):{
			printf("\nSeu peso ideial varia entre '40KG'\n");
			break;
		}
		case (150):{
			printf("\nSeu peso ideial varia entre '51.3KG' ");
			break;
		}
		case (151):{
			printf("\nSeu peso ideial varia entre '52KG' ");
			break;
		}
		case (152):{
			printf("\nSeu peso ideial varia entre '53.1KG' ");
			break;
		}
		case (153):{
			printf("\nSeu peso ideial varia entre '54KG'\n");
			break;
		}
		case (154):{
			printf("\nSeu peso ideial varia entre '55.3KG'\n");
			break;
		}
		case (155):{
			printf("\nSeu peso ideial varia entre '56KG'\n");
			break;
		}
		case (156):{
			printf("\nSeu peso ideial varia entre '58.5KG'\n");
			break;
		}
		case (157):{
			printf("\nSeu peso ideial varia entre '61.2KG'\n");
			break;
		}
		case (158):{
			printf("\nSeu peso ideial varia entre '61.2KG'\n");
			break;
		}
		case (159):{
			printf("\nSeu peso ideial varia entre '61.7KG'\n");
			break;
		}
		case (160):{
			printf("\nSeu peso ideial varia entre '62.9KG'\n");
			break;
		}
		case (161):{
			printf("\nSeu peso ideial varia entre '63KG'\n");
			break;
		}
		case (162):{
			printf("\nSeu peso ideial varia entre '64.6KG'\n");
			break;
		}
		case (163):{
			printf("\nSeu peso ideial varia entre '66KG'\n");
			break;
		}
		case (164):{
			printf("\nSeu peso ideial varia entre '67.3KG'\n");
			break;
		}
		case (165):{
			printf("\nSeu peso ideial varia entre '67.7KG'\n");
			break;
		}
		case (166):{
			printf("\nSeu peso ideial varia entre '68.8KG'\n");
			break;
		}
		case (167):{
			printf("\nSeu peso ideial varia entre '69KG'\n");
			break;
		}
		case (168):{
			printf("\nSeu peso ideial varia entre '70.8KG'\n");
			break;
		}
		case (169):{
			printf("\nSeu peso ideial varia entre '71KG'\n");
			break;
		}
		case (170):{
			printf("\nSeu peso ideial varia entre '72.7KG'\n");
			break;
		}case (171):{
			printf("\nSeu peso ideial varia entre '73KG'\n");
			break;
		}
		case (172):{
			printf("\nSeu peso ideial varia entre '74.1KG'\n");
			break;
		}
		case (173):{
			printf("\nSeu peso ideial varia entre '76KG'\n");
			break;
		}
		case (174):{
			printf("\nSeu peso ideial varia entre '77.5KG'\n");
			break;
		}
		case (175):{
			printf("\nSeu peso ideial varia entre '78KG'\n");
			break;
		}
		case (176):{
			printf("\nSeu peso ideial varia entre '80.8KG'\n");
			break;
		}
		case (177):{
			printf("\nSeu peso ideial varia entre '81KG'\n");
			break;
		}
		case (178):{
			printf("\nSeu peso ideial varia entre '83KG'\n");
			break;
		}
		case (179):{
			printf("\nSeu peso ideial varia entre '84KG'\n");
			break;
		}
		case (180):{
			printf("\nSeu peso ideial varia entre '85.1KG'\n");
			break;
		}
		case (181):{
			printf("\nSeu peso ideial varia entre '86'\n");
			break;
		}
		case (182):{
			printf("\nSeu peso ideial varia entre '87.2KG'\n");
			break;
		}
		case (183):{
			printf("\nSeu peso ideal varia entre '88KG'\n");
			break;
		}
	}
}
printf("\n \n Lembrando que o peso ideal pode mudar diante de diversas variates como, idade e estrutura ossea. \n \n ");
printf ("\n \n Para uma aproximacao melhor, quanto mais idoso o indivio mais KG ele exige, podendo variar ate 3.5KG do peso ideal \n \n ");
system("pause");
	return 0;
}
