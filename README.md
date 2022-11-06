# C++ Template

## Requirements

1. Download [MinGW-w64 - for 32 and 64 bit Windows](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-win32/seh/x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z/download)
2. Download [DEVELOP version of SDL2](https://github.com/libsdl-org/SDL/releases/tag/release-2.24.2)
3. Download [DEVELOP version of SDL2_image](https://github.com/libsdl-org/SDL_image/releases)
4. Download [VSCode](https://code.visualstudio.com/download)

### Installation

1. Unzip `MinGW`, `SDL2` and `SDL_image`
2. Cut `MinGW` and `SDL2` folders inside some useful folder, for example: `C:/dev/MinGW` and `C:/dev/SDL2`
3. Add the `bin` folder to the `PATH` System Variable.
4. Cut everything inside the `SDL2_image/x86_64-w64-mingw32` folder and replace it inside the `SDL2` folder.
5. Add `"path/to/SDL2/**"` to property `includePath` in file `.vscode/c_cpp_properties.json`

## Run the project

Run the `Debug` task. You can do it with shortcut `CTRL + SHIFT + b`.
If you need to deploy the release, you can run the `Release` task.

## Common Gotchas

- If you delete any `.cpp` file, remember to DELETE the `.o` output file.
- If you add/remove/modify any music/tile/etc inside the `res` folder, you need to copy and paste that `res` folder inside the `bin/debug` and `bin/release` folders.
