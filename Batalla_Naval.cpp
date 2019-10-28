# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <windows.h>

void pres(void);
void instrucc(void);
void acerca(void);
int main(){
        int p;
     for(p=1;p<3;p++){
        pres();
     }
     printf("\a");
     fflush(stdin);
    int opc;
    MENU:
     fflush(stdin);


     printf("\n\n\n\n\t\tB  A  T  A  L  L  A        N  A  V  A  L\n\n\n\t\t\t1:Comenzar juego\n"

            "\t\t\t2:Instrucciones\n"

             "\t\t\t3:Acerca de...\n"
             "\t\t\tIngresa cualquier otro numero para Salir\n");
             printf("Ingresa Opcion...");
            fflush(stdin);
            scanf("%d", &opc);


    if(opc==1){
        system("cls");

    //INICIANDO TABLEROS EN VACIO//////////////////////////////////////////
    char tabj[10][10];
    char tabc[10][10];
    char tabjcop[10][10];
    char tabccop[10][10];
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            tabj[i][j]=' ';
            tabc[i][j]=' ';
            tabjcop[i][j]=' ';
            tabccop[i][j]=' ';
        }
    }
    /////////////////////////////////////////////////////////////////////////

    //PONIENDO BARCOS EN EL TABLERO DEL JUGADOR
    //PONIENDO UN BARCO PORTA-AVIONES/////////////////////////////////
    int pos,fal,cal;

    srand(time(NULL));

    pos=rand()%2;
    //HORIZONTAL
    if(pos==1){
        fal=rand()%10;
        if(fal>4){
            cal=5;
        }else{
            cal=rand()%5;

        }
        for(i=cal;i<=cal+4;i++){
            tabj[fal][i]='P';
        }
    }
    //VERTICAL
    if(pos==0){
        cal=rand()%10;

        if(cal>4){
            fal=5;


        }else{
            fal=rand()%5;

        }
        for(i=fal;i<=fal+4;i++){
            tabj[i][cal]='P';
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////

    //PONIENDO DOS BARCOS CRUCEROS/////////////////////////////////////////////////////////
    int cb;
    for(cb=1;cb<=2;cb++){
    et1:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>5){
                cal=6;
            }else{
                cal=rand()%6;

            }

            i=cal;
            if(tabj[fal][i]=='P' || tabj[fal][i+1]=='P' || tabj[fal][i+2]=='P' || tabj[fal][i+3]=='P'){
                goto et1;

            }else if(tabj[fal][i]=='C' || tabj[fal][i+1]=='C' || tabj[fal][i+2]=='C' || tabj[fal][i+3]=='C'){
                        goto et1;
            }else{




                for(i=cal;i<=cal+3;i++){

                    tabj[fal][i]='C';
                }
            }
        }




        if(pos==0){
            cal=rand()%10;

            if(cal>5){
                fal=6;
            }else{
                fal=rand()%6;

            }

            i=fal;
            if(tabj[i][cal]=='P' || tabj[i+1][cal]=='P' || tabj[i+2][cal]=='P' || tabj[i+3][cal]=='P' ){
                goto et1;

            }else if(tabj[i][cal]=='C' || tabj[i+1][cal]=='C' || tabj[i+2][cal]=='C' || tabj[i+3][cal]=='C' ){
                        goto et1;
            }else{
                for(i=fal;i<=fal+3;i++){

                    tabj[i][cal]='C';
                }

            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////


    //PONIENDO TRES FRAGATAS/////////////////////////////////////////////////////////////////
    for(cb=1;cb<=3;cb++){
    et2:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>6){
                cal=7;
            }else{
                cal=rand()%7;

            }

            i=cal;
            if((tabj[fal][i]=='P') || (tabj[fal][i+1]=='P') || (tabj[fal][i+2]=='P')) {
                goto et2;

            }

            if((tabj[fal][i]=='C') || (tabj[fal][i+1]=='C') || (tabj[fal][i+2]=='C')) {
                goto et2;



            }else  if((tabj[fal][i]=='F') || (tabj[fal][i+1]=='F') || (tabj[fal][i+2]=='F')) {
                goto et2;
            }


                else{
                for(i=cal;i<=cal+2;i++){

                    tabj[fal][i]='F';
                    fflush(stdin);
                }
            }
        }




        if(pos==0){
            cal=rand()%10;

            if(cal>6){
                fal=7;
            }else{
                fal=rand()%7;

            }

            i=fal;
            if(tabj[i][cal]=='P' || tabj[i+1][cal]=='P' || tabj[i+2][cal]=='P' ){
                goto et2;

            }else
             if(tabj[i][cal]=='C' || tabj[i+1][cal]=='C' || tabj[i+2][cal]=='C' ){
                    goto et2;




                }else if(tabj[i][cal]=='F' || tabj[i+1][cal]=='F' || tabj[i+2][cal]=='F' ){
                    goto et2;
                }  else{
                    for(i=fal;i<=fal+2;i++){

                        tabj[i][cal]='F';
                        fflush(stdin);
                }

            }
        }
    }


    //////////////////////////////////////////////////////////////////////////////



//PONIENDO CUATRO BARREMINAS/////////////////////////////////////////////////////

    for(cb=1;cb<=4;cb++){
        et3:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>7){
                cal=8;
            }else{
                cal=rand()%8;

            }

            i=cal;
            if(tabj[fal][i]=='P' || tabj[fal][i+1]=='P' ){
                goto et3;

            }else  if(tabj[fal][i]=='C' || tabj[fal][i+1]=='C' ){
                        goto et3;
            }else if(tabj[fal][i]=='F' || tabj[fal][i+1]=='F' ){
                        goto et3;
            }else if(tabj[fal][i]=='B' || tabj[fal][i+1]=='B' ){
                        goto et3;
            }else{


                for(i=cal;i<=cal+1;i++){

                    tabj[fal][i]='B';
                }
            }
        }

        if(pos==0){
            cal=rand()%10;

            if(cal>7){
                fal=8;
            }else{
                fal=rand()%8;

            }

            i=fal;
            if(tabj[i][cal]=='P' || tabj[i+1][cal]=='P' ){
                goto et3;

            }else if(tabj[i][cal]=='C' || tabj[i+1][cal]=='C' ){
                goto et3;
            }else if(tabj[i][cal]=='F' || tabj[i+1][cal]=='F' ){
                goto et3;
            }else if(tabj[i][cal]=='B' || tabj[i+1][cal]=='B' ){
                goto et3;
            }

                else{
                for(i=fal;i<=fal+1;i++){

                    tabj[i][cal]='B';
                }

            }
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////

//PONIENDO BARCOS EN EL TABLERO DE LA COMPUTADOPRA
  //PONIENDO UN BARCO PORTA-AVIONES/////////////////////////////////

pos=rand()%2;
    //HORIZONTAL
    if(pos==1){
        fal=rand()%10;
        if(fal>4){
            cal=5;
        }else{
            cal=rand()%5;

        }
        for(i=cal;i<=cal+4;i++){
            tabc[fal][i]='P';
        }
    }
    //VERTICAL
    if(pos==0){
        cal=rand()%10;

        if(cal>4){
            fal=5;


        }else{
            fal=rand()%5;

        }
        for(i=fal;i<=fal+4;i++){
            tabc[i][cal]='P';
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////

    //PONIENDO DOS BARCOS CRUCEROS/////////////////////////////////////////////////////////

    for(cb=1;cb<=2;cb++){
    et4:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>5){
                cal=6;
            }else{
                cal=rand()%6;

            }

            i=cal;
            if(tabc[fal][i]=='P' || tabc[fal][i+1]=='P' || tabc[fal][i+2]=='P' || tabc[fal][i+3]=='P'){
                goto et4;

            }else if(tabc[fal][i]=='C' || tabc[fal][i+1]=='C' || tabc[fal][i+2]=='C' || tabc[fal][i+3]=='C'){
                        goto et4;
            }else{




                for(i=cal;i<=cal+3;i++){

                    tabc[fal][i]='C';
                }
            }
        }




        if(pos==0){
            cal=rand()%10;

            if(cal>5){
                fal=6;
            }else{
                fal=rand()%6;

            }

            i=fal;
            if(tabc[i][cal]=='P' || tabc[i+1][cal]=='P' || tabc[i+2][cal]=='P' || tabc[i+3][cal]=='P' ){
                goto et4;

            }else if(tabc[i][cal]=='C' || tabc[i+1][cal]=='C' || tabc[i+2][cal]=='C' || tabc[i+3][cal]=='C' ){
                        goto et4;
            }else{
                for(i=fal;i<=fal+3;i++){

                    tabc[i][cal]='C';
                }

            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////////////////


    //PONIENDO TRES FRAGATAS/////////////////////////////////////////////////////////////////
    for(cb=1;cb<=3;cb++){
    et5:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>6){
                cal=7;
            }else{
                cal=rand()%7;

            }

            i=cal;
            if((tabc[fal][i]=='P') || (tabc[fal][i+1]=='P') || (tabc[fal][i+2]=='P')) {
                goto et5;

            }

            if((tabc[fal][i]=='C') || (tabc[fal][i+1]=='C') || (tabc[fal][i+2]=='C')) {
                goto et5;



            }else  if((tabc[fal][i]=='F') || (tabc[fal][i+1]=='F') || (tabc[fal][i+2]=='F')) {
                goto et5;
            }


                else{
                for(i=cal;i<=cal+2;i++){

                    tabc[fal][i]='F';
                    fflush(stdin);
                }
            }
        }




        if(pos==0){
            cal=rand()%10;

            if(cal>6){
                fal=7;
            }else{
                fal=rand()%7;

            }

            i=fal;
            if(tabc[i][cal]=='P' || tabc[i+1][cal]=='P' || tabc[i+2][cal]=='P' ){
                goto et5;

            }else
             if(tabc[i][cal]=='C' || tabc[i+1][cal]=='C' || tabc[i+2][cal]=='C' ){
                    goto et5;




                }else if(tabc[i][cal]=='F' || tabc[i+1][cal]=='F' || tabc[i+2][cal]=='F' ){
                    goto et5;
                }  else{
                    for(i=fal;i<=fal+2;i++){

                        tabc[i][cal]='F';
                        fflush(stdin);
                }

            }
        }
    }


    //////////////////////////////////////////////////////////////////////////////



//PONIENDO CUATRO BARREMINAS/////////////////////////////////////////////////////

    for(cb=1;cb<=4;cb++){
        et6:
        pos=rand()%2;
        if(pos==1){
            fal=rand()%10;
            if(fal>7){
                cal=8;
            }else{
                cal=rand()%8;

            }

            i=cal;
            if(tabc[fal][i]=='P' || tabc[fal][i+1]=='P' ){
                goto et6;

            }else  if(tabc[fal][i]=='C' || tabc[fal][i+1]=='C' ){
                        goto et6;
            }else if(tabc[fal][i]=='F' || tabc[fal][i+1]=='F' ){
                        goto et6;
            }else if(tabc[fal][i]=='B' || tabc[fal][i+1]=='B' ){
                        goto et6;
            }else{


                for(i=cal;i<=cal+1;i++){

                    tabc[fal][i]='B';
                }
            }
        }

        if(pos==0){
            cal=rand()%10;

            if(cal>7){
                fal=8;
            }else{
                fal=rand()%8;

            }

            i=fal;
            if(tabc[i][cal]=='P' || tabc[i+1][cal]=='P' ){
                goto et6;

            }else if(tabc[i][cal]=='C' || tabc[i+1][cal]=='C' ){
                goto et6;
            }else if(tabc[i][cal]=='F' || tabc[i+1][cal]=='F' ){
                goto et6;
            }else if(tabc[i][cal]=='B' || tabc[i+1][cal]=='B' ){
                goto et6;
            }

                else{
                for(i=fal;i<=fal+1;i++){

                    tabc[i][cal]='B';
                }

            }
        }
    }

///////////////////////////////////////////////////////////////////////////////////////////













//PRIMERA IMPRESION DE TABLEROS
// TABLERO DE JUGADOR

    printf("\tPORTA-AVIONES=     PPPPP\n"
           "\tCRUCERO=            CCCC\n"
           "\tFRAGATA=             FFF\n"
           "\tBAREEMINAS=           BB\n\n\n");

    printf("Tablero Jugador\n\n");
    printf("      1   2   3   4   5   6   7   8   9  10\n\n");
     for(i=0;i<10;i++){
        if(i+1<10){

            printf("  %d",i+1);
        }else{
            printf(" %d",i+1);
        }


        for(j=0;j<10;j++){

            printf("   %c",tabj[i][j]);


        }
        printf("\n\n");

    }

    ////////////////////////////////////////////////////////////////
//IMPRIMIENDO TABLERO DE LA COMPUTADORA

    printf("\nTablero de la Computadora\n\n");
    fflush(stdin);

    printf("      1   2   3   4   5   6   7   8   9  10\n\n");
     for(i=0;i<10;i++){
        if(i+1<10){

            printf("  %d",i+1);
        }else{
            printf(" %d",i+1);
        }


        for(j=0;j<10;j++){

            printf("   %c",tabccop[i][j]);


        }
        printf("\n\n");
         fflush(stdin);

    }

    ////////////////////////////////////////////////////////////////

    //INICIANDO EL JUEGO
    int ganador=0,turno=1,fil,col,contjug=30,contcomp=30;


    while(ganador==0){

        while(turno==1){
            printf("Ingresa Fila\n");
             fflush(stdin);
            scanf("%d", &fil);
            printf("Ingresa Columna\n");
             fflush(stdin);
            scanf("%d", &col);
            while((fil<1 || fil>10) || (col<1 || col>10) ){
                printf("¡ERROR! Coordenada Incorrecta\nIngresa Fila\n");
                fflush(stdin);
                scanf("%d", &fil);
                fflush(stdin);
                printf("Ingresa Columna\n");
                 fflush(stdin);
                scanf("%d", &col);
            }

            if((tabc[fil-1][col-1]=='P') || (tabc[fil-1][col-1]=='C') || (tabc[fil-1][col-1]=='F') || (tabc[fil-1][col-1]=='B')){
                tabccop[fil-1][col-1]='X';
                contcomp--;


            }else{
                tabccop[fil-1][col-1]='@';

            }
            system("cls");
            // TABLERO DE JUGADOR

                printf("\tPORTA-AVIONES=     PPPPP\n"
                        "\tCRUCERO=            CCCC\n"
                        "\tFRAGATA=             FFF\n"
                        "\tBAREEMINAS=           BB\n\n\n");

            printf("Tablero Jugador\n\n");
            printf("      1   2   3   4   5   6   7   8   9  10\n\n");
            fflush(stdin);
            for(i=0;i<10;i++){
                if(i+1<10){

                    printf("  %d",i+1);
                }else{
                    printf(" %d",i+1);
                }


                for(j=0;j<10;j++){

                    printf("   %c",tabj[i][j]);


                }
                printf("\n\n");

            }

            ////////////////////////////////////////////////////////////////
           //IMPRIMIENDO TABLERO ACUALIZADO DE LA COMPUTADORA

            printf("\nTablero de la Computadora\n\n");
             fflush(stdin);
            printf("      1   2   3   4   5   6   7   8   9  10\n\n");
            fflush(stdin);
            for(i=0;i<10;i++){
                if(i+1<10){

                    printf("  %d",i+1);
                }else{
                    printf(" %d",i+1);
                }


                for(j=0;j<10;j++){

                    printf("   %c",tabccop[i][j]);


                }
                printf("\n\n");

            }

            ////////////////////////////////////////////////////////////////

            if(contcomp==0){
                turno=999;
                ganador=1;


            }else{

                turno=2;
            }

            while(turno==2){
                fil=rand()%10;
                col=rand()%10;
                 if((tabj[fil][col]=='P') || (tabj[fil][col]=='C') || (tabj[fil][col]=='F') || (tabj[fil][col]=='B')) {
                    tabj[fil][col]='X';
                    contjug--;

                }else{
                    tabj[fil][col]='@';

                }
                system("cls");
                 // TABLERO DE JUGADOR

                   printf("\tPORTA-AVIONES=     PPPPP\n"
                            "\tCRUCERO=            CCCC\n"
                            "\tFRAGATA=             FFF\n"
                            "\tBAREEMINAS=           BB\n\n\n");

                printf("Tablero Jugador\n\n");
                printf("      1   2   3   4   5   6   7   8   9  10\n\n");
                fflush(stdin);
                for(i=0;i<10;i++){
                    if(i+1<10){

                        printf("  %d",i+1);
                    }else{
                        printf(" %d",i+1);
                    }


                    for(j=0;j<10;j++){

                        printf("   %c",tabj[i][j]);


                    }
                    printf("\n\n");
                     fflush(stdin);

                }

                ////////////////////////////////////////////////////////////////
                //IMPRIMIENDO TABLERO ACTUALIZADO DE LA COMPUTADORA

                printf("\nTablero de la Computadora\n\n");
                 fflush(stdin);
                printf("      1   2   3   4   5   6   7   8   9  10\n\n");
                fflush(stdin);
                for(i=0;i<10;i++){
                    if(i+1<10){

                        printf("  %d",i+1);
                    }else{
                        printf(" %d",i+1);
                    }


                    for(j=0;j<10;j++){

                        printf("   %c",tabccop[i][j]);
                        fflush(stdin);


                    }
                    printf("\n\n");
                     fflush(stdin);

                }

                ////////////////////////////////////////////////////////////////

                if(contjug==0){
                    turno=999;
                    ganador=2;


                }else{

                    turno=1;
                }
            }
        }
    }
    //IMPRIMIENDO AL GANADOR
    if(ganador==1){
        printf("------------------GANADOR: JUGADOR\n-------------------\n");
         fflush(stdin);
    }
     if(ganador==2){
        printf("-----------------GANADOR: COMPUTADORA-----------------\n");
         fflush(stdin);
    }
    system("cls");
    fflush(stdin);
    goto MENU;
    fflush(stdin);
    }


    if(opc==2){
        instrucc();
        goto MENU;
        fflush(stdin);

    }
    if(opc==3){
        acerca();
        goto MENU;
        fflush(stdin);
    }





return 0;
}



void pres(void){

    printf("\n\n\n\n");
     printf("000000000________00000       Sajc     00000000_______0000000\n"
            "000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

            Sleep(100);
             system("cls");
              printf("\n\n\n\n");

     printf("       000000000________00000       Sajc     000000000_______0000000\n"
            "       000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

             Sleep(100);
              system("cls");
               printf("\n\n\n\n");
     printf("             000000000________00000       Sajc     00000000_______0000000\n"
            "             000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

             Sleep(100);
               system("cls");
                printf("\n\n\n\n");

     printf("                  000000000________00000       Sajc     00000000_______0000000\n"
            "                  000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

             Sleep(100);
               system("cls");
                printf("\n\n\n\n");


     printf("                       000000000________00000       Sajc     00000000_______0000000\n"
            "                       000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

             Sleep(100);
               system("cls");
                printf("\n\n\n\n");

     printf("                            000000000________00000       Sajc     00000000_______0000000\n"
            "                            000000000________00000 @Code Overflow 00000000_______0000000\n"
            );

             Sleep(100);
               system("cls");
    fflush(stdin);

}

void instrucc(void){
    system("cls");
    printf("\n\n\tB A T A L L A     N A V A L :Clasico juego de estrategia donde\n"
           "\ttienes que descubrir la posicion de barcos enemigos hasta hundirlos\n"
           "\ten este juego cuando una coordenada acierte a un barco enemigo\n"
           "\tquedara marcado como X y cualquier otra posicion sera marcada como @\n"
           "\tsimulando el agua... hay 1 portaaviones representado como PPPPP\n"
           "\t2 cruseros representados con CCCC 3 fragatas representados como FFF\n"
           "\ty 4 barreminas representados como BB el ganador es el que destruya\n"
           "\ttodos los barcos enemigos.\n\n\n");
           fflush(stdin);
           system("pause");
           system("cls");

}

void acerca(void){
    system("cls");
    printf("\n\n\n\n\n\n\t\t\tBatalla Naval 1.0\n"
           "\t\t\tHecho por: Sajc\n"
           "\t\t\tFacebook: Code Overflow\n"
           "\t\t\t\n\n\n\n");
           fflush(stdin);
           system("pause");
           system("cls");


}
