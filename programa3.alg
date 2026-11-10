ALGORITMO CasosLimite;

{Fichero de prueba para mayusculas, exponentes, comentarios y errores}

VAR
    miVariable, MIVARIABLE, Variable: REAL;
    flagOK: BOOLEANO;
FVAR

{Comentario con /} llaves /} dentro}

aCCioN TestEspeciales();
HACER

    {Mayusculas / minusculas en palabras reservadas}

    Si (miVariable = MIVARIABLE) EnTonCes
        Variable := 1.23e-4;
        flagOK := VeRdaDeRo;
    Fsi;

    mIeNtRaS flagOK = FALSO HACER
        Variable := +2E+3;
        cOnTiNuAr;
    fmIeNtRaS;

    {Simbolos raros para comprobar que el scanner indica error}

    @ # $ %

fAcCiOn

fAlGoRiTmO
