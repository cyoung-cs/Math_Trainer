#include "Problem.h"
#include <iostream>
int main() {
    std::string gen_form_geo_seq = "sn = a1 (1-r^n)\n        --------\n        (1-r)";
    Problem geo_seq("elem_alg2.finite_geometric_series", "39\n E   8(-7/8)^k\nk=0", "4.25",gen_form_geo_seq  );
    Problem geo_seq2("elem_alg2.finite_geometric_series", "find the first 35 terms of this geometric series : 8 - 12 + 18 . . . ", "4,659,553.94", gen_form_geo_seq);
    std::cout << geo_seq2.get_subject() << std::endl;
    std::cout <<"the question is\n: " <<  geo_seq2.get_question() << std::endl;
    std::cout << geo_seq2.get_gen_form() << std::endl;
    std::string ans;
    std::cout << " my answer is >> ";
    std::cin >> ans;
    if (geo_seq.answer(ans)) {
        std::cout << "program seems to work." << std::endl;
    }
    else {
        std::cout << "there is a bug somewhere." << std::endl;
    }

    return 0;
}
