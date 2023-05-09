#include <string>

#ifdef _WIN32
#define FOO_EXPORT __declspec(dllexport)
#else
#define FOO_EXPORT __attribute__((visibility("default")))
#endif

FOO_EXPORT int myfoo();
FOO_EXPORT std::string myfoo2();
