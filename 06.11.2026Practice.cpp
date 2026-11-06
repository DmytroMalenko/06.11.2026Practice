#include <iostream>

using namespace std;


int main()
{
	/* Task 1 

	FILE* one = nullptr;
	FILE* two = nullptr;

	fopen_s(&one, "one.txt", "r");
	fopen_s(&two, "two.txt", "w");

	char word[100];

    while (fscanf_s(one, "%s", word, 100) == 1) {
		fprintf_s(two, "%s ", word);
    }

    fclose(one);
    fclose(two);

	*/

	/* Task 2 

	FILE* old = nullptr;
	FILE* newf = nullptr;

	char line[256];

	fopen_s(&old, "old.txt", "r");
	fopen_s(&newf, "newf.txt", "w");

	if (old == nullptr) {
		cout << "old.txt not found!\n";
		return 0;
	}



	while (fgets(line, 256, old) != nullptr) {
		fputs(line, newf);
	}

	fclose(old);
	fclose(newf);
	*/

	/* Task 3 

	FILE* in = nullptr;
	FILE* out = nullptr;

	fopen_s(&in, "in.txt", "r");
	fopen_s(&out, "out.txt", "w");

	char lines[100][256];
	int count = 0;

	while (count < 100 && fscanf_s(in, "%[^\n]\n", lines[count], 256) == 1) {
		count++;
	}

	for (int i = count - 1; i >= 0; i--) {
		fprintf_s(out, "%s\n", lines[i]);
	}

	fclose(in);
	fclose(out);

	*/

	/* Task 4 */

	FILE* task4 = nullptr;
	FILE* outtask4 = nullptr;

	fopen_s(&task4, "task4.txt", "r");
	if (task4 == nullptr) {
		cout << "outtask4.txt not found!\n";
		return 0;
	}
	fopen_s(&outtask4, "task4_out.txt", "w");

	char lines4[100][256];
	int count4 = 0;


	while (count4 < 100 && fscanf_s(task4, "%[^\n]\n", lines4[count4], 256) == 1) {
		count4++;
	}

	int last = -1;
	for (int i = 0; i < count4; i++) {
		bool hasSpace = false;
		for (int j = 0; lines4[i][j] != '\0'; j++) {
			if (lines4[i][j] == ' ') {
				hasSpace = true;
			}
		}
		if (!hasSpace) {
			last = i;       
		}
	}

	for (int i = 0; i < count4; i++) {
		fprintf_s(outtask4, "%s\n", lines4[i]);
		if (i == last) {
			fprintf_s(outtask4, "------------\n");  
		}
	}

	if (last == -1) {
		fprintf_s(outtask4, "------------\n");      
	}

	fclose(task4);
	fclose(outtask4);






}
