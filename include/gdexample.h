#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/sprite2d.hpp>


class GDExample : public godot::Sprite2D
{
    GDCLASS(GDExample, godot::Sprite2D)


public:
    GDExample();
    ~GDExample() override;

    void _process(double delta) override;


protected:
    static void _bind_methods();


private:
    double time_passed;
};

#endif