#include <stdio.h> 
#include <stdlib.h> 
int main(){ 
 float nota1, nota2, media; 
 char continuar; 
 do { 
    do { 
            printf("Digite a nota 1 (0 a 10): "); 
            scanf("%f", &nota1); 
            if (nota1 < 0 || nota1 > 10) { 
                printf("Nota inválida! Tente novamente.\n"); 
            } 
        } while (nota1 < 0 || nota1 > 10); 
 do { 
            printf("Digite a nota 2 (0 a 10): "); 
            scanf("%f", &nota2); 
            if (nota2 < 0 || nota2 > 10) { 
                printf("Nota invalida! tente novamente.\n"); 
            } 
        } while (nota2 < 0 || nota2 > 10); 
         media = (nota1 + nota2) / 2; 
        printf("A media das notas e: %.2f\n", media); 
 
          printf("Deseja inserir as notas de outro aluno? (s/n): "); 
        getchar();  
        scanf("%c", &continuar); 
        } while (continuar == 's' || continuar == 'S'); 
         printf("Programa encerrado.\n"); 
    return 0; 
} 
