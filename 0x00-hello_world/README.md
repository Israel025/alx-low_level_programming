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

