#include <iostream> 
using namespace std;
//sag sol func
int sag( int d ) 
 {
 if(++d>3)
 return 0;
 else
 return d;
 
}
int sol( int d ) 
 {
 if(--d<0)
 return 3;
 else
 return d;
}
 
 int main()
 { 
 
 int floor[20][20] = { 0 }, command, direction = 0,
 Array[200][ 2 ] = { 0 }, turtle, count = 0;
 bool down = false;

 
 int temp;
 int i=0;
 int kac=0;


 cin >> temp;
 
 for ( i = 0; temp != 9 && i <200; ++i ) {
 Array[ i ][ 0 ] = temp;

 if ( temp== 5 ) {
 cin.ignore(); // skip comma
 cin >> Array[ i ][ 1 ];
 }


 cin >> temp;
 
 }
kac=i;
 Array[ kac ][ 0 ] = 9; // son eleman 9dur.bu iki yazmayı engeller
 
 
 command = Array[ count ][ 0 ];
 
while ( command != 9 ) {
 switch ( command ) {
 case 1:
 down = false;
 break;
 case 2:
 down = true;
 break;
 case 3:
 direction = sag( direction );
 break;
 case 4:
 direction = sol( direction );
 break;
 case 5:
turtle= Array[ count ][ 1 ];
 //movePen( penDown, floor, direction, distance );
 
 static int xPos = 0, yPos = 0;
 int j; // 

 switch ( direction ) {
 case 0: //  right
 for ( j = 0; j <turtle && yPos + j <20; ++j ) 
 if ( down )
 floor[ xPos ][ yPos + j ] = 1;

 yPos += j - 1;
 
 break;
 case 1: //down
 for ( j = 0; j <turtle && xPos + j <20; ++j )
 if ( down )
 floor[ xPos + j ][ yPos ] = 1;
 
 xPos += j - 1;
 break;
 case 2: //  left
 for ( j = 0; j <turtle && yPos - j >= 0; ++j )
 if ( down )
 floor[ xPos ][ yPos - j ] = 1;
yPos -= j - 1;
 break;
 case 3: //up
 for ( j = 0; j <turtle && xPos - j >= 0; ++j )
 if ( down )
 floor[ xPos - j ][ yPos ] = 1;
 
 xPos -= j - 1;
 break;
 }
 
 break;
 case 6:

  for ( int i = 0; i < 20; ++i ) {
 for ( int j = 0; j < 20; ++j )
 cout << ( floor[ i ][ j ] ? '*' : ' ' );
 
 cout << endl;
 }
 break;
 }
 
 command = Array[ ++count ][ 0 ]; }

 return 0;
 }


