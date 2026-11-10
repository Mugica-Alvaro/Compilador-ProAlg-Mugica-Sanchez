algoritmo SumaSimple;

{Fichero con programa basico para probar entrada, asignacion y suma }

var
    a, b: entero;
    res: entero;
    esPositivo: booleano;
fvar

accion Principal();
hacer
    a := 5;
    b := 12;
    res := a + b;

    si res > 0 entonces
        esPositivo := verdadero;
    sino
        esPositivo := falso;
    fsi;
faccion

falgoritmo
