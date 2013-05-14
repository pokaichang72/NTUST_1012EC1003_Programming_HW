/* Fig. 7.24: fig07_24.c
   Card shuffling dealing program */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float shuffle( int [][ 13 ] );
void deal( const int [][ 13 ], const char *[], const char *[] );

int main()
{
   const char *suit[ 4 ] =
      { "Hearts", "Diamonds", "Clubs", "Spades" };
   const char *face[ 13 ] =
      { "Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King" };
   int deck[ 4 ][ 13 ] = { 0 };

   srand( time( 0 ) );

   printf("Time spent during shuffle: %f ms.\n", shuffle(deck));
   deal( deck, face, suit );

   return 0;
}

float shuffle( int wDeck[][ 13 ] )
{
   /* statrt timer */
   clock_t clock_start, clock_end;
   clock_start = clock();

   int row, column, card;

   for ( card = 1; card <= 52; card++ ) {
      do {
         row = rand() % 4;
         column = rand() % 13;
      } while( wDeck[ row ][ column ] != 0 );

      wDeck[ row ][ column ] = card;
   }

   /* stop timer */
   clock_end = clock();
   return (double)(clock_end-clock_start)/CLOCKS_PER_SEC;
}

void deal( const int wDeck[][ 13 ], const char *wFace[],
           const char *wSuit[] )
{
   int card, row, column;

   for ( card = 1; card <= 52; card++ )

      for ( row = 0; row <= 3; row++ )

         for ( column = 0; column <= 12; column++ )

            if ( wDeck[ row ][ column ] == card )
               printf( "%5s of %-8s%c",
                  wFace[ column ], wSuit[ row ],
            card % 2 == 0 ? '\n' : '\t' );
}



/**************************************************************************
 * (C) Copyright 2000 by Deitel & Associates, Inc. and Prentice Hall.     *
 * All Rights Reserved.                                                   *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
