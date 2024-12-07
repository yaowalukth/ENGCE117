#include <stdio.h>

int *GetSet( int *num , int set[] ) ;

int *GetSet( int *num , int set[] ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    for( int i = 0 ; i < *num ; i ++ ) {
        printf( "Enter the elements: " ) ;
        scanf( "%d", &set[i] ) ;
    }//end for loop
    return set ;
}//end function

int main() {
    int *data , num , set[100] ;
    data = GetSet( &num , set ) ;
    printf( "\n" ) ;
    printf( "Number of elements: %d \n", num ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "%d ", data[i] ) ;
    }//end for loop
    delete [] data ;
    return 0 ;
}//end function
