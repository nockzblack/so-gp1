# Práctica 2

## Objetivo
Modificar al programa init para imprimir un mensaje de bienvenida.
Modificar al programa sh para ejecutar al programa anterior.

## Herramientas
gcc
git
make

## Conceptos

1) Proceso
* Es una instancia de un programa.
* Esta compuesto de 3 partes:
** Stack: variables y funciones, memoria limitada y crece hasta un límite. Produce un stack overflow cuando.
** Heap: Es una area de memoria dinamica que es igual a la RAM + SWAP.
** Código: Segmentado, ie es una parte.

* Tiene estados


* Se crea mediante dos llamadas a sistema
  ** fork: clone
  ** exec: cambia código
  
* Hay un proceso padre

## Qué aprendí?
Aprendí sobre sobre qué es un proceso y como funciona. Sobre las partes involucradas en la relación de un proceso y la memoria RAM (Stack, Heap, Código). Sobre el progrma init, que es el unico proceso que crea el OS y como este proceso crea hijos y utiliza los comandos Fork y exec.

## Url del commit
[URL] (https://github.com/nockzblack/so-gp1/commit/26245b51cba6acf73fd52c7c0cc62c36909d4241)
