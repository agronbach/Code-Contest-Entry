/*****************************************************************************/
/* Purpose: Generate Fall 2011 Code Contest Solution                         */
/* Author: Alex Gronbach                                                     */
/* For: Shopatron Contest                                                    */
/* Date: Sep 30, 2011                                                        */
/*****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*****************************************************************************/
/* main: computes                                                            */
/* Input: number: user-input to the puzzle, should only be an integer 1-99   */
/* Outputs: print out of path taken to reduce user-inputted number to 4      */
/* Design:                                                                   */
/*    1. Check that argc is 2, meaning that the user inputted only one thing */
/*       1. If user input anything other than one number, throw usage error  */
/*    2. Check that the user input is a number using atoi to convert to int  */
/*    3. Attempt to find the user-input in one of the switch cases, only 1-99*/
/*       1. If input is not 1-99, use default case of switch and throw error */
/*       2. Otherwise, change number based on case, and continue looping     */
/*       3. When the case of 4 is reached, finish print statement and exit   */
/*****************************************************************************/


int main(int argc, char *argv[])
{
   /* Where user input is stored*/
   int number = 0;

   /* Only enter if user entered one number and one number only*/
   if (argc == 2)
   {
      /***********************************************************************/
      /* Convert user input to int and store in number.  If the input is not */
      /* an integer, atoi will not throw an error, however the switch will   */
      /* catch this using its default case, and a usage error will be thrown */
      /***********************************************************************/
      number = atoi(argv[1]);

      /* Loop will be broken once 4 is reached */
      while (1)
      {
         /* Continually go through switch until case 4 is reached */
         switch (number)
         {
         case 1:
            {
               printf("1 --> ");
               number = 3;
               break;
            }
         case 2:
            {
               printf("2 --> ");
               number = 3;
               break;
            }
         case 3:
            {
               printf("3 --> ");
               number = 5;
               break;
            }
         case 4:
            {
               /**************************************************************/
               /* Base case for infinite loop; once reached finish printing  */
               /* and exit the loop with a return status of zero, indicating */
               /* that this run was a success.  This case should ALWAYS occur*/
               /**************************************************************/
               printf("4 --> 4\n");
               number = 4;
               return 0;
            }
         case 5:
            {
               printf("5 --> ");
               number = 4;
               break;
            }
         case 6:
            {
               printf("6 --> ");
               number = 3;
               break;
            }
         case 7:
            {
               printf("7 --> ");
               number = 5;
               break;
            }
         case 8:
            {
               printf("8 --> ");
               number = 5;
               break;
            }
         case 9:
            {
               printf("9 --> ");
               number = 4;
               break;
            }
         case 10:
            {
               printf("10 --> ");
               number = 3;
               break;
            }
         case 11:
            {
               printf("11 --> ");
               number = 6;
               break;
            }
         case 12:
            {
               printf("12 --> ");
               number = 6;
               break;
            }
         case 13:
            {
               printf("13 --> ");
               number = 8;
               break;
            }
         case 14:
            {
               printf("14 --> ");
               number = 8;
               break;
            }
         case 15:
            {
               printf("15 --> ");
               number = 7;
               break;
            }
         case 16:
            {
               printf("16 --> ");
               number = 7;
               break;
            }
         case 17:
            {
               printf("17 --> ");
               number = 9;
               break;
            }
         case 18:
            {
               printf("18 --> ");
               number = 9;
               break;
            }
         case 19:
            {
               printf("19 --> ");
               number = 8;
               break;
            }
         case 20:
            {
               printf("20 --> ");
               number = 6;
               break;
            }
         case 21:
            {
               printf("21 --> ");
               number = 9;
               break;
            }
         case 22:
            {
               printf("22 --> ");
               number = 9;
               break;
            }
         case 23:
            {
               printf("23 --> ");
               number = 11;
               break;
            }
         case 24:
            {
               printf("24 --> ");
               number = 10;
               break;
            }
         case 25:
            {
               printf("25 --> ");
               number = 10;
               break;
            }
         case 26:
            {
               printf("26 --> ");
               number = 9;
               break;
            }
         case 27:
            {
               printf("27 --> ");
               number = 11;
               break;
            }
         case 28:
            {
               printf("28 --> ");
               number = 11;
               break;
            }
         case 29:
            {
               printf("29 --> ");
               number = 10;
               break;
            }
         case 30:
            {
               printf("30 --> ");
               number = 6;
               break;
            }
         case 31:
            {
               printf("31 --> ");
               number = 9;
               break;
            }
         case 32:
            {
               printf("32 --> ");
               number = 9;
               break;
            }
         case 33:
            {
               printf("33 --> ");
               number = 11;
               break;
            }
         case 34:
            {
               printf("34 --> ");
               number = 10;
               break;
            }
         case 35:
            {
               printf("35 --> ");
               number = 10;
               break;
            }
         case 36:
            {
               printf("36 --> ");
               number = 9;
               break;
            }
         case 37:
            {
               printf("37 --> ");
               number = 11;
               break;
            }
         case 38:
            {
               printf("38 --> ");
               number = 11;
               break;
            }
         case 39:
            {
               printf("39 --> ");
               number = 10;
               break;
            }
         case 40:
            {
               printf("40 --> ");
               number = 5;
               break;
            }
         case 41:
            {
               printf("41 --> ");
               number = 8;
               break;
            }
         case 42:
            {
               printf("42 --> ");
               number = 8;
               break;
            }
         case 43:
            {
               printf("43 --> ");
               number = 10;
               break;
            }
         case 44:
            {
               printf("44 --> ");
               number = 9;
               break;
            }
         case 45:
            {
               printf("45 --> ");
               number = 9;
               break;
            }
         case 46:
            {
               printf("46 --> ");
               number = 8;
               break;
            }
         case 47:
            {
               printf("47 --> ");
               number = 10;
               break;
            }
         case 48:
            {
               printf("48 --> ");
               number = 10;
               break;
            }
         case 49:
            {
               printf("49 --> ");
               number = 9;
               break;
            }
         case 50:
            {
               printf("50 --> ");
               number = 5;
               break;
            }
         case 51:
            {
               printf("51 --> ");
               number = 8;
               break;
            }
         case 52:
            {
               printf("52 --> ");
               number = 8;
               break;
            }
         case 53:
            {
               printf("53 --> ");
               number = 10;
               break;
            }
         case 54:
            {
               printf("54 --> ");
               number = 9;
               break;
            }
         case 55:
            {
               printf("55 --> ");
               number = 9;
               break;
            }
         case 56:
            {
               printf("56 --> ");
               number = 8;
               break;
            }
         case 57:
            {
               printf("57 --> ");
               number = 10;
               break;
            }
         case 58:
            {
               printf("58 --> ");
               number = 10;
               break;
            }
         case 59:
            {
               printf("59 --> ");
               number = 9;
               break;
            }
         case 60:
            {
               printf("60 --> ");
               number = 5;
               break;
            }
         case 61:
            {
               printf("61 --> ");
               number = 8;
               break;
            }
         case 62:
            {
               printf("62 --> ");
               number = 8;
               break;
            }
         case 63:
            {
               printf("63 --> ");
               number = 10;
               break;
            }
         case 64:
            {
               printf("64 --> ");
               number = 9;
               break;
            }
         case 65:
            {
               printf("65 --> ");
               number = 9;
               break;
            }
         case 66:
            {
               printf("66 --> ");
               number = 8;
               break;
            }
         case 67:
            {
               printf("67 --> ");
               number = 10;
               break;
            }
         case 68:
            {
               printf("68 --> ");
               number = 10;
               break;
            }
         case 69:
            {
               printf("69 --> ");
               number = 9;
               break;
            }
         case 70:
            {
               printf("70 --> ");
               number = 7;
               break;
            }
         case 71:
            {
               printf("71 --> ");
               number = 10;
               break;
            }
         case 72:
            {
               printf("72 --> ");
               number = 10;
               break;
            }
         case 73:
            {
               printf("73 --> ");
               number = 12;
               break;
            }
         case 74:
            {
               printf("74 --> ");
               number = 11;
               break;
            }
         case 75:
            {
               printf("75 --> ");
               number = 11;
               break;
            }
         case 76:
            {
               printf("76 --> ");
               number = 10;
               break;
            }
         case 77:
            {
               printf("77 --> ");
               number = 12;
               break;
            }
         case 78:
            {
               printf("78 --> ");
               number = 12;
               break;
            }
         case 79:
            {
               printf("79 --> ");
               number = 11;
               break;
            }
         case 80:
            {
               printf("80 --> ");
               number = 6;
               break;
            }
         case 81:
            {
               printf("81 --> ");
               number = 9;
               break;
            }
         case 82:
            {
               printf("82 --> ");
               number = 9;
               break;
            }
         case 83:
            {
               printf("83 --> ");
               number = 11;
               break;
            }
         case 84:
            {
               printf("84 --> ");
               number = 10;
               break;
            }
         case 85:
            {
               printf("85 --> ");
               number = 10;
               break;
            }
         case 86:
            {
               printf("86 --> ");
               number = 9;
               break;
            }
         case 87:
            {
               printf("87 --> ");
               number = 11;
               break;
            }
         case 88:
            {
               printf("88 --> ");
               number = 11;
               break;
            }
         case 89:
            {
               printf("89 --> ");
               number = 10;
               break;
            }
         case 90:
            {
               printf("90 --> ");
               number = 6;
               break;
            }
         case 91:
            {
               printf("91 --> ");
               number = 9;
               break;
            }
         case 92:
            {
               printf("92 --> ");
               number = 9;
               break;
            }
         case 93:
            {
               printf("93 --> ");
               number = 11;
               break;
            }
         case 94:
            {
               printf("94 --> ");
               number = 10;
               break;
            }
         case 95:
            {
               printf("95 --> ");
               number = 10;
               break;
            }
         case 96:
            {
               printf("96 --> ");
               number = 9;
               break;
            }
         case 97:
            {
               printf("97 --> ");
               number = 11;
               break;
            }
         case 98:
            {
               printf("98 --> ");
               number = 11;
               break;
            }
         case 99:
            {
               printf("99 --> ");
               number = 10;
               break;
            }
         default: 
            {
               /**************************************************************/
               /* Default case to catch inputs that are outside 1-99.  Will  */
               /* trigger when user inputs only one input, only when invalid */
               /**************************************************************/
               printf("Please provide one number from 1-99\n");
               return -1;
            }
         }
      }
   }
   else
   {
      /* If the user enters more than one input, this will trigger usage msg */
      printf("Please provide one number from 1-99\n");
      return -1;
   }
}
