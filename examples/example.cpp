#include <iostream>
#include "include/srungoat.h"
#include <cstdlib>

int main() {

    ADD_FAKE_AUTH_STRINGS;
    ANTI_DUMP_PE;

    START_INTEGRITY_CHECK;
    START_ANTI_DEBUG;
    START_ANTI_ATTACH;
    START_ANTI_DUMP_AND_SEH;
    START_ANTI_DLL_INJECTION;
    START_ANTI_CODE_PATCH;
    START_ANTI_API_HOOK;
    START_ANTI_IAT_HOOK;
    START_ANTI_PAUSE_THREAD;
    START_ANTI_TERMINATE_THREAD;
    START_ANTI_WINDOW_TITLE;
    START_ANTI_VM;
    START_ANTI_REVERSE_FILES;

    JUNK_SHIP_SPACIAL;
    JUNK_FUCK_IDA;
    BUG_IDA;

    std::cout << OBF("hi mr sirs") << std::endl;

    ULTRA_MEGA_JUNK(0);

    system("pause");

    return 0;

}
