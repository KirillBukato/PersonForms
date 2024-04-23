#ifndef PERSONDATA_H
#define PERSONDATA_H

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
    int height;
    int weight;
    int chest_girth;
    int waist_girth;
    int shoulder_girth;
    SkinColor skin_color;
    EyeColor eye_color;
    HairColor hair_color;
};

#endif // PERSONDATA_H
