# Segment Tree com Lazy Propagation

## Problema

Dado as operações:
<ol>
<li>Somar x em um intervalo <i>p</i> e <i>q</i></li>.
<li>Imprimir a soma dos elementos em um intervalo <i>p</i> e <i>q</i></li>.
</ol>

Bom, se essas operações fossem realizadas usando uma estrátegia de SegTree comum,  a primeira opção seria dar update em todos
esses elementos, sendo um p - q = x, teriamos $x \times log n$, que é uma complexidade ainda maior que se apenas percorre-se
o vetor linearmente. A segunda operação teria complexidade.

Assim a propagação preguiçosa entra com o objetivo de atualizar o valor de algo apenas quando for necessario, por exemplo,
se formos somar x no invervalo 1 a 3, e for consultar o intervalo 9 e 10, essa soma não seria necessária ter sido feita
naquele momento. **Será necessário criar um vetor para lazy**

## Funções
### Build
A função build continua semelhante a de segtree [SegTree](https://github.com/JuanHPassos/CompetitiveProgramming/tree/main/GEMA-USP/SegmentTree)

### Lazy Propagation

A função lazy propagation consiste em atualizar o no atual e passar a lazy para seus filhos.



