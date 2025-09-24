# ft_printf

![C](https://img.shields.io/badge/language-C-blue.svg)

### Overview
Reimplementation of `printf` in C. Part of the 42 curriculum and designed to integrate with a custom [**libft**](https://github.com/biertisch/libft).

---
### Features

* **Supported conversions**: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`
* **Tester** (extra):
	* `main` that compares `ft_printf` with the standard `printf` on various valid and invalid cases.
	* Simple shell script to compile and run the tester.

>Note: Original `printf` buffer management is not implemented.

---
### Installation

```
git clone https://github.com/biertisch/ft_printf.git
```

---
### Usage

Function prototype:
```
int	ft_printf(const char *format, ...);
```
Example:
```
ft_printf("Hello, world member no. %d!\n", 1);
```

Integrated in [**libft**](https://github.com/biertisch/libft).


To run the tester:
```
./test/test.sh
```
> Note: To test the original `printf` behaviour on invalid cases, uncomment lines in `main.c` and recompile without `-Werror`.

---
### About 42

42 is a computer science school founded in Paris in 2013. It follows a project-based, peer-to-peer pedagogy focused on mid-level programming and algorithmic thinking.

---
### License & Contact

This repository is open for learning and reuse. Contributions, suggestions, and discussions are welcome — feel free to open an issue or reach out.