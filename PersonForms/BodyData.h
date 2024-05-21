#ifndef PERSONFORMS_BODYDATA_H
#define PERSONFORMS_BODYDATA_H

enum WeightType {
    UNDER_WEIGHT,
    NORMAL,
    OVER_WEIGHT,
    OBESE
};

struct BodyData {
    double weight;
    double height;
    double chest_girth;
    double waist_girth;
    double hip_girth;
    double body_fat;
    double muscle;
    double water;
    double protein;
    double visceral_fat;
    double basal_metabolism;
    double bmi;
    WeightType weight_type;
};

#endif //PERSONFORMS_BODYDATA_H
