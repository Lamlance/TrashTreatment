#pragma once
#ifndef TRASH_PET_H
#define TRASH_PET_H
#include "Trash.h"

class Trash_PET: public Trash
{
public:
	std::string getPlastic_name() { return "PET/PETE"; };
private:
};


#endif // !TRASH_PET_H
