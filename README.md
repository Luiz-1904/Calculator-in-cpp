# 🧮 Simple C++ Calculator

Este é um projeto simples de calculadora feito em C++ com o objetivo de praticar e estudar a linguagem. Ele permite realizar as quatro operações matemáticas básicas: soma, subtração, multiplicação e divisão.

## ✨ Funcionalidades

- Entrada de dois números reais (`double`)
- Quatro operações:
  - Soma
  - Subtração
  - Multiplicação
  - Divisão (com verificação de divisão por zero)
- Repetição da operação com base na resposta do usuário
- Validação de entradas com tratamento de erros

## 📄 Código Fonte

O código está todo estruturado em um único arquivo e contém funções separadas para:
- Cada operação matemática (`sum`, `sub`, `mult`, `div`)
- Controle de fluxo para repetir ou encerrar (`playAgain`)
- Lógica principal da calculadora (`calculator`)
- Interface de entrada com o usuário (`interface`)
- Função principal (`main`)

## 🔧 Como compilar e executar

### Compilação

```bash
g++ -o calculator calculator.cpp
```

### Execução

```bash
./calculator
```

## 🧠 Exemplo de uso

```text
Type the first number: 10
Type the second number: 5
Choose an operation (1 = +, 2 = -, 3 = *, 4 = /): 1
10+5 = 15
Do you want to calculate again? (Y/N): y
```

## 📚 Objetivos educacionais

Este projeto tem como principal objetivo:
- Praticar estruturas básicas em C++
- Entender o uso de funções, loops, condicionais e tratamento de erros
- Melhorar a organização do código com boas práticas

## 🛠️ Possíveis melhorias

- Adicionar suporte a mais operações (por exemplo, potência, raiz quadrada)
- Criar um menu principal
- Permitir entrada de expressões completas
- Criar uma interface gráfica futuramente

---
