#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_8590426746986257022);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_5546377219815262914);
void car_H_mod_fun(double *state, double *out_6623956598408601663);
void car_f_fun(double *state, double dt, double *out_4466490512263569701);
void car_F_fun(double *state, double dt, double *out_3639267074084628127);
void car_h_25(double *state, double *unused, double *out_4416265881640831478);
void car_H_25(double *state, double *unused, double *out_2519595465858249988);
void car_h_24(double *state, double *unused, double *out_4045896216796201698);
void car_H_24(double *state, double *unused, double *out_2049137983814911264);
void car_h_30(double *state, double *unused, double *out_2324577885591837121);
void car_H_30(double *state, double *unused, double *out_2008100864269358210);
void car_h_26(double *state, double *unused, double *out_4088144059248859850);
void car_H_26(double *state, double *unused, double *out_1221907853015806236);
void car_h_27(double *state, double *unused, double *out_9172736546134853571);
void car_H_27(double *state, double *unused, double *out_215493206914585007);
void car_h_29(double *state, double *unused, double *out_5167121447979372841);
void car_H_29(double *state, double *unused, double *out_1497869519954966026);
void car_h_28(double *state, double *unused, double *out_6237221476130365360);
void car_H_28(double *state, double *unused, double *out_6580268537024496600);
void car_h_31(double *state, double *unused, double *out_4573452549991960623);
void car_H_31(double *state, double *unused, double *out_2550241427735210416);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}