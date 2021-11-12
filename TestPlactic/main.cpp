#include <iostream>
#include <Windows.h>
#include "ChemicalTreatment.h"

int main()
{
	SetConsoleOutputCP(1258);
	TrashTreatment* ptr = new ChemicalTreatment();
	ptr->TreatTrash(Recycle_Number::HDPE);
}