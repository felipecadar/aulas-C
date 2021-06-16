# Representação de Dados

## Representação Binária e Hexadecimal

- Exemplo: 1521310 (base 10) = 11101101101101 (base 2) = 0x17369E (base 16)
- Endereços de memória no computador são representados usando Hex

## Ordenação de Bytes

- Big Endian (computadores Sun, Mac)
  - byte menos significativo com maior endereço
- Little Endian (computadores Alpha, PCs)
  - Byte menos significativo no menor endereço

Exemplo: 

**Big Endian**
| | | | | |
|-----|-----|-----|-----|-|
|Endereço|0x100|0x101|0x102|0x103|
|Valor|01|23|45|67|


**Litte Endian**
| | | | | |
|-----|-----|-----|-----|-|
|Endereço|0x100|0x101|0x102|0x103|
|Valor|67|45|23|01|

- Transparente para o programador em C

## Caracteres

- Usa-se uma tabela para mapear inteiros (não negativos)
em símbolos
- A = 65, B = 66 ...
- a = 97, b = 98, ... z = 122

## Operadores bit a bit em C

Operador | Função
----|-----
&	| E (AND)
\|	| OU (OR)
^   | OU-EXCLUSIVO (XOR)
~   | NOT ou Complemento de 1
<<	| Deslocamento à esquerda
\>\>| Deslocamento à direita

- Exemplo: 
```C
int x = 1; \\ 0b00000001 = 1 dec
x = (x<<2); \\ 0b000000100 = 4 dec
x = (x>>1); \\ 0b000000010 = 2 dec
```


## Tipos em C


| Type| Bits | Min | Max|
|------|---|------|-----|
| char | 8 | -128 | 127 |
| unsigned char | 8 | 0 | 255 |
| int | 16 | -32.768 | 32.767 |
| unsigned int | 16 | 0 | 65.535  |
| short int | 16 | -32.768 | 32.767 |
| unsigned short int | 16 | 0 | 65.535 |
| long int | 32 | -2.147.483.648 | 2.147.483.647 |
| unsigned long int | 32 | 0 | 4.294.967.295 |
| float | 32 | 3,4E-38 | 3.4E+38  |
| double | 64 | 1,7E-308 | 1,7E+308 |
| long double | 80 | 3,4E-4932  | 3,4E+4932 |

## Arranjos .....