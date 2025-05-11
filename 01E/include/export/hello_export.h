#ifdef HELLOLIBRARY_EXPORTS
#define HELLOAPI __declspec(dllexport)
#else
#define HELLOAPI __declspec(dllimport)
#endif