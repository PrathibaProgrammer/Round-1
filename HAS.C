#include <stdio.h>
#include <stdlib.h>

void program(char *s, int k) {
int i;
char temp[100];
    int n = 0;
    while (s[n] != '\0') {
	n++;
    }
    k = k % n;
      for (i = 0; i < n - k; i++) {
	temp[i] = s[i + k];
    }
    for (i = 0; i < k; i++) {
	temp[n - k + i] = s[i];
    }
    temp[n] = '\0';

    for (i = 0; i <= n; i++) {
	s[i] = temp[i];
    }
}

int main() {
    char s[100];
    int k;
    int value=0;
    printf("\n input:");
    fgets(s, sizeof(s), stdin);

    while (s[value] != '\0') {
	if (s[value] == '\n') {
	    s[value] = '\0';
	    break;
	}
	value++;
    }

    printf("value : ");
    scanf("%d", &k);
    program(s, k);
    printf("output %s", s);

    return 0;
}