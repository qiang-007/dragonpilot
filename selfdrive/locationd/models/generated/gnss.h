#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void gnss_update_6(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_20(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_7(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_update_21(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void gnss_err_fun(double *nom_x, double *delta_x, double *out_1596939992626177602);
void gnss_inv_err_fun(double *nom_x, double *true_x, double *out_6300828318046569819);
void gnss_H_mod_fun(double *state, double *out_1215657189081604177);
void gnss_f_fun(double *state, double dt, double *out_1532923226059335678);
void gnss_F_fun(double *state, double dt, double *out_8251087058897801598);
void gnss_h_6(double *state, double *sat_pos, double *out_4884024023469568048);
void gnss_H_6(double *state, double *sat_pos, double *out_7275596494319882590);
void gnss_h_20(double *state, double *sat_pos, double *out_5884657880250407089);
void gnss_H_20(double *state, double *sat_pos, double *out_1911795439089681482);
void gnss_h_7(double *state, double *sat_pos_vel, double *out_825648359391359491);
void gnss_H_7(double *state, double *sat_pos_vel, double *out_2828766485750531907);
void gnss_h_21(double *state, double *sat_pos_vel, double *out_825648359391359491);
void gnss_H_21(double *state, double *sat_pos_vel, double *out_2828766485750531907);
void gnss_predict(double *in_x, double *in_P, double *in_Q, double dt);
}