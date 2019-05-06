#include <iostream>
#include <cstdio>

int main(void) {
    int numOfAgents, num1, num2; char c[20];
    scanf("%d", &numOfAgents);
    for(int i=1; i<numOfAgents+1; i++) {
        scanf("%d %d", &num1, &num2);
		fgets(c, 20, stdin);
        printf("Agent# %d is at (%d, %d)\nSays: %s\n", i, num1, num2, c);
    }
    return 0;
}
