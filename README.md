*Este proyecto ha sido creado como parte del currículo de 42 por ismonter*

**DESCRIPCION**

libft es una biblioteca en C con funciones útiles reutilizables implementadas desde cero. 
El objetivo del proyecto es reescribir funciones de la biblioteca estándar de C y entender el funcionamiento interno de dichas funciones.

**Contenido del repositorio**
El repositorio contiene:

- Makefile
- libft.h
- Archivos .c con la implementación de todas las funciones

**FUNCIONES INCLUIDAS**

**Funciones de libc:**

- ft_isalpha – Comprueba si es una letra
- ft_isdigit – Comprueba si es un digito
- ft_isalnum – Comprueba si es alfanumerico
- ft_isascii – Comprueba si esta en el rango ASCII
- ft_isprint – Comprueba si es un caracter imprimible
- ft_strlen – Calcula la longitud de un string
- ft_strchr – Busca un caracter en un string empezando por el principio
- ft_strrchr – Busca un caracter en un string empezando por el final
- ft_strncmp – Compara dos cadenas hasta n caracteres
- ft_strnstr – Busca un string dentro de otro string
- ft_strlcpy – Copia strings de forma segura
- ft_strlcat – Concatena strings de forma segura
- ft_toupper – Convierte un caracter en mayuscula
- ft_tolower – Convierte un caracter en minuscula
- ft_memset – Llena memoria con un valor constante
- ft_bzero – Llena del caracter nulo un area de memoria
- ft_memcpy – Copia un area de memoria
- ft_memmove – Copia un area de memoria asegurando que no hay solapamientos
- ft_memchr – Busca un byte en un area de memoria
- ft_memcmp – Compara areas de memoria
- ft_atoi – Convierte string a entero
- ft_calloc – Asigna memoria a cero
- ft_strdup – Duplica un string

**Funciones adicionales:**

- ft_substr – Extrae un substring
- ft_strjoin – Concatena dos strings en uno nuevo
- ft_strtrim – Recorta caracteres al principio y al final de una cadena
- ft_split – Divide un string usando un delimitador
- ft_itoa – Convierte un entero a un string
- ft_strmapi – Aplica una funcion a cada carácter de un string
- ft_striteri – Itera sobre cada caracter aplicando una funcion
- ft_putchar_fd – Escribe un caractere en un file descriptor
- ft_putstr_fd – Escribe un string en un file descriptor
- ft_putendl_fd – Escribe un string mas un salto de línea
- ft_putnbr_fd – Escribe un número en un file descriptor

**Funciones de listas enlazadas:**

- ft_lstnew – Crea un nuevo nodo
- ft_lstadd_front – Añade un nodo al principio de la lista
- ft_lstadd_back Añade un nodo al final de la lista
- ft_lstsize – Cuenta los nodos de la lista
- ft_lstlast – Devuelve el último nodo de la lista
- ft_lstdelone – Libera un nodo
- ft_lstclear – Libera toda la lista
- ft_lstiter – Itera la lista aplicando una función
- ft_lstmap – Crea una nueva lista aplicando una función

**INSTRUCCIONES**

Para compilar la librería:

make

Comandos disponibles
- make o make all - Compila la librería
- make clean - Elimina los archivos objeto (.o)
- make fclean - Elimina los archivos objeto y la librería
- make re - Recompila completamente el proyecto

**RECURSOS**

Documentación

Manual de C (Man pages): https://linux.die.net/man/