#ifndef __quad_h__
#define __quad_h__
#include <string>
#include <vector>
class Quadratic {
    private:
        double a;
        double b;
        double c;
        std::vector<double> vertex;
        double directrix_x;
        double directrix_y;
        std::vector<double> x_ints;
        void assign_vertex();
        void assign_co_efs(double a, double b, double c);

    public:
   //     Quadratic (double a, double c); // assigns a B value from a range of factors of a and c
        Quadratic (double a, double b, double c); // for handcrafted problems
        std::string get_std_form();
      //  bool ans_x_ints(double x1, double x2);
        // bool ans_vertex (double x, double y);
        
};

#endif
