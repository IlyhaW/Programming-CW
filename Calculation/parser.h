#pragma once

const int NUMVARS = 26;
class parser {
    char* exp_ptr; 
    char token[256]; 
    char tok_type; 
    double vars[NUMVARS]; 
    void eval_exp1(double& result);
    void eval_exp2(double& result);
    void eval_exp3(double& result);
    void eval_exp4(double& result);
    void eval_exp5(double& result);
    void eval_exp6(double& result);
    void get_token();
public:
    parser();
    double eval_exp(char* exp);
    char errormsg[64];
};

