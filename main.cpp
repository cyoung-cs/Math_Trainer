#include "Problem.h"
#include <iostream>
#include <vector>
#include <stdlib.h>

Problem gen_problem(std::vector<Problem> set) {
    int num = rand();
    std::cout << "generated " << num << " as random number" << std::endl;
    return set[num % set.size()];
}
int main() {
    srand(0);
    std::vector<Problem> problem_set;
    std::string gen_form_geo_seq = "sn = a1 (1-r^n)\n        --------\n        (1-r)";
    Problem geo_seq("elem_alg2.finite_geometric_series", "39\n E   8(-7/8)^k\nk=0", "4.25",gen_form_geo_seq  );
    problem_set.push_back(geo_seq);
    Problem geo_seq2("elem_alg2.finite_geometric_series", "find the first 35 terms of this geometric series : 8 - 12 + 18 . . . ", "4,659,553.94", gen_form_geo_seq);
    problem_set.push_back(geo_seq2);
    int a;
    for (int i = 0; i < 4; ++i) {
        Problem p = gen_problem(problem_set);
        std::cout << "program paused. Problem read is " << p.get_question() << std::endl;
        std::cin >> a;
    }
    return 0;
}
