#include "Trash.h"
Trash::Trash(int recycleNumber, int weightVal) :
	number(static_cast<Recycle_Number>(recycleNumber)), weight(weightVal), treatment(nullptr) {};
