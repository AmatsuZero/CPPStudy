//
// Created by daubert on 18-5-21.
//

#ifndef CPPSTUDY_LEPTJSON_H
#define CPPSTUDY_LEPTJSON_H

#include <string>
enum LEFT_TYPE {
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
};

enum ParseResult {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

class LeptValue {
public:
    ParseResult parse(std::string &json);
    LEFT_TYPE getType();
private:
    LEFT_TYPE type;
};

#endif //CPPSTUDY_LEPTJSON_H
