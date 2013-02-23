/* Minimal main program -- everything is loaded from the library */

#include "Python.h"

#if defined(MS_WINDOWS) && !defined(__MINGW32__)
int
wmain(int argc, wchar_t **argv)
{
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    return _Py_UnixMain(argc, argv);
}
#endif
