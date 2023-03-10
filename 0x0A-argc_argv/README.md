# Project: 0x0A. C - argc, argv

## What are argc and argv in C?

In C programming language, `argc` and `argv` are parameters that are used to pass command-line arguments to the program when it is executed.

* `argc`: the number of command-line arguments passed to the program.
* `argv`: an array of strings that contains the program's command-line arguments.

The `argc` and `argv` parameters are typically used to provide input to a program and to modify the program's behavior based on that input. For example, a program that performs file operations may accept a filename as a command-line argument.

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

## General

* How to use arguments passed to your program
* What are two prototypes of `main` that you know of, and in which case do you use one or the other
* How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

# Project Tasks

## It ain't what they call you, it's what you answer to

[0-whatsmyname.c](./0-whatsmyname.c) - Write a program that prints its name, followed by a new line.

* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```

## Silence is argument carried out by other means

[1-args.c](./1-args.c) - Write a program that prints the number of arguments passed into it.

* Your program should print a number, followed by a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 
```

## The best argument against democracy is a five-minute conversation with the average voter

[2-args.c](./2-args.c) - Write a program that prints all arguments it receives.

* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 
```
## Neither irony nor sarcasm is argument

[3-mul.c](./3-mul.c) - Write a program that multiplies two numbers.

* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
```

## To infinity and beyond

[4-add.c](./) - Write a program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print `0`, followed by a new line
* If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
* You can assume that numbers and the addition of all the numbers can be stored in an `int`

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 
```
