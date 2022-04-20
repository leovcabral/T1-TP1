#include <cstdlib>
#include <iostream>
#include "clear.h"


void clear_screen()
{
    #ifdef WINDOWS
        std::system("cls");
    #else
        // Assume POSIX
        std::system ("clear");
    #endif
}
