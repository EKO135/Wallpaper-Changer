#include <Windows.h>

int main()
{
    // make sure to have the picture formated as a .bmp (bitmap) for this to work
    SystemParametersInfo( SPI_SETDESKWALLPAPER, 0, (PVOID)"Path\\To\\file.bmp", SPIF_UPDATEINIFILE );
}