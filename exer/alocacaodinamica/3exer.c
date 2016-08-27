void addCharFirstPosition(char pvetcar[], int ptammax, int pqtde, char character) {
	int i;
	if(pqtde >= ptammax) {
		printf("O vetor está cheio!\n");
		return;
	}
	else {
		for (i = 0; i < ptammax; ++i) {
			if((int)pvetcar[i] >= 31 && (int)pvetcar[i] <= 126) {
				/* nothing */
			}
			else {
				pvetcar[i] = character;
			}
		}
	}
	return;
}

void removeChar(char pvetcar[], int ptammax, int pqtde, char character) {
	int i;
	for (i = 0; i < ptammax; ++i) {
		if((int)pvetcar[i] == (int)character) {
			pvetcar[i] = '';
		}
		else {}
	}
	return;
}