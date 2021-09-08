#include <stdio.h>
#include <stdlib.h>

//Registro do aluno com os dados, nome e notas da disciplina.

    struct aluno{
        
    char nome [50];
      
    float A1;
    
    float A2;
      
    };

//Inicio 

int main()
{
//Declaração vetor do struct

    struct aluno vetor[3];

//Declaração das variáveis utilizadas durante o código
    
    int ind;
    
    float media;

    printf("********* Programa de aprovaÃ§Ã£o do aluno na disciplina ********* \n");
    printf("********* Iris Correa - 1Â° Semestre ADS - Braz Cubas MG ********* \n");
    
//Estrutura de repetição FOR para cada aluno declarado pelo vetor de 0 a 2. ***[3]***

    for(ind=0;ind<2;ind++){

        
        printf("\nDigite o nome do %d° aluno: ", ind+1);
        scanf("%s", vetor[ind].nome);
        
        printf("Digite a primeira nota da(o) aluna(o) %s: ", vetor[ind].nome);
        scanf("%f", &vetor[ind].A1);
        
        printf("Digite a segunda nota: ");
        scanf("%f", &vetor[ind].A2);
        
        
    }

//Estrutura de repetição FOR para mostrar a media de cada aluno

    for(ind=0;ind<2;ind++){

//Cálculo para concluir a média

        media = (vetor[ind].A1 + vetor[ind].A2)/2;

//Estrutura condicional composta para mostrar o resultado de cada aluno 

        if(media >= 6){
            
        printf("\n \n Aluna(o) %s, obteve a media %.2f! Parabens APROVADO!", vetor[ind].nome, media);
        
        }
        
        
        else{
            printf("\n \n Aluna(o) %s, obteve a media %.2f! Infelizmente REPROVADO! Realizar exame de recuperacao.", vetor[ind].nome, media);
        }
    }
    
    return(0);
    
}
