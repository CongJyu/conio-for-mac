# conio-for-mac

## myconio_mac 头文件

基本概况：

- 这些头文件位于 `conio for mac` 文件夹内。
- 由于 macOS 无法使用 `conio.h` 头文件，所以有一位法国大神开发了 myconio 头文件供 macOS 用户使用。大神的相关信息包含于头文件的注释中。

使用示例：

```c++
#include <myconio_mac.h>
```

食用方法：

- 1.把 `conio-for-mac` 文仓库克隆到本地。
- 2.打开「访达」，右键「Xcode」，选择「显示包内容」。
- 3.打开 `Contents` -> `Developer` -> `Platforms` -> `Mac OSX.platform` -> `Developer` -> `SDKs` -> `MacOSX.sdk` -> `usr` -> `include`
- 4.把 `conio-for-mac` 文件夹中的文件放入 `include` 文件夹中
