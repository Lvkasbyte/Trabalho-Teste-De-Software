int validar_quantidade(int qtd) {
    if (qtd >= 1 && qtd <= 5) {
        return qtd;  
    } else {
        return -1; 
    } 
}


float calcular_preco(int idade) {
    if (idade <= 12) {
        return 10.0;
    } else if (idade >= 60) {
        return 15.0;
    } else {
        return 30.0;
    }
}