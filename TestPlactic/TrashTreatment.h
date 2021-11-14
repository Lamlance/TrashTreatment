#pragma once
#ifndef TRASH_TREATMENT_H
#define TRASH_TREATMENT_H
#include <iostream>
#include <vector>

enum class Recycle_Number : int
{
	PET = 1, HDPE, PVC, LDPE, PP, PS, Other
};

class TrashTreatment // Class Abstract ko constructor
{
public:
	virtual void TreatTrash(Recycle_Number number) = 0;
	~TrashTreatment() {};
};

#endif // !TRASH_TREATMENT
