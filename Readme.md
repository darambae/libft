
# Libft

## Table of Contents

- [Libft](#libft)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Features](#features)
  - [Installation](#installation)
  - [Functions List](#functions-list)
  - [Project Structure](#project-structure)
  - [└── README.md](#-readmemd)

## Introduction

Libft is a library that recreates a number of standard C library functions, as well as additional utility functions that are often used in larger projects. This project is a fundamental part of the 42 school curriculum, aimed at developing a deeper understanding of C programming and enhancing code reusability.

Libft est une bibliothèque qui recrée un certain nombre de fonctions de la bibliothèque standard C, ainsi que des fonctions utilitaires supplémentaires souvent utilisées dans des projets plus importants. Ce projet est une partie fondamentale du programme de l'école 42, visant à développer une compréhension plus approfondie de la programmation en C et à améliorer la réutilisabilité du code.

Libft는 표준 C 라이브러리 함수뿐만 아니라 더 큰 프로젝트에서 자주 사용되는 추가 유틸리티 함수를 재구현하는 라이브러리입니다. 이 프로젝트는 C 프로그래밍에 대한 더 깊은 이해를 개발하고 코드 재사용성을 향상시키기 위해 42 학교 커리큘럼의 기본적인 부분입니다.

---

## Features

- Custom implementations of several C standard library functions.
- Additional functions for string manipulation, memory management, and linked lists.
- Provides a foundation for more complex projects.

- Implémentations personnalisées de plusieurs fonctions de la bibliothèque standard C.
- Fonctions supplémentaires pour la manipulation de chaînes, la gestion de la mémoire et les listes chaînées.
- Fournit une base pour des projets plus complexes.

- 여러 C 표준 라이브러리 함수의 맞춤 구현.
- 문자열 조작, 메모리 관리 및 연결 리스트를 위한 추가 함수.
- 더 복잡한 프로젝트를 위한 기초 제공.

---

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/libft.git
    cd libft
    ```
2. Compile the library:
    ```bash
    make
    ```
3. Include `libft.a` in your projects.

1. Clonez le dépôt :
    ```bash
    git clone https://github.com/yourusername/libft.git
    cd libft
    ```
2. Compilez la bibliothèque :
    ```bash
    make
    ```
3. Incluez `libft.a` dans vos projets.

1. 저장소를 복제하세요:
    ```bash
    git clone https://github.com/yourusername/libft.git
    cd libft
    ```
2. 라이브러리를 컴파일하세요:
    ```bash
    make
    ```
3. `libft.a`를 프로젝트에 포함하세요.

---

## Functions List

- `ft_isalpha` - Checks for alphabetic character.
- `ft_isdigit` - Checks for a digit (0 through 9).
- `ft_isalnum` - Checks for an alphanumeric character.
- `ft_isascii` - Checks if a character is in the ASCII set.
- `ft_isprint` - Checks for printable characters.
- `ft_strlen` - Calculates the length of a string.
- `ft_memset` - Fills memory with a constant byte.
- `ft_bzero` - Sets all bytes of a memory area to 0.
- `ft_memcpy` - Copies memory from one area to another.
- `ft_memmove` - Safely moves memory from one area to another.
- `ft_strlcpy` - Copies a string to a buffer with size restriction.
- `ft_strlcat` - Appends a string to another, with size restriction.
- `ft_tolower` - Converts a character to lowercase.
- `ft_toupper` - Converts a character to uppercase.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_memchr` - Locates a byte in memory.
- `ft_memcmp` - Compares two memory areas.
- `ft_strnstr` - Locates a substring in a string, where the search is limited by the length of the string.
- `ft_atoi` - Converts a string to an integer.
- `ft_calloc` - Allocates memory for an array and initializes it to 0.
- `ft_strdup` - Duplicates a string.
- `ft_substr` - Extracts a substring from a string.
- `ft_strjoin` - Concatenates two strings.
- `ft_strtrim` - Trims leading and trailing whitespace from a string.
- `ft_split` - Splits a string into an array of strings based on a delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string, returning a new string.
- `ft_striteri` - Applies a function to each character of a string in place.
- `ft_putchar_fd` - Writes a character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Writes an integer to a file descriptor.
- Linked List Functions:
     - `ft_lstnew` - Creates a new linked list element.
     - `ft_lstadd_front` - Adds an element to the front of the list.
     - `ft_lstsize` - Counts the number of elements in the list.
     - `ft_lstlast` - Returns the last element of the list.
     - `ft_lstadd_back` - Adds an element to the end of the list.
     - `ft_lstdelone` - Deletes an element of the list.
     - `ft_lstclear` - Clears the entire list.
     - `ft_lstiter` - Iterates over a list and applies a function to each element.
     - `ft_lstmap` - Iterates over a list and applies a function, returning a new list.

- `ft_isalpha` - Vérifie si un caractère est alphabétique.
- `ft_isdigit` - Vérifie si un caractère est un chiffre (0 à 9).
- `ft_isalnum` - Vérifie si un caractère est alphanumérique.
- `ft_isascii` - Vérifie si un caractère appartient à l'ensemble ASCII.
- `ft_isprint` - Vérifie si un caractère est imprimable.
- `ft_strlen` - Calcule la longueur d'une chaîne de caractères.
- `ft_memset` - Remplit une zone mémoire avec une valeur constante.
- `ft_bzero` - Initialise une zone mémoire à 0.
- `ft_memcpy` - Copie des zones de mémoire.
- `ft_memmove` - Déplace des zones de mémoire en toute sécurité.
- `ft_strlcpy` - Copie une chaîne avec une restriction de taille.
- `ft_strlcat` - Concatène deux chaînes avec une restriction de taille.
- `ft_tolower` - Convertit un caractère en minuscule.
- `ft_toupper` - Convertit un caractère en majuscule.
- `ft_strchr` - Trouve la première occurrence d'un caractère dans une chaîne.
- `ft_strrchr` - Trouve la dernière occurrence d'un caractère dans une chaîne.
- `ft_strncmp` - Compare deux chaînes jusqu'à un certain nombre de caractères.
- `ft_memchr` - Trouve un octet dans une zone mémoire.
- `ft_memcmp` - Compare deux zones mémoire.
- `ft_strnstr` - Trouve une sous-chaîne dans une chaîne avec une limite de longueur.
- `ft_atoi` - Convertit une chaîne en entier.
- `ft_calloc` - Alloue de la mémoire pour un tableau et l'initialise à 0.
- `ft_strdup` - Duplique une chaîne.
- `ft_substr` - Extrait une sous-chaîne d'une chaîne.
- `ft_strjoin` - Concatène deux chaînes.
- `ft_strtrim` - Supprime les espaces blancs en début et fin de chaîne.
- `ft_split` - Divise une chaîne en un tableau de chaînes selon un délimiteur.
- `ft_itoa` - Convertit un entier en chaîne de caractères.
- `ft_strmapi` - Applique une fonction à chaque caractère d'une chaîne et renvoie une nouvelle chaîne.
- `ft_striteri` - Applique une fonction à chaque caractère d'une chaîne en place.
- `ft_putchar_fd` - Écrit un caractère dans un descripteur de fichier.
- `ft_putstr_fd` - Écrit une chaîne dans un descripteur de fichier.
- `ft_putendl_fd` - Écrit une chaîne suivie d'un retour à la ligne dans un descripteur de fichier.
- `ft_putnbr_fd` - Écrit un nombre entier dans un descripteur de fichier.
- Fonctions de liste chaînée :
     - `ft_lstnew` - Crée un nouvel élément de liste chaînée.
     - `ft_lstadd_front` - Ajoute un élément au début de la liste.
     - `ft_lstsize` - Compte le nombre d'éléments dans la liste.
     - `ft_lstlast` - Renvoie le dernier élément de la liste.
     - `ft_lstadd_back` - Ajoute un élément à la fin de la liste.
     - `ft_lstdelone` - Supprime un élément de la liste.
     - `ft_lstclear` - Supprime tous les éléments de la liste.
     - `ft_lstiter` - Itère sur une liste et applique une fonction à chaque élément.
     - `ft_lstmap` - Itère sur une liste, applique une fonction et renvoie une nouvelle liste.

- `ft_isalpha` - 알파벳 문자인지 확인.
- `ft_isdigit` - 숫자인지 확인 (0-9).
- `ft_isalnum` - 영숫자인지 확인.
- `ft_isascii` - ASCII 문자인지 확인.
- `ft_isprint` - 출력 가능한 문자인지 확인.
- `ft_strlen` - 문자열 길이를 계산.
- `ft_memset` - 메모리를 지정된 값으로 채움.
- `ft_bzero` - 메모리를 0으로 설정.
- `ft_memcpy` - 메모리를 한 곳에서 다른 곳으로 복사.
- `ft_memmove` - 메모리를 안전하게 이동.
- `ft_strlcpy` - 제한된 크기의 버퍼로 문자열 복사.
- `ft_strlcat` - 제한된 크기의 버퍼로 문자열 추가.
- `ft_tolower` - 문자를 소문자로 변환.
- `ft_toupper` - 문자를 대문자로 변환.
- `ft_strchr` - 문자열에서 문자의 첫 번째 발생을 찾음.
- `ft_strrchr` - 문자열에서 문자의 마지막 발생을 찾음.
- `ft_strncmp` - 문자열을 지정된 길이만큼 비교.
- `ft_memchr` - 메모리에서 바이트를 찾음.
- `ft_memcmp` - 두 메모리 영역을 비교.
- `ft_strnstr` - 문자열 내에서 제한된 길이로 부분 문자열을 찾음.
- `ft_atoi` - 문자열을 정수로 변환.
- `ft_calloc` - 배열을 위해 메모리를 할당하고 0으로 초기화.
- `ft_strdup` - 문자열 복제.
- `ft_substr` - 문자열에서 부분 문자열 추출.
- `ft_strjoin` - 두 문자열을 연결.
- `ft_strtrim` - 문자열의 앞뒤 공백을 제거.
- `ft_split` - 구분 기호를 기준으로 문자열을 배열로 분할.
- `ft_itoa` - 정수를 문자열로 변환.
- `ft_strmapi` - 문자열의 각 문자에 함수를 적용하고 새 문자열 반환.
- `ft_striteri` - 문자열의 각 문자에 함수 적용.
- `ft_putchar_fd` - 파일 디스크립터에 문자 쓰기.
- `ft_putstr_fd` - 파일 디스크립터에 문자열 쓰기.
- `ft_putendl_fd` - 파일 디스크립터에 문자열을 개행과 함께 쓰기.
- `ft_putnbr_fd` - 파일 디스크립터에 정수 쓰기.
- 연결 리스트 함수:
     - `ft_lstnew` - 새로운 연결 리스트 요소 생성.
     - `ft_lstadd_front` - 리스트 앞에 요소 추가.
     - `ft_lstsize` - 리스트 요소 개수 세기.
     - `ft_lstlast` - 리스트의 마지막 요소 반환.
     - `ft_lstadd_back` - 리스트 끝에 요소 추가.
     - `ft_lstdelone` - 리스트 요소 삭제.
     - `ft_lstclear` - 리스트의 모든 요소 삭제.
     - `ft_lstiter` - 리스트를 순회하며 각 요소에 함수 적용.
     - `ft_lstmap` - 리스트를 순회하며 각 요소에 함수 적용 후 새 리스트 반환.

---

## Project Structure

libft/
│
├── includes/
│   └── libft.h
│
├── srcs/
│   ├── ft_isalpha.c
│   ├── ft_isdigit.c
│   ├── ft_isalnum.c
│   ├── ft_isascii.c
│   ├── ft_isprint.c
│   ├── ft_strlen.c
│   ├── ft_memset.c
│   ├── ft_bzero.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_strlcpy.c
│   ├── ft_strlcat.c
│   ├── ft_tolower.c
│   ├── ft_toupper.c
│   ├── ft_strchr.c
│   ├── ft_strrchr.c
│   ├── ft_strncmp.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_strnstr.c
│   ├── ft_atoi.c
│   ├── ft_calloc.c
│   ├── ft_strdup.c
│   ├── ft_substr.c
│   ├── ft_strjoin.c
│   ├── ft_strtrim.c
│   ├── ft_split.c
│   ├── ft_itoa.c
│   ├── ft_strmapi.c
│   ├── ft_striteri.c
│   ├── ft_putchar_fd.c
│   ├── ft_putstr_fd.c
│   ├── ft_putendl_fd.c
│   ├── ft_putnbr_fd.c
│   └── ft_lst*.c (linked list functions)
│
├── Makefile
└── README.md
---