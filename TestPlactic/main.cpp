#include "Trash.h"
#include "Trash_PET.h"
#include "GUI.h"
void cls(HANDLE hConsole);
void print_tittle(HANDLE h);
void introduce_group(HANDLE h);
int main()
{
	SetConsoleOutputCP(CP_UTF8);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    print_tittle(h);
    cls(h);
    option();
    cls(h);
    introduce_group(h);
    return 0;
}

