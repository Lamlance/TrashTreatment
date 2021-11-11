#pragma once
#ifndef TRASH_TREATMENT_H
#define TRASH_TREATMENT_H
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>

#define bio_filename "SinhHoc.csv"

using namespace std;
enum class TEN_NHUA : int
{
	PE = 1,HDPE = 2, PVC = 3, LDPE = 4, PP = 5, PS = 6, OTHER = 7
};

// is a relation + has a relation
class Trash
{
public:
	vector<vector<TrashTreatment>> treat;
	void dieuKien()
	{
	}
		;
//private:
	int weight;
	TEN_NHUA number;
};


class TrashTreatment // class Abstract ko constructor
{

public:
	virtual void TreatTrash(TEN_NHUA number) = 0;
	~TrashTreatment() {};
};



class BurialTreatment: public TrashTreatment
{
public:
	void TreatTrash(TEN_NHUA number) { cout << "Burial\n"; };
};

class ChemicalTreatment : public TrashTreatment
{
public:

	void TreatTrash(TEN_NHUA number)
	{
		cout << "Chemical\n";
		this->timChat();
	};
	void timChat() { cout << "CHAT A"; };
private:
	string method_name;
	string description;
};


class BiologicalTreatment : public TrashTreatment {
public:
	void TreatTrash(TEN_NHUA number)
	{
		cout << "Biological\n";
		this->timChat();
	};
	void timChat() { cout << "CHAT A"; };
	vector<vector<Trash>> readBiologicalTreatment();
private:
	string method_name;
	string description;
};

#endif // !TRASH_TREATMENT
