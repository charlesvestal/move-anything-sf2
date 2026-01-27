/* fluid_config.h - generated for Move Anything SF2 plugin */

/* Activate debugging message */
#define DEBUG 0

/* Version number of the package */
#define VERSION "1.2.1"

/* Big endian check - ARM is little endian */
/* #undef WORDS_BIGENDIAN */

/* SF3 files support, using OGG/Vorbis */
#define SF3_DISABLED 0
#define SF3_XIPH_VORBIS 1
#define SF3_STB_VORBIS 2
#define SF3_SUPPORT SF3_DISABLED

/* Use double samples for pitch accuracy with non-standard sample rates */
/* #define WITH_FLOAT 1 */

/* Standard C99 headers detection */
#define HAVE_STRING_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDARG_H 1
#define HAVE_MATH_H 1
#define HAVE_LIMITS_H 1
#define HAVE_FCNTL_H 1
