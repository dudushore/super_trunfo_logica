Batalha de Cartas - Super Trunfo de Cidades
Este é um programa simples em C, desenvolvido como trabalho acadêmico, que simula uma rodada do jogo Super Trunfo. O usuário cadastra os dados de duas cidades e, em seguida, escolhe dois atributos para compará-las.

Como Compilar e Executar
1. Pré-requisito:

É necessário ter um compilador C instalado (como o GCC).

2. Compilar o código:
No seu terminal, execute o seguinte comando para criar o programa executável:

Bash

gcc main.c -o jogo
3. Executar o programa:
Após a compilação, execute o arquivo gerado:

Bash

./jogo
Depois, basta seguir as instruções que aparecem no terminal.

Regras do Jogo
Cadastro: O usuário informa os dados (população, área, PIB, etc.) para as duas cartas (cidades).

Escolha: O usuário escolhe dois atributos para a batalha.

Comparação Individual:

Para a maioria dos atributos, o maior valor vence.

A única exceção é a Densidade Demográfica, onde o menor valor vence.

Vencedor Final: O vencedor geral é a carta cuja soma dos valores dos dois atributos escolhidos for maior.
