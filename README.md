# LIBASM

El objetivo de este proyecto es familiarizarse con el lenguaje ensamblador, reproduciendo algunas de las funciones mas comunes, reescribiendolas en asm64 bits, sintaxis Intel.

Requisito tener instalado:

    rm -rf $HOME/.brew && git clone --depth=1 https://github.com/Homebrew/brew $HOME/.brew && export PATH=$HOME/.brew/bin:$PATH && brew update && echo "export PATH=$HOME/.brew/bin:$PATH" >> ~/.zshrc
    
    brew install nasm

Para compilar:

    make test

Ejecutamos:

    ./test


Tenemos 3 test (tests.c, testshard.c, testshard2.c). Solo tenemos que modificar el Makefile y poner cual queremos utilizar.


El Makefile ya viene preparado para utilizar en la compilación:
    
    nasm -f macho64
  
    ar rcs
    
    
REFERENCÍAS:

    https://www.cs.uaf.edu/2017/fall/cs301/reference/x86_64.html
    https://www.exabyteinformatica.com/uoc/Informatica/Estructura_de_computadores/Estructura_de_computadores_(Modulo_6).pdf
    https://cs.lmu.edu/~ray/notes/nasmtutorial/
    http://cv.uoc.edu/annotation/8255a8c320f60c2bfd6c9f2ce11b2e7f/619469/PID_00218273/PID_00218273.html#w31aac15b9c17c17 (Castellano)
    
    

