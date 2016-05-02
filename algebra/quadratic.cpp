#include "quadratic.h"
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
Quadratic::Quadratic(double a, double b, double c) {
    assign_co_efs(a, b, c);
    assign_vertex();
}

void Quadratic::assign_co_efs(double v1, double v2, double v3) {
    a = v1;
    b = v2;
    c = v3;
}

void Quadratic::assign_vertex() {
    double v_x = -b / (2 * a);
    double v_y = (a * pow(v_x, 2) + (b * v_x) + c);
    vertex.push_back(v_x);
    vertex.push_back(v_y);
}

std::string Quadratic::get_std_form() {
    std::stringstream s;
    s << a << "x^2 " << b << "x" << c;
    return s.str();
}
