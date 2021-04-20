#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
    print_str("\n\n\n\n");
    print_str("************     ************     ************     ************     ************\n");
    print_set_color(PRINT_COLOR_LIGHT_BLUE, PRINT_COLOR_BLACK);
    print_str("**               **               **               **               **          \n");
    print_set_color(PRINT_COLOR_LIGHT_CYAN, PRINT_COLOR_BLACK);
    print_str("**               **               **               **               **          \n");
    print_set_color(PRINT_COLOR_CYAN, PRINT_COLOR_BLACK);
    print_str("**               **               **               **               **          \n");
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("************     ************     ************     **               ************\n");
    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("          **     **               **               **                         **\n");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("          **     **               **               **                         **\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("          **     **               **               **                         **\n");
    print_set_color(PRINT_COLOR_DARK_GRAY, PRINT_COLOR_BLACK);
    print_str("************     ************     ************     ************     ************\n");
}