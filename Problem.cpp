#include "Problem.h"
#include <string>
Problem::Problem(std::string sub, std::string ques, std::string ans, std::string form) {
    subject = sub;
    gen_form = form;
    question = ques;
    solution = ans;
    }
        
bool Problem::answer(std::string q) {
    return !solution.compare(q);
}

bool Problem::check(std::string q) {
       return answer(q);
}

std::string Problem::get_subject() { return subject; }
std::string Problem::get_question() { return question; }
std::string Problem::get_gen_form() {return gen_form;}
