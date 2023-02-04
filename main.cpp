// conio for macOS
// test

#include <iostream>
#include <ostream>
#include "myconio_mac.cpp"

int main() {
    clear_screen();
    line(10, '|', '-');
    text_color(1);
    printf("The function CLEAR_SCREEN clears all characters from the\r\n");
    text_color(2);
    bold(1);
    printf("cursor position to the end of the line within the\r\n");
    text_color(3);
    underline(1);
    printf("current text window, without moving the cursor.\r\n");
    text_color(4);
    bold(0);
    underline(0);
    printf("Press any key to continue . . .");
    goto_xy(14, 4);
    getch();
    clear_eol();
    getch();
    return 0;
}
