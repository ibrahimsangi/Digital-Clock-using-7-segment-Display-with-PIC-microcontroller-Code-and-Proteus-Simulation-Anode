/*
 * File:   7segment.c
 * Author: IBRAHIM LABS
 *
 * Created on June 22, 2013, 4:53 AM
 */

#define SEVEN_SEGMENT_DISPLAY_BUS LATB

#include <p24F16KA102.h>

unsigned char Display7Segment_CommonAnode(unsigned int Segment)
{
    /*  Warning !!! this function is for Common Anode type only*/
    
    /*  hard coded these values called lookuptables     */

    unsigned char const Segments[] = {  0xC0,       //  For displaying 0
                                        0xF9,       //  For displaying 1
                                        0xA4,       //  For displaying 2
                                        0xB0,       //  For displaying 3
                                        0x99,       //  For displaying 4
                                        0x92,       //  For displaying 5
                                        0x82,       //  For displaying 6
                                        0xF8,       //  For displaying 7
                                        0x80,       //  For displaying 8
                                        0x98};      //  For displaying 9

    static unsigned char Temp = 0;
    
    switch(Segment)
    {
        case 0:
            Temp = Segments[0];
            break;
        case 1:
            Temp = Segments[1];
            break;
        case 2:
            Temp = Segments[2];
            break;
        case 3:
            Temp = Segments[3];
            break;
        case 4:
            Temp = Segments[4];
            break;
        case 5:
            Temp = Segments[5];
            break;
        case 6:
            Temp = Segments[6];
            break;
        case 7:
            Temp = Segments[7];
            break;
        case 8:
            Temp = Segments[8];
            break;
        case 9:
            Temp = Segments[9];
            break;
        default:
            Temp = Segments[0];
            break;        
    }
    return Temp;
}
