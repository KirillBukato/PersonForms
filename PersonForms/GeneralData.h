#ifndef GENERALDATA_H
#define GENERALDATA_H

#include <QString>

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

struct GeneralData {
    int age;
    SkinColor skin_color;
    EyeColor eye_color;
    HairColor hair_color;
    QString face_shape;
    QString eye_shape;
    QString face_features;
    QString body_features;
    QString social_status;
};

#endif //GENERALDATA_H
