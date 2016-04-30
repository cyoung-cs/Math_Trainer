#include <string>
#ifndef __string_h__
#define __string_h__
class Problem {
    private:
        int id;
        std::string solution;
        std::string question;
        std::string gen_form;
        std::string subject;
    public: 
        Problem(std::string subject, std::string question, std::string answer, std::string gen_form);
        bool answer(std::string query);
        bool check(std::string query);
        std::string get_subject();
        std::string get_gen_form();
        std::string get_question();
};

#endif
