algoritmo BucleTonto;

{Fichero para prueba rapida de tablas, bucle y cadenas }

tipo
    MiLista = tabla[1..5] de real;
ftipo

var
    nums: MiLista;
    i: entero;
    letra: caracter;
    txt: cadena;
fvar

accion Inicio();
hacer
    letra := "x";
    txt := 'Hola /'mundo/'';

    para i := 1 hasta 5 hacer
        nums[i] := 2r;
    fpara;

    i := 1;
    mientras i <= 5 hacer
        i := i + 1;
    fmientras;
faccion

falgoritmo
