# conio-for-mac

💜 `myconio_mac.cpp` 頭文件

## Introduction 基本情況

由於 macOS/Linux 無法使用 `conio.h` 頭文件，本人根據初始版本嘅頭文件同埋網路上嘅 `conio_mac.h` 頭文件稍稍做咗一啲修改同整理。

## Functions 包涵嘅函式

| Functions 函式 | Explainations 解釋 |
| --- | --- |
| `void mode_raw(int)` |  |
| `void _fflush()` |  |
| `void underline(int)` | Underline the following output contents if the param is 1; if it is 0 then cancel the underline operation. 如果參數為 1 嘅話，從本條語句開始畀後面嘅輸出內容加上下劃線；如果為 0 嘅話就取消下劃線操作。 |
| `char read_key()` |  |
| `int key_pressed()` |  |
| `void get_pass(char *, char *)` |  |
| `int getche()` |  |
| `int getch()` |  |
| `int where_x()` | Show the x position of the current cursor. 顯示當前光標嘅 x 位置。 |
| `int where_y()` | Show the y position of the current cursor. 顯示當前光標嘅 y 位置。 |
| `int keyboard_hit()` |  |
| `void line(int, char, char)` | Draw a line, set length, the first and last character and the filluped character. 畫線，設定長度，兩端嘅字符同埋中間填充嘅字符。 |
| `void goto_xy(int, int)` | Move the cursor to (x, y). 移動光標到 (x, y) 嘅位置。 |
| `void sleep_for(int)` | Sleep for some time. 暫停一段時間。 |
| `void bold(int)` |  Bold the following output contents if the param is 1; if it is 0 then cancel the bold operation. 如果參數為 1 嘅話，從本條語句開始畀後面嘅輸出內容加粗體；如果為 0 嘅話就取消加粗操作。  |
| `void text_color(int)` | Set text color. 設定文字顏色。 |
| `void test_background(int)` | Set text background color. 設定文字背景顏色。 |
| `void clear_eol()` | Clear the entire line. 清除整一行嘅內容。 |
| `void clear_screen()` | Clear the entire screen. 清除整個屏幕嘅內容。 |
| `void clear_win(int, int, int, int)` |  |

## Usages 使用方法

將 `myconio_mac.cpp` 添加至專案（項目）嘅 `src` 目錄或者文件夾中。

係 C++ 中咁寫：

```c++
#include "myconio_mac.cpp"
```

或者， 係 Objective-C++ 中咁寫：

```objective-c
#import "myconio_mac.cpp"
```

## Support 支持一下

<a href="https://www.buymeacoffee.com/rainchen" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" alt="Buy Me A Coffee" style="height: 60px !important;width: 217px !important;" ></a>
