#include <stdio.h>

int *GetSet( int *num ) ;
int main() {
    int *data, num ;
    data = GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet( int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    printf( "Enter the elements: " ) ;
    scanf( "%d", *(num) ) ;
    return GetSet( int *num ) ;
}//end function
