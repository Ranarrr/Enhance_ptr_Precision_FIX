#include <Windows.h>

int CALLBACK WinMain( HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow ) {
	while( 1 ) {
		Sleep( 1500 );
		int mouseinfo[ 3 ];
		BOOL result = SystemParametersInfo( SPI_GETMOUSE, 0, &mouseinfo, 0 );
		if( result ) {
			if( mouseinfo[ 2 ] != 0 ) {
				mouseinfo[ 2 ] = 0;
				SystemParametersInfo( SPI_SETMOUSE, 0, &mouseinfo, SPIF_SENDCHANGE );
			}
		}
	}
}