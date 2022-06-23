#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <string.h>

#include "options.h"
#include "monitors.h"
#include "brightness.h"

int main(int argc, char **argv)
{
    if (!parse_args(argc, argv))
        return EXIT_FAILURE;

}
