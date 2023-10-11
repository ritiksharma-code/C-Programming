#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int alice[3], bob[3];

        for (int i = 0; i < 3; i++) {
            scanf("%d", &alice[i]);
        }

        for (int i = 0; i < 3; i++) {
            scanf("%d", &bob[i]);
        }

        int alice_max = 0, bob_max = 0;

        for (int i = 0; i < 3; i++) {
            if (alice[i] > alice_max) {
                alice_max = alice[i];
            }
            if (bob[i] > bob_max) {
                bob_max = bob[i];
            }
        }

        if (alice_max > bob_max) {
            printf("Alice\n");
        } else if (alice_max < bob_max) {
            printf("Bob\n");
        } else {
            printf("Tie\n");
        }
    }

    return 0;
}
