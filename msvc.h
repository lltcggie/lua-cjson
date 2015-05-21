#ifdef _MSC_VER
#ifndef inline
#define inline __inline
#endif
#ifndef snprintf
#define snprintf _snprintf
#endif
#ifndef strncasecmp
#define strncasecmp(x,y,z) _strnicmp(x,y,z)
#endif
#endif
