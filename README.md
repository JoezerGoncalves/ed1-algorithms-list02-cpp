# ED1 - Algoritmos (Lista 02) - C++

Este repositório contém as soluções para a **Lista 02 de Algoritmos e Estruturas de Dados 1 (ED1)**, implementadas na linguagem **C++**. O projeto está estruturado de forma simples e utiliza o **CMake** como sistema de build automatizado.

## 🚀 Estrutura do Repositório

O projeto possui a seguinte organização de arquivos:

* `scr/`: Diretório contendo os códigos-fonte (`.cpp`) ou cabeçalhos auxiliares da lista de exercícios.
* `main.cpp`: Ponto de entrada principal para execução e teste dos algoritmos.
* `CMakeLists.txt`: Arquivo de configuração do CMake para compilação do projeto.

## 🛠️ Pré-requisitos

Para compilar e rodar este projeto, você precisará de:
* Um compilador que suporte C++11 ou superior (ex: **GCC**, **Clang** ou **MSVC**).
* **CMake** instalado (versão 3.10 ou superior recomendada).

## ⚙️ Como Compilar e Executar

Siga os passos abaixo no seu terminal para compilar o projeto utilizando o CMake:

1. **Clonar o repositório:**
   ```bash
   git clone https://github.com/JoezerGoncalves/ed1-algorithms-list02-cpp.git
   cd ed1-algorithms-list02-cpp
   ```

2. **Criar um diretório de build:**
   ```bash
   mkdir build && cd build
   ```

3. **Gerar os arquivos de build com o CMake:**
   ```bash
   cmake ..
   ```

4. **Compilar o projeto:**
   ```bash
   cmake --build .
   ```

5. **Executar o programa:**
   * No Linux/macOS:
     ```bash
     ./main
     ```
   * No Windows:
     ```bash
     main.exe
     ```

## 📝 Tecnologias Utilizadas

* **C++** - Linguagem de programação principal.
* **CMake** - Sistema de build para gerenciamento da compilação.

---
Desenvolvido como parte dos estudos práticos de Estruturas de Dados 1.
