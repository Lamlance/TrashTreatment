#pragma once
#ifndef TRASH_H
#define TRASH_H

#include "TrashTreatment.h"
class Trash
{
public:
	Trash(int recycleNumber = 7, int weightVal = 0);
	virtual std::string getPlastic_name() { return "YOU:))"; };
	TrashTreatment* treatment;
private:
	int weight;
	Recycle_Number number;
};

#endif // !TRASH_H

