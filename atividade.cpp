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
	std::cout << "Soma Linhas\n";
    somaLinhas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Colunas\n";
    somaColunas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Diagonal Principal\n";
    somaDiagonalPrincipal(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Diagonal Secundaria\n";
    somaDiagonalSecundaria(vetor);

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
    return 0;
}

// diagonal principal colunas e linhas iguais
int somaDiagonalPrincipal(int vetor[LINHA][COLUNA]) {
    // SOMA diagonal principal
    int diagonal = 0;
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {        	
			if (linha == coluna) {
        		std::cout << "| " << vetor[linha][coluna] << " |";        	
            	diagonal += vetor[linha][coluna];	
			} else {
				std::cout << "|   |";    
			}
		    
        }
        std::cout << "\n";
    }
    std::cout << diagonal;
    return 0;
}

// diagonal secundaria linha e (tamanho - 1) - linha
int somaDiagonalSecundaria(int vetor[LINHA][COLUNA]) {
    // SOMA diagonal secundaria
    int diagonal = 0;
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {        	
			if (coluna == ((COLUNA - 1) - linha)) {
        		std::cout << "| " << vetor[linha][coluna] << " |";        	
            	diagonal += vetor[linha][coluna];	
			} else {
				std::cout << "|   |";    
			}
		    
        }
        std::cout << "\n";
    }
    std::cout << diagonal;
    return 0;
}
