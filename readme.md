# C Format Specifiers

In the C programming language, format specifiers are used in functions like `printf` and `scanf` to format the input and output of data. This README provides a list of common C format specifiers and their usage.

## Integer Types

- `%d`: Decimal integer.
- `%i`: Integer.
- `%u`: Unsigned decimal integer.
- `%o`: Octal integer.
- `%x`, `%X`: Hexadecimal integer.
- `%ld`, `%lu`, `%lo`, `%lx`: Long integers.

## Floating Point Types

- `%f`: Decimal floating-point number.
- `%e`, `%E`: Scientific notation (exponential format).
- `%g`, `%G`: General format (chooses `%f` or `%e` based on value).
- `%a`, `%A`: Hexadecimal floating-point number (C99).

## Characters and Strings

- `%c`: Single character.
- `%s`: String of characters.
- `%p`: Pointer address.

## Others

- `%n`: Number of characters written so far.
- `%%`: Literal `%` character.

## Modifier Specifiers

- `l` (ell): Used for `long` integers (`%ld`, `%lu`, etc.).
- `h`: Used for `short` integers.
- `L`: Used for `long double`.

These format specifiers are used in functions like `printf` to format the output and in `scanf` to interpret and read input according to the specified format. It's important to use the correct format specifier corresponding to the data type being printed or scanned; mismatching specifiers can lead to undefined behavior or incorrect output.