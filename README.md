# my_printf

## Descrição
O projeto **my_printf** é uma recriação da função `printf` da biblioteca padrão do C. O objetivo é entender melhor como funciona a manipulação de strings, argumentos variáveis e saída formatada, implementando nossa própria versão da função sem utilizar `printf` ou funções similares.

## Funcionalidades
A função `ft_printf` deve suportar as seguintes especificações de formato:
- `%c` → Imprime um caractere
- `%s` → Imprime uma string
- `%p` → Imprime um ponteiro no formato hexadecimal
- `%d` / `%i` → Imprime um inteiro decimal (base 10)
- `%u` → Imprime um inteiro sem sinal (unsigned)
- `%x` / `%X` → Imprime um número hexadecimal (minúsculo e maiúsculo)
- `%%` → Imprime o caractere `%`

## Como compilar e testar
1. Clone este repositório:
   ```sh
   git clone https://github.com/seu-usuario/ft_printf.git
   cd ft_printf
   ```
2. Compile a biblioteca:
   ```sh
   make
   ```
3. Para testar, crie um arquivo de teste e compile junto com `libftprintf.a`:
   ```sh
   gcc main.c -L. -lftprintf -o test_printf
   ./test_printf
   ```

## Regras do Projeto
- O código deve seguir a *Norminette*.
- Não é permitido usar `malloc`, exceto para funções auxiliares.
- Apenas funções permitidas pela 42 podem ser usadas (`write`, `malloc`, `free`, `va_start`, `va_arg`, `va_copy`, `va_end`).
- O projeto deve ser modularizado e bem estruturado.

## Autores
- [Nathan-N7](https://github.com/Nathan-N7)

