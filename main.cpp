#include "windows.h"
#include "stdio.h"
#include "conio.h"
#include "iostream"
#include "libgame.h"
#include <string>

int x,ter=1,u,o,i,win=0,colum,inv=0,jug[19],igual,a,b,c;
float  x1=1,y1,num;
int horas=00,minutos=00,segundos=-1;
char cal,fila;

using namespace std;

int main()
{
    gg:
        fflush(stdin);
        system("cls");
    string username="",passaword="";
    cout<<"Inicia Sesion."<<endl<<endl; cout<<"Ingrese Usuario:";       cin>>username;
    cout<<endl<<"Ingrese Contrasena:"; cin>>passaword; system("cls");
    /***************************************************MENU************************************************************************************************************/
      /***********************************************************************************************************************************************************************/
        if(username=="Angel" & passaword=="16100651")
           {
         pintar_marco();gotoxy(32,12);printf("BIENVENIDO");
         PlaySound(TEXT( "DRUM3.wav" ) ,NULL,SND_ASYNC);
         getch();
         system("cls");
          inicio:
              fflush(stdin);
    system("cls");
    printf("Menu:\n\nNumero de las funciones.\n");
    printf("CRONOMETRO=1;       ");printf("CALCULADORA=2;     ");printf("JUGAR GATO= 3;      ");printf("Opcion 4;          \nCualquier otro valor=Terminar;\n");
    printf("\n\nIngrese el numero de la funcion que usara:");scanf("%d",&x);
    switch(x)
    {
        /**************************************************************CRONOMETRO***********************************************************************************/
        /******************************************************************************************************************************************************************/
    case 1:
        crono:
        horas=00,minutos=00,segundos=-1;
        system("cls");
        cout<<"Pulse <ENTER> para iniciar:"; getch();system("cls");pintar_marco();
            PlaySound(TEXT( "Maid with the Flaxen Hair.wav" ) ,NULL,SND_ASYNC|SND_LOOP|SND_PURGE);
         while( !kbhit() )
         {
            gotoxy(35,12);printf("             ");
            segundos++;
            if(horas==24)
            {
                horas=0;minutos=0;segundos=0;
            }
            if(segundos==60)
            {
                minutos++; segundos=00;
                if(minutos==60)
                {
                    horas++; minutos=00;
                }
            }
            gotoxy(23,12);cout<<horas<<"h:"<<minutos<<"min:"<<segundos<<"seg."<<endl;
            gotoxy(23,14);cout<<"Pulse cualquier tecla para terminar";
            Sleep(1000);
         }
       salir:
           fflush(stdin);
       system("cls");pintar_marco();
       gotoxy(23,14);cout<<"El reloj llego hasta: "<<horas<<"  h:"<<minutos<<"  min:"<<segundos<<"  seg."<<endl;
       gotoxy(23,15);system("Pause");
       PlaySound(NULL,NULL,0);
       system("cls");
       printf("1=regresar          ; 0=salir:\n");scanf("%d",&i);
        if(i==1){
            goto crono;}
        goto inicio;
        /*********************************************************CALCULADORA*****************************************************************************/
        /******************************************************************************************************************************************************************/
    case 2:
        calculadora:
            num=0;
            x1=1;
        system("cls");
    do
    {
        system("cls");
        fflush(stdin);
        printf("Simbolos:\n < / >=Division,   <*>=Multiplicacion,   <->=Resta,  <+>=Suma,  <=>=Terminar");
        printf("\nTienes %f",num);
        while(x1==1)
        {
        printf("\nIntroduce 1er Valor: "); scanf("%f",&num);
        x1=0;
        }
        fflush(stdin);printf("\nIntroduce Simbolo: ");  scanf("%c",&cal);fflush(stdin);
        if(cal!='='){
                printf("Introduce 2er Valor: "); scanf("%f",&y1);fflush(stdin);}
        switch(cal)
        {
        case '+':
            num=num+y1;
            break;
        case '-':
            num=num-y1;\
            break;
        case '/':
            num=num/y1;
            break;
        case '*':
            num=num*y1;
            break;
        case '=':
            ter=0;
            break;
        default:
            PlaySound(TEXT( "apuntele bien.wav" ) ,NULL,SND_ASYNC);
            break;
        }
    }
    while(ter==1);
    system("cls");
    fflush(stdin);
    printf("El resultado final es %f",num);
    getch();
    system("cls");
    printf("1=regresar          ; 0=salir:\n");scanf("%d",&i);
    if(i==1)
        goto calculadora;
    goto inicio;
    /****************************************************JUEGO DE GATO******************************************************************************/
      /******************************************************************************************************************************************************************/
        case 3:
            gato:
                fflush(stdin);
            system("cls");
            for(o=0;o<=19;o++){
            jug[o]=0;}
            igual=0;
            win=0;
            printf("Juego de gato con coordenadas xd     nico nico nii");
 pintar_marco();
       /*para imprimir columnas*/
   for(u=11;u<=15;)
   {
       u=u+3;
   for(o=8;o<=14;o++)
        {
            gotoxy(u,o);
            printf("|");
        }
   }
   /*para imprimir filas*/
      for(o=6;o<=10;)
   {
       o=o+3;
   for(u=12;u<=19;u++)
        {
            gotoxy(u,o);
            printf("_");
        }
   }
      /*para imprimir posiciones*/
   gotoxy(12,7);printf("A");gotoxy(15,7);printf("B");gotoxy(18,7);printf("C");
   gotoxy(10,8);printf("1");gotoxy(10,11);printf("2");gotoxy(10,14);printf("3");
       gotoxy(9,3);printf("Juega Gato");

/*************************************************************Principal*****************************************************************************************************/
while(win==0)
    {
       /**turno 1er jugador**/
    paca:
        fflush(stdin);
        fila='/0';colum=0;
    for(o=4;o<=9;o++){
    gotoxy(24,o);printf("                                                        ");}

      gotoxy(25,4);printf("Turno jugador 1. Ingrese coordenadas a continuacion.");
      gotoxy(25,5);printf("Ingrese Fila(numero):");scanf("%d",&colum);fflush(stdin);
      gotoxy(25,6);printf("Ingrese Columna(letra):");fflush(stdin);scanf("%c",&fila);fflush(stdin);         /*Escaneo de coordenadas*/
      inv=0;

      if(jug[1]==0 & jug[10]==0){if(fila=='a' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,8);printf("x");igual++;inv=1;jug[1]=1;}}
      if(jug[2]==0 & jug[11]==0){if(fila=='a' & colum==2){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,11);printf("x");igual++;inv=1;jug[2]=1;}}
      if(jug[3]==0 & jug[12]==0){if(fila=='a' & colum==3){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,14);printf("x");igual++;inv=1;jug[3]=1;}}

      if(jug[4]==0 & jug[13]==0){if(fila=='b' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,8);printf("x");igual++;inv=1;jug[4]=1;}}
      if(jug[5]==0 & jug[14]==0){if(fila=='b' & colum==2){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,11);printf("x");igual++;inv=1;jug[5]=1;}}    /*lectura de coordenadas e impresion en dichas*/
      if(jug[6]==0 & jug[15]==0){if(fila=='b' & colum==3){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,14);printf("x");igual++;inv=1;jug[6]=1;}}

      if(jug[7]==0 & jug[16]==0){if(fila=='c' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,8);printf("x");igual++;inv=1;jug[7]=1;}}
      if(jug[8]==0 & jug[17]==0){if(fila=='c' & colum==2){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,11);printf("x");igual++;inv=1;jug[8]=1;}}
      if(fila=='c' & colum==3){if((jug[9]==0) & (jug[18]==0)){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,14);printf("x");igual++;inv=1;jug[9]=1;}}

    if(igual==9 ){
     win=1;inv=1;}

      if(inv==0){
      if(fila!='|' & colum!=89){
            PlaySound(TEXT( "apuntele bien.wav" ) ,NULL,SND_ASYNC);
          gotoxy(24,7);printf("Coordenada ya introducida o invalida.");getch();inv=1;goto paca;}}  /*sistema en caso de coordenadas invalidas*/

/**Verificacion de posible ganador 1*/
    /*Verificacion de verticales*/
          for(o=1;o<=3;o++){
         if(o==1){a=1;b=2;c=3;}
         if(o>1){a=a+3;b=b+3;c=c+3;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=2;}
/*Verificacion de horizontales*/
          for(o=1;o<=3;o++){
         if(o==1){a=1;b=4;c=7;}
         if(o>1){a=a+1;b=b+1;c=c+1;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=2;}
/*Verificacion de diagonales*/
          for(o=1;o<=2;o++){
         if(o==1){a=1;b=5;c=9;}
         if(o>1){a=a+2;c=c-2;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=2;}
     /*****************************turno 2er jugador***************************/
if(win==0)
        {
    paya:
        fflush(stdin);
        fila='/0';colum=0;
    for(o=4;o<=9;o++){
    gotoxy(24,o);printf("                                                        ");}

      gotoxy(25,4);printf("Turno jugador 2do. Ingrese coordenadas a continuacion.");
      gotoxy(25,5);printf("Ingrese columna(numero):");scanf("%d",&colum);
      gotoxy(25,6);printf("Ingrese fila(letra):");fflush(stdin);scanf("%c",&fila);fflush(stdin);                              /*Escaneo de coordenadas*/
      inv=0;

      if(jug[10]==0 & jug[1]==0){if(fila=='a' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,8);printf("o");igual++;inv=1;jug[10]=1;}}
      if(jug[11]==0 & jug[2]==0){if(fila=='a' & colum==2){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,11);printf("o");igual++;inv=1;jug[11]=1;}}
      if(jug[12]==0 & jug[3]==0){if(fila=='a' & colum==3){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(17,8);gotoxy(12,14);printf("o");igual++;inv=1;jug[12]=1;}}

      if(jug[13]==0 & jug[4]==0){if(fila=='b' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,8);printf("o");igual++;inv=1;jug[13]=1;}}
      if(jug[14]==0 & jug[5]==0){if(fila=='b' & colum==2){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,11);printf("o");igual++;inv=1;jug[14]=1;}}      /*lectura de coordenadas e impresion*/
      if(jug[15]==0 & jug[6]==0){if(fila=='b' & colum==3){
          PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(15,14);printf("o");igual++;inv=1;jug[15]=1;}}

      if(jug[16]==0 & jug[7]==0){if(fila=='c' & colum==1){
            PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,8);printf("o");igual++;inv=1;jug[16]=1;}}
      if(jug[17]==0 & jug[8]==0){if(fila=='c' & colum==2){PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,11);printf("o");igual++;inv=1;jug[17]=1;}}
      if(jug[18]==0 & jug[9]==0){if(fila=='c' & colum==3){PlaySound(TEXT( "super_mario_bros_coin_sound_effe.wav" ) ,NULL,SND_ASYNC);
      gotoxy(12,8);gotoxy(18,14);printf("o");igual++;inv=1;jug[18]=1;}}

      if(inv==0){
      if(fila!='|' & colum!=89){
            PlaySound(TEXT( "apuntele bien.wav" ) ,NULL,SND_ASYNC);
          gotoxy(24,7);printf("Coordenada ya introducida o invalida.");getch();inv=1;goto paya;}} /*sistema en caso de coordenadas invalidas*/

/**Verificacion de posible ganador 2*/
    /*Verificacion de verticales*/
          for(o=1;o<=3;o++){
         if(o==1){a=10;b=11;c=12;}
         if(o>1){a=a+3;b=b+3;c=c+3;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=3;}
/*Verificacion de horizontales*/
          for(o=1;o<=3;o++){
         if(o==1){a=10;b=13;c=16;}
         if(o>1){a=a+1;b=b+1;c=c+1;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=3;}
/*Verificacion de diagonales*/
          for(o=1;o<=2;o++){
         if(o==1){a=10;b=14;c=18;}
         if(o>1){a=a+2;c=c-2;}
         if((jug[a]==1)&(jug[b]==1)&(jug[c]==1))
         win=3;}
       }
    }
    fflush(stdin);
    for(o=4;o<=9;o++){
    gotoxy(24,o);printf("                                                        ");}
    if(win==1){
      pintar_marco();gotoxy(35,12);printf("Nadie gano :C ");PlaySound(TEXT( "Fatality Announcer Mortal Kombat 9   Sound Effect.wav" ) ,NULL,SND_ASYNC);getch();}

    if(win==2){
      pintar_marco();gotoxy(35,12);printf("Jugador 1 Gana C: ");PlaySound(TEXT( "Fatality Announcer Mortal Kombat 9   Sound Effect.wav" ) ,NULL,SND_ASYNC);getch();}
    if(win==3){
      pintar_marco();gotoxy(35,12);printf("Jugador 2 Gana C: ");PlaySound(TEXT( "Fatality Announcer Mortal Kombat 9   Sound Effect.wav" ) ,NULL,SND_ASYNC);getch();}

      system("cls");pintar_marco();gotoxy(35,12);printf("Ingrese 1 si quiere volver a jugar:");scanf("%d",&o);fflush(stdin);
      if(o==1)
        goto gato;
    goto inicio;
    /*************************************************************CUARTA FUNCION*****************************************************************************/
    /******************************************************************************************************************************************************************/
        case 4:
            system("cls");
            printf("i lovio tu yoyo");getch();
        goto inicio;
    /*************************************************************DEFAULT**************************************************************************/
    /******************************************************************************************************************************************************************/
    default:
        goto exit;
    }
    exit:
        PlaySound(TEXT( "Claps and Cheers Aplausos.wav" ) ,NULL,SND_ASYNC);
    system("cls");
    printf("Adios c;\n\n\n\n");
    system("Pause");
    return 0;
    }
/***********************************************************DATOS INCORRECTOS*****************************************************************************/
        if(username=="Angel" & passaword!="16100651")
        {
            cout<<"Contrasena incorrecta";
               getch();
               goto gg;
         return 0;
        }
       if(username!="Angel" & passaword=="16100651")
            {
                cout<<"Usuario Incorrecto";
                   getch();
                   goto gg;
         return 0;
            }
           else
                   {
                    cout<<"Usuario y Contrasena Incorrectos";
                    getch();
                    goto gg;
                  }

    getch();
    system("cls");
    return 0;
}
