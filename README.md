#Super Trunfo – Comparação Avançada com Dois Atributos

Este programa em C simula uma rodada avançada do jogo **Super Trunfo** entre duas cartas de cidades/estados.  
O jogador cadastra os dados de duas cartas e escolhe **dois atributos diferentes** para compará-las.  
O sistema então:

- Compara cada atributo separadamente (com exceção para densidade demográfica, onde o menor valor vence).
- Soma os dois atributos escolhidos para definir o vencedor final da rodada.
- Trata casos de **empate** de forma clara.
- Utiliza menus dinâmicos para impedir que o jogador escolha o mesmo atributo duas vezes.

---

##Funcionalidades

- Cadastro de duas cartas com:
  - Estado
  - Código
  - Cidade
  - População
  - Área
  - PIB
  - Pontos turísticos
- Cálculo automático de:
  - **Densidade demográfica** (População / Área)
  - **PIB per Capita** (PIB / População)
- Escolha de dois atributos diferentes para comparação:
  1. População
  2. Área
  3. PIB
  4. Pontos Turísticos
  5. Densidade Demográfica *(menor vence)*
  6. PIB per Capita
- Resultado da comparação:
  - Vencedor de cada atributo
  - Soma total dos dois atributos
  - Resultado final da rodada (Carta 1, Carta 2 ou Empate)

---

##Como executar

1. Compile o código:

```bash
gcc super_trunfo.c -o super_trunfo
Execute o programa:

bash
Copiar
Editar
./super_trunfo
