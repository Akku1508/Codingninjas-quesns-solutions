#include <cstring>

bool isPermutation(char input1[], char input2[]) {
    int freqarr[256] = {0}, temp[256] = {0};

    int len1 = strlen(input1);
    int len2 = strlen(input2);

    if (len1 != len2) {
        return false;
    } else {
        for (int i = 0; i < len1; i++) {
            int k = input1[i];
            freqarr[k]++;
        }
        for (int j = 0; j < len2; j++) {
            int l = input2[j];
            temp[l]++;
        }

        for (int i = 0; i < 256; i++) {
            if (freqarr[i] != temp[i]) {
                return false;
            }
        }
    }
    return true;
}
