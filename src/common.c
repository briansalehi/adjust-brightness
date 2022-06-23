#include "common.h"

void get_help(FILE *stream, char const *program_name)
{
    static char const *help_string = "\
        usage: %s [options]\n\
        options\
          -h, --help                  show this help message\
          -v, --version               current version of this program\
          -b, --brightness            current brightness\
          -a, --adjust <brightness>   adjust brightness\
        ";
    fprintf(stream, help_string, program_name);
}

void get_version(void)
{
    fprintf(stdout, "v0.1.0\n");
}
