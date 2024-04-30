#ifndef PERSONDATA_H
#define PERSONDATA_H

#include "BodyData.h"

#include <string>

enum SkinColor {
    light_skin,
    dark_skin
};

enum EyeColor {
    blue,
    green,
    brown
};

enum HairColor {
    light_hair,
    dark_hair
};

struct PersonData {
    int age;
    SkinColor skin_color;
    EyeColor eye_color;
    HairColor hair_color;
    std::string face_shape;
    std::string eye_shape;
    std::string social_status;
    BodyData body_data;
};

#endif // PERSONDATA_H
