#include "Graph.h"
#include "Simple_window.h"

using namespace Graph_lib;

int main() {
    Simple_window win(Point(100, 100), 700, 700, "simple_test window");

    Polygon poly;
    poly.add(Point(100, 50));
    poly.add(Point(200, 50));
    poly.add(Point(300, 70));
    poly.set_color(Color::yellow);
    win.attach(poly);

    Text t(Point(250, 350), "This is a simple test window.");
    t.set_color(Color::red);
    win.attach(t);

    Axis x(Axis::x, Point{100, 500}, 300, 10, "xx axis");
    x.set_color(Color::cyan);
    x.label.set_color(Color::dark_red);

    Axis y(Axis::y, Point{100, 500}, 300, 10, "YYY axis");
    y.set_color(Color::cyan);
    y.label.set_color(Color::dark_red);

    Function sine(sin, 0, 10, Point(100, 350), 100, 10, 10);

    Rectangle r(Point(200, 200), 100, 75);
    r.set_fill_color(Color::green);

    win.attach(x);
    win.attach(y);
    win.attach(sine);
    win.attach(r);

    win.wait_for_button();
    return 0;
}