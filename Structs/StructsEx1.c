#include <stdio.h>
#include <string.h>


struct Horario{

int hora;
int minuto;
int segundo;

};



struct Data{

int dia;
int mes;
int ano;

};


struct Compromisso{

char texto[255];
int hora;
int dia;

};



int main(){



    struct Horario horario1;
    struct Data data1;
    struct Compromisso compromisso1;


    horario1.hora = 12;
    horario1.minuto = 30;
    horario1.segundo = 57;


    printf("%d:%d:%d", horario1.hora, horario1.minuto, horario1.segundo);


	data1.dia = 11;
	data1.mes = 12;
	data1.ano = 1999;

	printf("\n%d/%d/%d", data1.dia, data1.mes, data1.ano);


	strcpy(compromisso1.texto, "Aboborobo");
	compromisso1.hora = 12;
	compromisso1.dia = 14;

	printf("\nDia: %d , Hora: %d , Texto: %s", compromisso1.dia, compromisso1.hora, compromisso1.texto);



return 0;
}
