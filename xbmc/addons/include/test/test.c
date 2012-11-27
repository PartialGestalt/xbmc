#include <stdio.h>

#if defined(O_TEST_ADDON)
#include "../xbmc_addon_dll.h"
#elif defined(O_TEST_SCR)
#include "../xbmc_scr_dll.h"
#elif defined(O_TEST_PVR)
#include "../xbmc_pvr_dll.h"
#elif defined(O_TEST_VIS)
#include "../xbmc_vis_dll.h"
#else
#error "Must define exactly one of -DO_TEST_ADDON, -DO_TEST_SCR, -DO_TEST_PVR, or -DO_TEST_VIS"
#endif

int main(int argc, char **argv)
{
    return 0;
}
