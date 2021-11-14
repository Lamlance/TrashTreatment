#include <iostream>
#include <Windows.h>
#include "Trash.h"
#include "Trash_PET.h"

int main()
{
	SetConsoleOutputCP(1258);

	Trash* PET = new Trash_PET(Trash(2, 10));
	PET->treatTrash();
}