//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    float a , b = 3 ; 
    bool _1 = 0 ;
    printf( "%d \n" , _1 ) ;
    
    int i = 0 ;
    if ( _1 != 0 ) {
        printf( "ok \n" ) ;
    } else { 
        while( i <= 5 ) { 
            printf( "not-okey-%d \n" , ++i ) ;
        }//end While loop    
        for( i = 3 ; i < 10 ; i += 1 ) {
            if( i % 2 == ( ! 1 ? 1 : 2 ) ) { 
                printf( "see see \n" ) ; 
                printf( "haha \n" ) ;
            }//endif
        }//end for loop
    }//and if-else
    return 0 ;
}//end function
