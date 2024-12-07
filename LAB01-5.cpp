#include <stdio.h>

void GetMatrix( int value[] , int *row , int *col ) {
    int result = (*row) * (*col) ;
    for( int i = 0 ; i < result ; i ++ ) {
        printf( "Enter the matrix elements: " ) ;
        scanf( "%d", &value[ i ] ) ;
    }//end for loop
}//end function

int main() {
    int *data , m , n ;

    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &m ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", &n ) ;

    data = new int [m * n] ;
    GetMatrix( data , &m , &n ) ;

    printf( "\n" ) ;
    printf( "Matrix ( %d x %d ) : \n", m , n ) ;
    for( int i = 0 ; i < m ; i ++ ) {
        for( int j = 0 ; j < n ; j ++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for loop
        printf( "\n" ) ;
    }//end for loop
    delete [] data ;
    return 0 ;
}//end functionv
