# RPFrameworkRadio

Radio for vehicles via NRadio extension https://github.com/maca134/arma-nradio

This failed final tests and didn't fetch stream files quickly enough for it to be functional, but it's something.

# Installation

1. Download all files and read the LICENSE.txt file for the license
5. Navigate to **RPFramework.yourMap\Functions\modules** and place the **Radio** folder there
6. Navigate to **RPFramework.yourMap\Functions\modules\CONFIG** and open up **fn_initModules.sqf**, **moduleDialogs.hpp**, **moduleFunctions.hpp**, **moduleRscTitles.hpp**, **moduleSounds.hpp**
7. In **fn_initModules.sqf** add an element to array called **_cModules** in format `"ClientModules_fnc_initRadio"`, remember that the last array element doesn't need a comma after it but every element before it does
8. In **moduleDialogs.hpp**, **moduleFunctions.hpp**, **moduleRscTitles.hpp** and **moduleSounds.hpp** add a new line in format `#include "..\Radio\CURRENTFILESUFFIX.hpp"` where **CURRENTFILESUFFIX** is the "suffix" of the current file. For **moduleFunctions.hpp** the **CURRENTFILESUFFIX** would be **Functions**.
