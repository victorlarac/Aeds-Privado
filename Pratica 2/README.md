# Algoritmos e Estruturas de Dados
## Treinamento em Listas, Pilhas e Filas Estáticas e Dinâmicas

Victor Cunha Freitas Lara



###  Listas:
Os arquivos foram divididos em, n1,n2,n3 e n4  contendo as letras a,b e c sendo elas lista, pilha ou fila 1,2 e 3 respectivamente, ou seja, cada número corresponde a letra desejada, juntamente com um main para cada uma das questões. A pasta main geral possui todos os arquivos unificados em um único main. 

Na questão 1 letra a e b (lista1 e lista2), foram utilizadas listas do tipo estática para solucionar o problema, ambas as listas foram preenchidas com valores randômicos e concatenadas por uma função criada e retornada no main. Além disso a lista2 apresenta a função play que compara duas listas subtrai um valor as suas posições e retorna a maior lista, de acordo com as somas de valores.

Já na questão 1 letra c (lista 3), foram utilizadas listas dinâmicas, para solucionar o problema onde se compara itens de 3 listas diferentes, e se os itens forem os mesmos compara os seus valores.


### Pilhas:
 
A questão 2, letra a (pilha 1) utilizou-se pilha estática, onde gera parênteses aleatórios e verifica se para cada abre parênteses tem um fecha parênteses, se essa condição for verdadeira o programa retorna que esta certo. Caso ao contrário retorna errado.

A letra b (pilha 2) utiliza pilha dinâmica, e preenche uma pilha com valores após isso transfere esses valores para uma segunda pilha.
Já a letra c (pilha 3) utiliza pilha do tipo estática e recebe 20 valores de um vetor de 20 posições e retorna à função totiente de Euler para os valores apresentados.


### Filas:

Filas:
A questão 3 letra a (fila 1) é uma fila estática que, cria 3 valores e cada Item representa uma variável do binômio de Newton {(x+y)}^k sendo armazenado esses itens em uma fila 1, e depois retornados em uma fila2.

Já a b (pilha 2) que é dinâmica, na fila cada posição você tem um valor e um vetor. No vetor, de 5 posições, você tem em cada posição valores entre 0 e 1. Considere esses valores como pontuação e a posição do vetor como o número da classe. O objetivo é imprimir na tela o número e qual classe ele representa. Pra isso, considerei a classe de maior valor. Além disso comparei cada item com a classe.
 
### Questão final (numero 4):

Na questão final foi-se utilizado as tres estruturas(lista, pilha e fila), porem todas do tipo dinamica. Foi criado uma fila de atendimento e cada posiçãpo da fila tem uma lista de coisas a serem feitas do tipo char, que são aplicadas ou armazenadas em uma pilha.



Para compilar como estava no windows foi utilizado o comando:

```
 gcc arquivo.c -o arquivo
```
 Porem junto com os arquivos foi disponibilizado dentro a pasta src, e um makefile para a compilação.

 No final foi feito um prototipo do que seria um main geral, porem não foi testado e apresenta alguns erros.