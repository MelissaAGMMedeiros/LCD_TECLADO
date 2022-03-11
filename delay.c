/*
 * File:   delay.c
 * Author: 21193460
 *
 * Created on 4 de Mar�o de 2022, 10:42
 */


#include <xc.h>
#include "delay.h"

void delay( unsigned int t )
{
    while( t )
    {
        __delay_ms( 1 );
        --t;
    }
}
