#pragma once
#ifndef TRASH_TREATMENT_H
#define TRASH_TREATMENT_H
#include <iostream>
#include <vector>

enum class Recycle_Number : int
{
	PET = 1, HDPE = 2, PVC = 3, LDPE = 4, PP = 5, PS = 6, Other = 7
};

class TrashTreatment // Class Abstract ko constructor
{
public:
	virtual void TreatTrash(Recycle_Number number) = 0;
	~TrashTreatment() {};
};

#endif // !TRASH_TREATMENT
