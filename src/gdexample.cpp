#include "gdexample.h"
#include <godot_cpp/core/class_db.hpp>


void GDExample::_bind_methods() {

}

GDExample::GDExample() : time_passed(0.0) {
    // Init shenanigans.
}

GDExample::~GDExample() {
    // Add your cleanup here.
}

void GDExample::_process(double delta) {
    time_passed += delta;

    godot::Vector2 new_position = godot::Vector2(
        10.0 + (10.0 * sin(time_passed * 2.0)),
        10.0 + (10.0 * cos(time_passed * 1.5))
    );

    set_position(new_position);
}