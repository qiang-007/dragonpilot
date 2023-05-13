#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_5348614670159898018);
void live_err_fun(double *nom_x, double *delta_x, double *out_169663657209059311);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_3004485927637526323);
void live_H_mod_fun(double *state, double *out_6538312398965222872);
void live_f_fun(double *state, double dt, double *out_5621249626770720919);
void live_F_fun(double *state, double dt, double *out_65481283135852099);
void live_h_4(double *state, double *unused, double *out_7822420932146878601);
void live_H_4(double *state, double *unused, double *out_6769381150237272533);
void live_h_9(double *state, double *unused, double *out_1202725614202100153);
void live_H_9(double *state, double *unused, double *out_4390143988207831613);
void live_h_10(double *state, double *unused, double *out_1319354120801741251);
void live_H_10(double *state, double *unused, double *out_6638224599345750559);
void live_h_12(double *state, double *unused, double *out_1076250440309326897);
void live_H_12(double *state, double *unused, double *out_6657906515440317288);
void live_h_35(double *state, double *unused, double *out_1552192398939048020);
void live_H_35(double *state, double *unused, double *out_8310700866099671707);
void live_h_32(double *state, double *unused, double *out_3343033264390631947);
void live_H_32(double *state, double *unused, double *out_8179536081158931238);
void live_h_13(double *state, double *unused, double *out_6278496791120349969);
void live_H_13(double *state, double *unused, double *out_519590123089290521);
void live_h_14(double *state, double *unused, double *out_1202725614202100153);
void live_H_14(double *state, double *unused, double *out_4390143988207831613);
void live_h_33(double *state, double *unused, double *out_1214989349061234672);
void live_H_33(double *state, double *unused, double *out_5160143861460814103);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}