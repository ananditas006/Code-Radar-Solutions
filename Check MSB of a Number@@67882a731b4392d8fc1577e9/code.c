#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  


    if (a == 0) {
        printf("Not Set");
        return 0;
    }

    
    int msbPosition = 31;  
    if (a < 0) {
     
    } else {
        if (a & 0x80000000) { msbPosition = 31; }
        else if (a & 0x40000000) { msbPosition = 30; }
        else if (a & 0x20000000) { msbPosition = 29; }
        else if (a & 0x10000000) { msbPosition = 28; }
        else if (a & 0x08000000) { msbPosition = 27; }
        else if (a & 0x04000000) { msbPosition = 26; }
        else if (a & 0x02000000) { msbPosition = 25; }
        else if (a & 0x01000000) { msbPosition = 24; }
        else if (a & 0x00800000) { msbPosition = 23; }
        else if (a & 0x00400000) { msbPosition = 22; }
        else if (a & 0x00200000) { msbPosition = 21; }
        else if (a & 0x00100000) { msbPosition = 20; }
        else if (a & 0x00080000) { msbPosition = 19; }
        else if (a & 0x00040000) { msbPosition = 18; }
        else if (a & 0x00020000) { msbPosition = 17; }
        else if (a & 0x00010000) { msbPosition = 16; }
        else if (a & 0x00008000) { msbPosition = 15; }
        else if (a & 0x00004000) { msbPosition = 14; }
        else if (a & 0x00002000) { msbPosition = 13; }
        else if (a & 0x00001000) { msbPosition = 12; }
        else if (a & 0x00000800) { msbPosition = 11; }
        else if (a & 0x00000400) { msbPosition = 10; }
        else if (a & 0x00000200) { msbPosition = 9; }
        else if (a & 0x00000100) { msbPosition = 8; }
        else if (a & 0x00000080) { msbPosition = 7; }
        else if (a & 0x00000040) { msbPosition = 6; }
        else if (a & 0x00000020) { msbPosition = 5; }
        else if (a & 0x00000010) { msbPosition = 4; }
        else if (a & 0x00000008) { msbPosition = 3; }
        else if (a & 0x00000004) { msbPosition = 2; }
        else if (a & 0x00000002) { msbPosition = 1; }
        else { msbPosition = 0; } 
        printf("Set");
    }

    return 0;
}
