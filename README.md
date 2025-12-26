# <i>Árvore</i> - Natal

> Árvore de de natal feita como desafio para treinar a lógica

[![Maintened Shields.io](https://img.shields.io/badge/Maintened%3F-Analisando-yellow.svg)](https://github.com/Artemiz-TK/tree/graphs/commit-activity)
[![Pull Requests](https://img.shields.io/badge/Pull%20requests-Analisando-yellow.svg)](https://github.com/Artemiz-TK/tree/fork)


## Preview
<img width="300" height="400" alt="tree" src="https://github.com/user-attachments/assets/d4290dcd-f828-430c-a962-3e0ce5359a8d" />

## Organização de arquivos
```
./
├── bin
│   └── arvore.exe
├── include
│   └── center.h
├── obj
│   ├── center.o
│   └── main.o
├── src
│   └── center.c
├── LICENSE.txt
├── README.md
└── main.c
```

## Instalação
```bash
git clone --depth=1 https://github.com/Artemiz-TK/tree.git ~/arvore
~/arvore/bin/arvore.exe
```

## Compilação
Caso faça alguma modificação no arquivo `main.c` ou no `src/center.c`, use esse passo-a-passo
```bash
gcc -c main.c
gcc -c ./src/center.c
mv *.o ./obj/
gcc ./obj/main.o ./obj/center.o -o ./bin/arvore.exe
```

> [!NOTE]
> Se você fizer alguma modifição no arquivo `./src/center.c` em relação a funções, você tem que incluir essas mesmas funções no arquivo header `./include/center.h`

## Execução
- Se você está no diretório raiz (`~/arvore`), basta usar esse comando
```bash
./bin/arvore.exe # ou só bin/arvore
```

- Já se você estiver em outro diretório, é só usar esse comando
```bash
~/arvore/bin/arvore
```