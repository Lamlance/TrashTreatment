#include "TrashTreatment.h"

vector<vector<Trash>> BiologicalTreatment::readBiologicalTreatment() {
	fstream fin;
	fin.open(bio_filename, fstream::in);
	if (!fin.is_open()) cout << "Can not open file " << endl;
	else {
		string s;
		vector <Trash*> t;
		for (int i = 0; i < 7; i++) {
			t[i]->number = (TEN_NHUA)(i + 1);
		}

		getline(fin, s, '\n');
		while (!fin.eof()) {
			int num;
			char com;
			fin >> num;
			fin >> com;
			getline(fin,method_name,',');
			getline(fin, description, '\n');
			if (description[0] == '"') {
				int n = description.length();
				vector <char> des;
				for (int i = 1; i < n - 1; i++) {
					des[i - 1] = description[i];
				}
				string s;
				for (int i = 0; i < n - 2; i++) {
					s[i] = des[i];
				}
				description = s;
			}
			t[num - 1]->treat[0].push_back(*this);
		}
		fin.close();
	}
}
