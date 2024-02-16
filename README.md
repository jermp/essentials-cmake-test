This is an example of how to integrate the [`essentials`](https://github.com/jermp/essentials) library into your project with `CMake`.

Steps:

1. Add the `essentials` library to the `external` folder with

    `cd external; git submodule add https://github.com/jermp/essentials`

2. In the CMakeLists.txt file of your project add `add_subdirectory(external/essentials)`.

3. For any target you have, add `target_link_libraries([target-name] PRIVATE ESSENTIALS)`.

Credits: [Hash-Peter Lehmann](https://github.com/ByteHamster).