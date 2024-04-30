//
// Created by savchik on 30/04/24.
//

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
    double body_fat;
    double muscle;
    double water;
    double protein;
    double bone_mass;
    double visceral_fat;
    double basal_metabolism;
    double bmi;

};

#endif //PERSONFORMS_BODYDATA_H
