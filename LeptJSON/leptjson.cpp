//
// Created by daubert on 18-5-21.
//

#include "leptjson.h"

LEFT_TYPE LeptValue::getType() { return type; }

ParseResult LeptValue::parse(string &json) {
    ParseResult ret;
    ret = LEPT_PARSE_OK;
    return ret;
}