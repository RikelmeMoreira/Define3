/*
 * File:   newmain.c
 * Author: 19180093
 *
 * Created on 11 de Março de 2020, 10:34
 */


#include <xc.h>
#include "Define3header.h"

#define LED         PORTDbits.RD0
#define LED2        PORTDbits.RD1
#define BOTAO       PORTDbits.RD3
#define BOTAO2      PORTDbits.RD2
#define DIR_ENTRADA    1
#define DIR_SAIDA      0
#define DIR_LED     TRISDbits.TRISD0
#define DIR_LED2    TRISDbits.TRISD1
#define DIR_BOTAO   TRISDbits.TRISD3
#define DIR_BOTAO2  TRISDbits.TRISD2

void main(void) 
{
    LED = 0 ;
    LED2 = 0 ;
    DIR_LED = DIR_SAIDA;
    DIR_LED2 = DIR_SAIDA;
    DIR_BOTAO = DIR_ENTRADA;
    DIR_BOTAO2 = DIR_ENTRADA;
    
    while(1)
    {
       LED = 1;
       __delay_ms(500);
       LED = 0;
       __delay_ms(500);
    
        
    }
       
    return;
}