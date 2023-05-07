# Matrix Screensaver

![Release](https://img.shields.io/github/v/release/thumperward/matrix)
![Downloads](https://img.shields.io/github/downloads/thumperward/matrix/latest/total)
![Issues](https://img.shields.io/github/issues/thumperward/matrix)
![Contributors](https://img.shields.io/github/contributors/thumperward/matrix)
![GPLv3](https://img.shields.io/github/license/thumperward/matrix)

The Matrix ScreenSaver is a small, fast and elegant Windows version of the
green "Matrix" cypher-code seen in the films.

![Screenshot](assets/matrix.png)

## Building

A Docker file is provided to simplify building.

```powershell
git submodule init
docker build -t buildtools:latest -m 2GB .
docker run -v "$(pwd)\:C:\Build\" buildtools msbuild C:\Build\matrix.sln /property:Configuration=Release
```

Alternatively you can use Visual Studio itself. The provided build system
requires Python to be installed.

```cmd
git submodule init
build.bat
```

## License and authors

Originally written by J Brown 2003.

Website: [www.henrypp.org](https://www.henrypp.org)

Support: support@henrypp.org

(c) 2011-2021 Henry++
