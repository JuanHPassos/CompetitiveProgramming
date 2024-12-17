# Tipos de dados
Inteiro de 32 bits(4 bytes): $\pm 2 \times 10^9$ 

Inteiro de 64 bits(8 bytes): $\pm 9 \times 10^{18}$

# Complexidade de espaço e tempo
Formulas matemáticas que apenas calculam a resposta: $O\left(1\right)$

Set e map desordenados : $O\left(1\right)$ por operação.

Busca binária: $O\left(\log (n) \right)$

Set e map ordenados ou filas de prioridade: $O\left(\log (n)\right)$ por operação.

Fatoração prima de um número inteiro ou verificação de primalidade ou composição de um número inteiro: $O\left(\log (n)\right)$

Ler n itens: $O\left(n\right)$

Percorrer lista ou vetor com n elementos: $O\left(n\right)$

Ordenação padrão: $O\left(n \ \log (n)\right)$

Iterar por todos os subconjuntos de tamanho k: $O\left(n^k\right)$

Iterar por todos os subconjuntos: $O\left(2^n\right)$

Iterar por todas as permutações: $O\left(n!\right)$

## Dica de complexidade a partir do n

| n             | Complexidade possível      |
|---------------|----------------------------|
| $n \leq 10$   |  $O\left(n!\right)$, $O\left(n^7\right)$, $O\left(n^6\right)$ |          
| $n \leq 20$   |  $O\left(2^n \cdot n\right)$, $O\left(n^5\right)$          |
| $n \leq 80$   |  $O\left(n^4\right)$ |          
| $n \leq 400$   |  $O\left(n^3\right)$ |          
| $n \leq 7500$   |  $O\left(n^2\right)$ |          
| $n \leq 7 \cdot 10^4$   |  $O\left(n\sqrt{n}\right)$ |          
| $n \leq 5 \cdot 10^5$   |  $O\left(n \cdot \log (n)\right)$ | 
| $n \leq 5 \cdot 10^6$   |  $O\left(n \right)$ | 
| $n \leq 10^12$   |  $O\left(\sqrt{n} \cdot \log (n)\right)$, $O\left(\sqrt{n}\right)$ | 
| $n \leq 10^{18}$   |  $O\left(\log^2 (n)\right)$, $O\left(\log (n)\right)$, $O\left( 1 \right)$ | 



