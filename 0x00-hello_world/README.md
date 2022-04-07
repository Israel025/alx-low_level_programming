** The 0-preprocessor script runs a C file through the preprocessor and save the result into another file.
    assume The C file name will be saved in the variable $CFILE.
    The output will be saved in the file c.

** The 1-compiler script compiles a C file but does not link.
    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .o instead of .c.
        Example: if the C file is main.c, the output file should be main.

** The 2-assembler script generates the assembly code of a C code and save it in an output file.

    assuming The C file name will be saved in the variable $CFILE
    The output file would be named the same as the C file, but with the extension .s instead of .c.
        Example: if the C file is main.c, the output file would be main.s

** The 3-name script compiles a C file and creates an executable named cisfun.
    assuming the C file name will be saved in the variable $CFILE

** The 4-puts.c program prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
    Using the function puts (printf is not used) and the program ends with the value 0.

** The 5-printf.c program prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line using the function printf (not using function puts), the program return 0. The program should compile without warning when using the -Wall gcc option.

** The 6-size.c program prints the size of various types on the computer it is compiled and run on. Warnings are allowed and the program should return 0

