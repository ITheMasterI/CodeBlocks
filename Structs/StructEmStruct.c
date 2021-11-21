#include <stdio.h>


typedef struct Data{

    int dia;
    int mes;
    int ano;

}Data;




struct Aluno{

int id;
Data nascimento; //inicializador Data Ž do struct acima

};



int main(){

    //criando um aluno
    struct Aluno aluno1;


    //modificando valores

    aluno1.id = 1;
    aluno1.nascimento.dia = 11;
    aluno1.nascimento.mes = 12;
    aluno1.nascimento.ano = 1999;

    //imprimindo valores

    printf("Nascido em: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);


return 0;
}
