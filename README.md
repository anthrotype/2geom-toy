# 2geom-toy

Experiment parsing SVG paths with Inkscape's [lib2geom](https://gitlab.com/inkscape/lib2geom).

## Build

Follow instructions to build and install lib2geom at https://gitlab.com/inkscape/lib2geom#building.
If you didn't install it globally, make note of the custom install prefix as you need to
tell CMake where to look for it using CMAKE_PREFIX_PATH variable.
Then build the toy like this:

```bash
mkdir build && cd build/
cmake -DCMAKE_PREFIX_PATH=/usr/local/google/home/clupo/oss/lib2geom/local/ ..
make
./reverse_path
```
