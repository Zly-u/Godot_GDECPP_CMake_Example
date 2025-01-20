# GDExtension C++ CMake Example
---

Made this mainly for myself to be able to use it with CLion.

If you use CLion then doing a simple "Install" should work right away.

The setup already handles the godot-cpp fetching, so no need to worry about cloning it yourself.

---

# How it works

Upon `Install` CMake will build the library and generate `<plugin_name>.gdextension` file for the plugin to work.
Then it will place the files into `./demo/bin/` in order to test it quickly.

`<plugin_name>.gdextension` is generated based on template contents in `plugin_template.gdextension.in` that are replaced by CMake's `configure_file` function.

Some of the Plugin configuration mainly happens through `CMakeLists` file via some of the defined variables in it:
* `PROJECT_NAME` - Renames `<plugin_name>.gdextension` file to match the project name, also renames the DLLs and targets in the `plugin_template.gdextension.in` file.
* `GODOT_MIN_REQUIREMENT` - Minimal Godot version requirement that is inserted into `${PROJECT_NAME}.gdextension`.
* `ENTRY_POINT` - Entry point name of the DLL.
* `GDP_TEMPLATE_FILE` - name of the `<template_name>.gdextension.in` template file.