#include "GUI.h"
void print_tittle(HANDLE h) {
    SetConsoleTextAttribute(h, 10);
    std::cout << "                            ________                               _____  \n";
    std::cout << "                           /  _____/______  ____  __ ________     /  |  | \n";
    std::cout << "                          /   \\  __\\_  __ \\/  _ \\|  |  \\____ \\   /   |  |_ \n";
    std::cout << "                          \\    \\_\\  \\  | \\(  <_> )  |  /  |_> > /    ^   /\n";
    std::cout << "                           \\______  /__|   \\____/|____/|   __/  \\____   | \n";
    std::cout << "                                  \\/                   |__|          |__| \n\n";
    std::cout << "              ___________                    .__      ___________                      __                         __    \n";
    std::cout << "              \\__    ___/___________    _____|  |__   \\__    ___/______   ____ _____ _/  |_  _____   ____   _____/  |_\n";
    std::cout << "                |    |  \\_  __ \\__  \\  /  ___/  |  \\    |    |  \\_  __ \\_/ __ \\\\__  \\\\   __\\/     \\_/ __ \\ /    \\   __\\ \n";
    std::cout << "                |    |   |  | \\// __ \\_\\___ \\|   Y  \\   |    |   |  | \\/\\  ___/ / __ \\|  | |  Y Y  \\  ___/|   |  \\  | \n";
    std::cout << "                |____|   |__|  (____  /____  >___|  /   |____|   |__|    \\___  >____  /__| |__|_|  /\\___  >___|  /__|   \n";
    std::cout << "                \\/     \\/     \\/                         \\/     \\/           \\/     \\/     \\/  \n";
    std::cout << "                         __________                   __               __                                     \n";
    std::cout << "                         \\______   \\_______  ____    |__| ____   _____/  |_                   \n";
    std::cout << "                           |     ___/\\_  __ \\/  _ \\   |  |/ __ \\_/ ___\\   __\\   \n";
    std::cout << "                           |    |     |  | \\(  <_> )  |  \\  ___/\\  \\___|  |    \n";
    std::cout << "                           |____|     |__|   \\____/\\__|  |\\___  >\\___  >__|      \n";
    std::cout << "                                                  \\______|    \\/     \\/  \n\n";
    std::cout << std::setfill('_') << std::setw(120) << "_" << std::endl;
    std::cout << std::setfill(' ') << std::setw(89) << std::right << "All things need to be treated the right way - so do trashes";
    Sleep(4000);
}

void introduce_group(HANDLE h) {
    std::cout << "                      _____ _           _          ___                            _ _       \n";
    std::cout << "                     |_   _| |_ ___ ___| |_ ___   |  _|___ ___    ___ ___ ___ _ _| |_|___ ___  \n";
    std::cout << "                       | | |   | .'|   | '_|_ -|  |  _| . |  _|  |  _| -_|  _| | | | |   | . | \n";
    std::cout << "                       |_| |_|_|__,|_|_|_,_|___|  |_| |___|_|    |_| |___|___|_  |_|_|_|_|_  |   \n";
    std::cout << "                                                                             |___|       |___|   \n";
    std::cout << "               _____                                            _         _      _                    ___     _    \n";
    std::cout << "              |  |  |___ ___ ___    ___ _ _ ___    ___ ___ ___ |_|___ ___| |_   |_|___    _ _ ___ ___|  _|_ _| | \n";
    std::cout << "              |     | . | . | -_|  | . | | |  _|  | . |  _| . || | -_|  _|  _|  | |_ -|  | | |_ -| -_|  _| | | | \n";
    std::cout << "              |__|__|___|  _|___|  |___|___|_|    |  _|_| |____| |___|___|_|    |_|___|  |___|___|___|_| |___|_|\n";
    std::cout << "                        |_|                       |_|        |___|                      \n";
    Sleep(1500);
    cls(h);
    std::cout << "                                        _____ _____ _____ _____ _____    ___ \n";
    std::cout << "                                       |   __| __  |     |  |  |  _  |  | . |\n";
    std::cout << "                                       |  |  |    -|  |  |  |  |   __|  |_  |\n";
    std::cout << "                                       |_____|__|__|_____|_____|__|     |___|\n";
    std::cout << "                                                           _      \n";
    std::cout << "                                           _____ ___ _____| |_ ___ ___ __\n";
    std::cout << "                                          |     | -_|     | . | -_|  _|_ -|\n";
    std::cout << "                                          |_|_|_|___|_|_|_|___|___|_| |___|\n\n";

    std::cout << std::setfill(' ') << std::setw(82) << std::right << u8"20127047 - Nguyễn Xuân Hoàng Lâm\n";
    std::cout << std::setfill(' ') << std::setw(80) << std::right << u8"20127591 - Hàn Thọ Nhật Phú\n";
    std::cout << std::setfill(' ') << std::setw(81) << std::right << u8"20127653 - Trần Nguyễn Lan Trinh\n";
    std::cout << std::setfill(' ') << std::setw(78) << std::right << u8"20127338 - Trương Gia Thịnh\n";
    std::cout << "                                                                        __ \n";
    std::cout << "                                                          _ _          |  |\n";
    std::cout << "                                            ___ ___ ___ _| | |_ _ _ ___|  |\n";
    std::cout << "                                           | . | . | . | . | . | | | -_|__|\n";
    std::cout << "                                           |_  |___|___|___|___|_  |___|__|\n";
    std::cout << "                                           |___|               |___|       \n";
    Sleep(2500);
    cls(h);
}


void cls(HANDLE hConsole)
{
    COORD coordScreen = { 0, 0 };    // home for the cursor
    DWORD cCharsWritten;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD dwConSize;

    // Get the number of character cells in the current buffer.
    if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
    {
        return;
    }

    dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

    // Fill the entire screen with blanks.
    if (!FillConsoleOutputCharacter(hConsole,        // Handle to console screen buffer
        (TCHAR)' ',      // Character to write to the buffer
        dwConSize,       // Number of cells to write
        coordScreen,     // Coordinates of first cell
        &cCharsWritten)) // Receive number of characters written
    {
        return;
    }

    // Get the current text attribute.
    if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
    {
        return;
    }

    // Set the buffer's attributes accordingly.
    if (!FillConsoleOutputAttribute(hConsole,         // Handle to console screen buffer
        csbi.wAttributes, // Character attributes to use
        dwConSize,        // Number of cells to set attribute
        coordScreen,      // Coordinates of first cell
        &cCharsWritten))  // Receive number of characters written
    {
        return;
    }

    // Put the cursor at its home coordinates.
    SetConsoleCursorPosition(hConsole, coordScreen);
}

void option() {
    std::cout << "It's time to clean up your bin and have environmental protection measures in the process of waste treatment\n";
    std::cout << "Every plastic product has a number of type plastic: \n[1]: PET/PETE\n[2]: HDPE\n[3]: PVC\n[4]: LDPE\n[5]: PP\n[6]: PS\n[7]: Other\n";
    std::cout << "Put the number of plastic here, we will show you the way it should be treated ([0] to stop): ";
    int option = 0;
    PlasticTrash* trash;
    do {
        std::cin >> option;
        if (option == 0) break;
        while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6 && option != 7) {
            std::cout << "Wrong input (from 1->7 only)\n";
            std::cin >> option;
        }
        trash = new PlasticTrash(option, 0);
        trash->treatTrash();
        std::cout << "Any other plastic type: ";
        delete trash;
    } while (true);
}