#include "atividade.h"

int main () {
    srand(time(NULL));

    std::cout << "Atividade com Array " << LINHA << " X  " << COLUNA << "\n";

    int vetor[LINHA][COLUNA];

/*
       			//colunas
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
//linhas    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 | 
*/

	// o preechimento com números aleatórios no array
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            vetor[linha][coluna] = rand() % 10;
            std::cout << "| " << vetor[linha][coluna] << " |";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";
    
    // imprime a primeira diagonal
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if(linha == coluna){
        	vetor[linha][coluna];
            std::cout << "| " << vetor[linha][coluna] << " |";
			}
			else {
             	std::cout << "|" << " " << "|";
			 }
            
        }
        std::cout << "\n";
    }
   
    std::cout << "\n";
     // imprime a segunda diagonal
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if(linha + coluna == 4){
        	vetor[linha][coluna];
            std::cout << "| " << vetor[linha][coluna] << "|";
			} else {
             	std::cout << "|" << " " << "|";
			 }
            
        }
        std::cout << "\n";
    }
	
	std::cout << "\n";
	std::cout << "Soma Linhas\n";
    somaLinhas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Colunas\n";
    somaColunas(vetor);
    
	std::cout << "\n";
	std::cout << "Soma Diagonal Primaria\n";
    somaDiagonalP(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Diagonal Secundaria\n";
    somaDiagonalS(vetor);
    
    return 0;
}

int somaLinhas(int vetor[LINHA][COLUNA]) {
    // SOMA LINHAS
    int linhasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
		    std::cout << "| " << vetor[linha][coluna] << " |";        	
            linhasSomadas[linha] += vetor[linha][coluna];
        }
        std::cout << " = " << linhasSomadas[linha] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA]) {
    // SOMA COLUNAS
    int colunasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
    	for (int coluna = 0; coluna < COLUNA; coluna++) {
    		std::cout << "| " << vetor[linha][coluna] << " |";  
    		colunasSomadas[coluna] += vetor[linha][coluna];
		}
		std::cout << "\n";		
	}	
	std::cout << "============================\n";		
	for (int i = 0; i < 5; i++) {
		std::cout << "| " << colunasSomadas[i] << " |"; 
	}
}
	
int somaDiagonalP(int vetor[LINHA][COLUNA]) {
    // SOMA DIAGONAL PRIMÁRIA
    int diagonalPSomada = 0;
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if(linha == coluna){
            diagonalPSomada += vetor[linha][coluna];
             std::cout << " = " << diagonalPSomada << "\n";
         }
        //std::cout << "| " << diagonalPSomada<< " |"; 
			}
            std::cout << "\n";
				
        }
        std::cout << "Resultado da Soma da Primeira Diagonal\n";
        std::cout << "|" << diagonalPSomada<< "|"; 
    }

      		
int somaDiagonalS(int vetor[LINHA][COLUNA]) {
    // SOMA DIAGONAL SECUNDÁRIA
    int diagonalSSomada = 0;
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if(linha + coluna == 4){
        	diagonalSSomada += vetor[linha][coluna];
        	std::cout << " = " << diagonalSSomada << "\n";
			}
            std::cout << "\n";	
        }
        std::cout << "Resultado da Soma da Segunda Diagonal\n";
        std::cout << "|" << diagonalSSomada << "|"; ;		
	}
    return 0;
}

