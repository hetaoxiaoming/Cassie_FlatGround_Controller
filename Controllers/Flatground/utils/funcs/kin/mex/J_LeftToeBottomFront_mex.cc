/*
 * Automatically Generated from Mathematica.
 * Mon 25 Jun 2018 14:53:40 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t835;
  double t911;
  double t917;
  double t809;
  double t1022;
  double t469;
  double t883;
  double t1153;
  double t1292;
  double t1300;
  double t1336;
  double t1456;
  double t1489;
  double t1957;
  double t2065;
  double t2154;
  double t2206;
  double t1557;
  double t1717;
  double t1846;
  double t2326;
  double t2707;
  double t2725;
  double t2789;
  double t2819;
  double t2620;
  double t2630;
  double t2632;
  double t2974;
  double t2992;
  double t3033;
  double t3182;
  double t3297;
  double t3329;
  double t3368;
  double t3481;
  double t3486;
  double t3577;
  double t3667;
  double t3718;
  double t3731;
  double t3802;
  double t4174;
  double t4357;
  double t4450;
  double t4739;
  double t4767;
  double t4833;
  double t5520;
  double t5524;
  double t5566;
  double t5736;
  double t5826;
  double t5903;
  double t5980;
  double t6291;
  double t6301;
  double t6352;
  double t6457;
  double t6472;
  double t6500;
  double t6522;
  double t6531;
  double t6546;
  double t6608;
  double t6647;
  double t6650;
  double t6664;
  double t6730;
  double t6737;
  double t6762;
  double t476;
  double t650;
  double t769;
  double t803;
  double t1493;
  double t1494;
  double t6920;
  double t6932;
  double t6942;
  double t6955;
  double t6958;
  double t6970;
  double t2193;
  double t2290;
  double t2291;
  double t2333;
  double t2336;
  double t2388;
  double t6988;
  double t7002;
  double t7006;
  double t2814;
  double t2821;
  double t2872;
  double t3041;
  double t3047;
  double t3074;
  double t3350;
  double t3395;
  double t3435;
  double t7098;
  double t7109;
  double t7110;
  double t7138;
  double t7155;
  double t7179;
  double t3606;
  double t3625;
  double t3644;
  double t4437;
  double t4454;
  double t4685;
  double t7217;
  double t7224;
  double t7226;
  double t7261;
  double t7269;
  double t7277;
  double t4971;
  double t5025;
  double t5443;
  double t5965;
  double t6083;
  double t6167;
  double t7286;
  double t7291;
  double t7294;
  double t7308;
  double t7311;
  double t7336;
  double t6368;
  double t6396;
  double t6438;
  double t6574;
  double t6621;
  double t6636;
  double t7345;
  double t7355;
  double t7368;
  double t7383;
  double t7397;
  double t7418;
  double t6682;
  double t6701;
  double t6715;
  double t7434;
  double t7443;
  double t7453;
  double t7464;
  double t7468;
  double t7470;
  double t7557;
  double t7564;
  double t7569;
  double t7638;
  double t7642;
  double t7646;
  double t7654;
  double t7657;
  double t7660;
  double t7662;
  double t7666;
  double t7673;
  double t7679;
  double t7682;
  double t7687;
  double t7691;
  double t7693;
  double t7696;
  double t7708;
  double t7709;
  double t7713;
  double t7718;
  double t7719;
  double t7721;
  double t7726;
  double t7727;
  double t7738;
  double t7745;
  double t7747;
  double t7751;
  double t7756;
  double t7759;
  double t7760;
  double t7799;
  double t7801;
  double t7804;
  double t7827;
  double t7829;
  double t7830;
  double t7839;
  double t7849;
  double t7850;
  double t7856;
  double t7858;
  double t7860;
  double t7868;
  double t7870;
  double t7871;
  double t7877;
  double t7878;
  double t7881;
  double t7885;
  double t7886;
  double t7887;
  double t7889;
  double t7893;
  double t7896;
  double t7900;
  double t7901;
  double t7903;
  double t7910;
  double t7913;
  double t7916;
  double t7921;
  double t7932;
  double t7933;
  double t7965;
  double t7968;
  double t7972;
  double t7981;
  double t7982;
  double t7985;
  double t7994;
  double t7996;
  double t7998;
  double t8001;
  double t8002;
  double t8004;
  double t8011;
  double t8014;
  double t8015;
  double t8021;
  double t8023;
  double t8027;
  double t8032;
  double t8035;
  double t8037;
  double t8041;
  double t8043;
  double t8047;
  double t8051;
  double t8052;
  double t8055;
  double t8057;
  double t8059;
  double t8060;
  double t8064;
  double t8066;
  double t8068;
  double t8099;
  double t8100;
  double t8104;
  double t8108;
  double t8111;
  double t8118;
  double t8120;
  double t8121;
  double t8127;
  double t8129;
  double t8130;
  double t8134;
  double t8137;
  double t8138;
  double t8140;
  double t8143;
  double t8144;
  double t8150;
  double t8152;
  double t8156;
  double t8158;
  double t8161;
  double t8162;
  double t8164;
  double t8166;
  double t8167;
  double t8173;
  double t8177;
  double t8179;
  double t8181;
  double t8182;
  double t8185;
  double t8203;
  double t8204;
  double t8205;
  double t8211;
  double t8213;
  double t8216;
  double t8226;
  double t8227;
  double t8232;
  double t8233;
  double t8235;
  double t8238;
  double t8239;
  double t8240;
  double t8242;
  double t8244;
  double t8245;
  double t8249;
  double t8250;
  double t8254;
  double t8258;
  double t8259;
  double t8260;
  double t8262;
  double t8263;
  double t8264;
  double t8266;
  double t8268;
  double t8271;
  double t8278;
  double t8279;
  double t8285;
  double t8306;
  double t8307;
  double t8310;
  double t8318;
  double t8319;
  double t8320;
  double t8322;
  double t8323;
  double t8324;
  double t8326;
  double t8327;
  double t8328;
  double t8330;
  double t8332;
  double t8333;
  double t8337;
  double t8338;
  double t8340;
  double t8342;
  double t8343;
  double t8346;
  double t8351;
  double t8354;
  double t8355;
  double t8360;
  double t8361;
  double t8362;
  double t8365;
  double t8366;
  double t8369;
  double t8394;
  double t8395;
  double t8399;
  double t8402;
  double t8403;
  double t8405;
  double t8406;
  double t8407;
  double t8410;
  double t8411;
  double t8412;
  double t8414;
  double t8416;
  double t8417;
  double t8422;
  double t8423;
  double t8425;
  double t8427;
  double t8428;
  double t8429;
  double t8432;
  double t8433;
  double t8435;
  double t8439;
  double t8440;
  double t8441;
  double t8453;
  double t8454;
  double t8455;
  double t8458;
  double t8459;
  double t8466;
  double t8467;
  double t8469;
  double t8470;
  double t8471;
  double t8473;
  double t8474;
  double t8475;
  double t8477;
  double t8478;
  double t8480;
  double t8483;
  double t8486;
  double t8487;
  double t8490;
  double t8491;
  double t8494;
  double t8496;
  double t8497;
  double t8498;
  double t8500;
  double t8501;
  double t8502;
  double t8504;
  double t8505;
  double t8506;
  double t8313;
  double t8316;
  double t8317;
  double t8321;
  double t8325;
  double t8329;
  double t8335;
  double t8341;
  double t8349;
  double t8359;
  double t8363;
  double t8371;
  double t8372;
  double t8374;
  double t8375;
  double t8378;
  double t8379;
  double t8382;
  double t8384;
  double t8385;
  double t7074;
  double t7080;
  double t7092;
  double t8542;
  double t8544;
  double t8545;
  double t8547;
  double t8548;
  double t8549;
  double t8551;
  double t8552;
  double t8554;
  double t8558;
  double t8560;
  double t8561;
  double t8564;
  double t8565;
  double t8567;
  double t8569;
  double t8570;
  double t8571;
  double t8527;
  double t8528;
  double t8529;
  double t8531;
  double t8532;
  double t8589;
  double t8590;
  double t8591;
  double t8593;
  double t8594;
  double t8595;
  double t8602;
  double t8603;
  double t8604;
  double t8607;
  double t8608;
  double t8609;
  double t8611;
  double t8612;
  double t8613;
  double t8615;
  double t8616;
  double t8617;
  double t8620;
  double t8621;
  double t8622;
  double t8624;
  double t8625;
  double t8626;
  double t8638;
  double t8639;
  double t8640;
  double t8642;
  double t8643;
  double t8644;
  double t8652;
  double t8653;
  double t8654;
  double t8656;
  double t8657;
  double t8658;
  double t8660;
  double t8661;
  double t8662;
  double t8664;
  double t8665;
  double t8666;
  double t8668;
  double t8669;
  double t8670;
  double t8672;
  double t8673;
  double t8674;
  double t8692;
  double t8693;
  double t8694;
  double t8697;
  double t8698;
  double t8700;
  double t8701;
  double t8702;
  double t8704;
  double t8705;
  double t8706;
  double t8708;
  double t8709;
  double t8710;
  double t8712;
  double t8713;
  double t8714;
  double t8716;
  double t8717;
  double t8718;
  double t8685;
  double t8686;
  double t8688;
  double t8689;
  double t8690;
  double t8730;
  double t8731;
  double t8732;
  double t8734;
  double t8735;
  double t8736;
  double t8738;
  double t8739;
  double t8740;
  double t8742;
  double t8743;
  double t8744;
  double t8746;
  double t8747;
  double t8748;
  double t8750;
  double t8751;
  double t8752;
  double t8754;
  double t8755;
  double t8756;
  double t8758;
  double t8759;
  double t8760;
  double t8762;
  double t8763;
  double t8764;
  double t8776;
  double t8777;
  double t8778;
  double t8780;
  double t8781;
  double t8782;
  double t8784;
  double t8785;
  double t8786;
  double t8788;
  double t8789;
  double t8790;
  double t8792;
  double t8793;
  double t8794;
  double t8796;
  double t8797;
  double t8798;
  double t8800;
  double t8801;
  double t8802;
  double t8804;
  double t8805;
  double t8806;
  double t8808;
  double t8809;
  double t8810;
  double t8829;
  double t8830;
  double t8832;
  double t8833;
  double t8834;
  double t8836;
  double t8837;
  double t8839;
  double t8840;
  double t8841;
  double t8843;
  double t8844;
  double t8845;
  double t8821;
  double t8822;
  double t8823;
  double t8825;
  double t8826;
  double t8856;
  double t8857;
  double t8858;
  double t8861;
  double t8862;
  double t8864;
  double t8865;
  double t8867;
  double t8868;
  double t8869;
  double t8871;
  double t8872;
  double t8873;
  double t8875;
  double t8876;
  double t8877;
  double t8879;
  double t8880;
  double t8881;
  double t8892;
  double t8893;
  double t8894;
  double t8897;
  double t8898;
  double t8900;
  double t8901;
  double t8903;
  double t8904;
  double t8905;
  double t8907;
  double t8908;
  double t8909;
  double t8911;
  double t8912;
  double t8913;
  double t8915;
  double t8916;
  double t8917;
  double t8935;
  double t8936;
  double t8939;
  double t8940;
  double t8942;
  double t8943;
  double t8944;
  double t8928;
  double t8929;
  double t8931;
  double t8932;
  double t8933;
  double t8956;
  double t8957;
  double t8958;
  double t8960;
  double t8961;
  double t8963;
  double t8964;
  double t8966;
  double t8967;
  double t8968;
  double t8970;
  double t8971;
  double t8972;
  double t8984;
  double t8985;
  double t8986;
  double t8988;
  double t8989;
  double t8991;
  double t8992;
  double t8994;
  double t8995;
  double t8996;
  double t8998;
  double t8999;
  double t9000;
  double t9019;
  double t9020;
  double t7500;
  double t9011;
  double t9012;
  double t9013;
  double t9015;
  double t9016;
  double t9030;
  double t9031;
  double t9032;
  double t9035;
  double t9036;
  double t9038;
  double t9039;
  double t9050;
  double t9051;
  double t9052;
  double t9055;
  double t9056;
  double t9058;
  double t9059;
  double t9022;
  double t7516;
  double t7519;
  double t9070;
  double t9071;
  double t9073;
  double t9074;
  double t9075;
  double t9041;
  double t9083;
  double t9084;
  double t9085;
  double t9045;
  double t9061;
  double t9095;
  double t9096;
  double t9097;
  double t9065;
  t835 = Cos(var1[5]);
  t911 = Sin(var1[3]);
  t917 = Sin(var1[4]);
  t809 = Cos(var1[3]);
  t1022 = Sin(var1[5]);
  t469 = Cos(var1[6]);
  t883 = -1.*t809*t835;
  t1153 = -1.*t911*t917*t1022;
  t1292 = t883 + t1153;
  t1300 = -1.*t835*t911*t917;
  t1336 = t809*t1022;
  t1456 = t1300 + t1336;
  t1489 = Sin(var1[6]);
  t1957 = Cos(var1[7]);
  t2065 = -1.*t1957;
  t2154 = 1. + t2065;
  t2206 = Sin(var1[7]);
  t1557 = t469*t1292;
  t1717 = t1456*t1489;
  t1846 = t1557 + t1717;
  t2326 = Cos(var1[4]);
  t2707 = Cos(var1[8]);
  t2725 = -1.*t2707;
  t2789 = 1. + t2725;
  t2819 = Sin(var1[8]);
  t2620 = -1.*t2326*t1957*t911;
  t2630 = t1846*t2206;
  t2632 = t2620 + t2630;
  t2974 = t469*t1456;
  t2992 = -1.*t1292*t1489;
  t3033 = t2974 + t2992;
  t3182 = Cos(var1[9]);
  t3297 = -1.*t3182;
  t3329 = 1. + t3297;
  t3368 = Sin(var1[9]);
  t3481 = t2707*t2632;
  t3486 = t3033*t2819;
  t3577 = t3481 + t3486;
  t3667 = t2707*t3033;
  t3718 = -1.*t2632*t2819;
  t3731 = t3667 + t3718;
  t3802 = Cos(var1[10]);
  t4174 = -1.*t3802;
  t4357 = 1. + t4174;
  t4450 = Sin(var1[10]);
  t4739 = -1.*t3368*t3577;
  t4767 = t3182*t3731;
  t4833 = t4739 + t4767;
  t5520 = t3182*t3577;
  t5524 = t3368*t3731;
  t5566 = t5520 + t5524;
  t5736 = Cos(var1[11]);
  t5826 = -1.*t5736;
  t5903 = 1. + t5826;
  t5980 = Sin(var1[11]);
  t6291 = t4450*t4833;
  t6301 = t3802*t5566;
  t6352 = t6291 + t6301;
  t6457 = t3802*t4833;
  t6472 = -1.*t4450*t5566;
  t6500 = t6457 + t6472;
  t6522 = Cos(var1[12]);
  t6531 = -1.*t6522;
  t6546 = 1. + t6531;
  t6608 = Sin(var1[12]);
  t6647 = -1.*t5980*t6352;
  t6650 = t5736*t6500;
  t6664 = t6647 + t6650;
  t6730 = t5736*t6352;
  t6737 = t5980*t6500;
  t6762 = t6730 + t6737;
  t476 = -1.*t469;
  t650 = 1. + t476;
  t769 = 0.135*t650;
  t803 = 0. + t769;
  t1493 = -0.135*t1489;
  t1494 = 0. + t1493;
  t6920 = -1.*t835*t911;
  t6932 = t809*t917*t1022;
  t6942 = t6920 + t6932;
  t6955 = t809*t835*t917;
  t6958 = t911*t1022;
  t6970 = t6955 + t6958;
  t2193 = 0.135*t2154;
  t2290 = 0.049*t2206;
  t2291 = 0. + t2193 + t2290;
  t2333 = -0.049*t2154;
  t2336 = 0.135*t2206;
  t2388 = 0. + t2333 + t2336;
  t6988 = t469*t6942;
  t7002 = t6970*t1489;
  t7006 = t6988 + t7002;
  t2814 = -0.049*t2789;
  t2821 = -0.09*t2819;
  t2872 = 0. + t2814 + t2821;
  t3041 = -0.09*t2789;
  t3047 = 0.049*t2819;
  t3074 = 0. + t3041 + t3047;
  t3350 = -0.049*t3329;
  t3395 = -0.21*t3368;
  t3435 = 0. + t3350 + t3395;
  t7098 = t809*t2326*t1957;
  t7109 = t7006*t2206;
  t7110 = t7098 + t7109;
  t7138 = t469*t6970;
  t7155 = -1.*t6942*t1489;
  t7179 = t7138 + t7155;
  t3606 = -0.21*t3329;
  t3625 = 0.049*t3368;
  t3644 = 0. + t3606 + t3625;
  t4437 = -0.2707*t4357;
  t4454 = 0.0016*t4450;
  t4685 = 0. + t4437 + t4454;
  t7217 = t2707*t7110;
  t7224 = t7179*t2819;
  t7226 = t7217 + t7224;
  t7261 = t2707*t7179;
  t7269 = -1.*t7110*t2819;
  t7277 = t7261 + t7269;
  t4971 = -0.0016*t4357;
  t5025 = -0.2707*t4450;
  t5443 = 0. + t4971 + t5025;
  t5965 = 0.0184*t5903;
  t6083 = -0.7055*t5980;
  t6167 = 0. + t5965 + t6083;
  t7286 = -1.*t3368*t7226;
  t7291 = t3182*t7277;
  t7294 = t7286 + t7291;
  t7308 = t3182*t7226;
  t7311 = t3368*t7277;
  t7336 = t7308 + t7311;
  t6368 = -0.7055*t5903;
  t6396 = -0.0184*t5980;
  t6438 = 0. + t6368 + t6396;
  t6574 = -1.1135*t6546;
  t6621 = 0.0216*t6608;
  t6636 = 0. + t6574 + t6621;
  t7345 = t4450*t7294;
  t7355 = t3802*t7336;
  t7368 = t7345 + t7355;
  t7383 = t3802*t7294;
  t7397 = -1.*t4450*t7336;
  t7418 = t7383 + t7397;
  t6682 = -0.0216*t6546;
  t6701 = -1.1135*t6608;
  t6715 = 0. + t6682 + t6701;
  t7434 = -1.*t5980*t7368;
  t7443 = t5736*t7418;
  t7453 = t7434 + t7443;
  t7464 = t5736*t7368;
  t7468 = t5980*t7418;
  t7470 = t7464 + t7468;
  t7557 = t809*t2326*t469*t1022;
  t7564 = t809*t2326*t835*t1489;
  t7569 = t7557 + t7564;
  t7638 = -1.*t809*t1957*t917;
  t7642 = t7569*t2206;
  t7646 = t7638 + t7642;
  t7654 = t809*t2326*t835*t469;
  t7657 = -1.*t809*t2326*t1022*t1489;
  t7660 = t7654 + t7657;
  t7662 = t2707*t7646;
  t7666 = t7660*t2819;
  t7673 = t7662 + t7666;
  t7679 = t2707*t7660;
  t7682 = -1.*t7646*t2819;
  t7687 = t7679 + t7682;
  t7691 = -1.*t3368*t7673;
  t7693 = t3182*t7687;
  t7696 = t7691 + t7693;
  t7708 = t3182*t7673;
  t7709 = t3368*t7687;
  t7713 = t7708 + t7709;
  t7718 = t4450*t7696;
  t7719 = t3802*t7713;
  t7721 = t7718 + t7719;
  t7726 = t3802*t7696;
  t7727 = -1.*t4450*t7713;
  t7738 = t7726 + t7727;
  t7745 = -1.*t5980*t7721;
  t7747 = t5736*t7738;
  t7751 = t7745 + t7747;
  t7756 = t5736*t7721;
  t7759 = t5980*t7738;
  t7760 = t7756 + t7759;
  t7799 = t2326*t469*t911*t1022;
  t7801 = t2326*t835*t911*t1489;
  t7804 = t7799 + t7801;
  t7827 = -1.*t1957*t911*t917;
  t7829 = t7804*t2206;
  t7830 = t7827 + t7829;
  t7839 = t2326*t835*t469*t911;
  t7849 = -1.*t2326*t911*t1022*t1489;
  t7850 = t7839 + t7849;
  t7856 = t2707*t7830;
  t7858 = t7850*t2819;
  t7860 = t7856 + t7858;
  t7868 = t2707*t7850;
  t7870 = -1.*t7830*t2819;
  t7871 = t7868 + t7870;
  t7877 = -1.*t3368*t7860;
  t7878 = t3182*t7871;
  t7881 = t7877 + t7878;
  t7885 = t3182*t7860;
  t7886 = t3368*t7871;
  t7887 = t7885 + t7886;
  t7889 = t4450*t7881;
  t7893 = t3802*t7887;
  t7896 = t7889 + t7893;
  t7900 = t3802*t7881;
  t7901 = -1.*t4450*t7887;
  t7903 = t7900 + t7901;
  t7910 = -1.*t5980*t7896;
  t7913 = t5736*t7903;
  t7916 = t7910 + t7913;
  t7921 = t5736*t7896;
  t7932 = t5980*t7903;
  t7933 = t7921 + t7932;
  t7965 = -1.*t469*t917*t1022;
  t7968 = -1.*t835*t917*t1489;
  t7972 = t7965 + t7968;
  t7981 = -1.*t2326*t1957;
  t7982 = t7972*t2206;
  t7985 = t7981 + t7982;
  t7994 = -1.*t835*t469*t917;
  t7996 = t917*t1022*t1489;
  t7998 = t7994 + t7996;
  t8001 = t2707*t7985;
  t8002 = t7998*t2819;
  t8004 = t8001 + t8002;
  t8011 = t2707*t7998;
  t8014 = -1.*t7985*t2819;
  t8015 = t8011 + t8014;
  t8021 = -1.*t3368*t8004;
  t8023 = t3182*t8015;
  t8027 = t8021 + t8023;
  t8032 = t3182*t8004;
  t8035 = t3368*t8015;
  t8037 = t8032 + t8035;
  t8041 = t4450*t8027;
  t8043 = t3802*t8037;
  t8047 = t8041 + t8043;
  t8051 = t3802*t8027;
  t8052 = -1.*t4450*t8037;
  t8055 = t8051 + t8052;
  t8057 = -1.*t5980*t8047;
  t8059 = t5736*t8055;
  t8060 = t8057 + t8059;
  t8064 = t5736*t8047;
  t8066 = t5980*t8055;
  t8068 = t8064 + t8066;
  t8099 = t835*t911;
  t8100 = -1.*t809*t917*t1022;
  t8104 = t8099 + t8100;
  t8108 = t8104*t1489;
  t8111 = t7138 + t8108;
  t8118 = t469*t8104;
  t8120 = -1.*t6970*t1489;
  t8121 = t8118 + t8120;
  t8127 = t2707*t8111*t2206;
  t8129 = t8121*t2819;
  t8130 = t8127 + t8129;
  t8134 = t2707*t8121;
  t8137 = -1.*t8111*t2206*t2819;
  t8138 = t8134 + t8137;
  t8140 = -1.*t3368*t8130;
  t8143 = t3182*t8138;
  t8144 = t8140 + t8143;
  t8150 = t3182*t8130;
  t8152 = t3368*t8138;
  t8156 = t8150 + t8152;
  t8158 = t4450*t8144;
  t8161 = t3802*t8156;
  t8162 = t8158 + t8161;
  t8164 = t3802*t8144;
  t8166 = -1.*t4450*t8156;
  t8167 = t8164 + t8166;
  t8173 = -1.*t5980*t8162;
  t8177 = t5736*t8167;
  t8179 = t8173 + t8177;
  t8181 = t5736*t8162;
  t8182 = t5980*t8167;
  t8185 = t8181 + t8182;
  t8203 = t835*t911*t917;
  t8204 = -1.*t809*t1022;
  t8205 = t8203 + t8204;
  t8211 = t469*t8205;
  t8213 = t1292*t1489;
  t8216 = t8211 + t8213;
  t8226 = -1.*t8205*t1489;
  t8227 = t1557 + t8226;
  t8232 = t2707*t8216*t2206;
  t8233 = t8227*t2819;
  t8235 = t8232 + t8233;
  t8238 = t2707*t8227;
  t8239 = -1.*t8216*t2206*t2819;
  t8240 = t8238 + t8239;
  t8242 = -1.*t3368*t8235;
  t8244 = t3182*t8240;
  t8245 = t8242 + t8244;
  t8249 = t3182*t8235;
  t8250 = t3368*t8240;
  t8254 = t8249 + t8250;
  t8258 = t4450*t8245;
  t8259 = t3802*t8254;
  t8260 = t8258 + t8259;
  t8262 = t3802*t8245;
  t8263 = -1.*t4450*t8254;
  t8264 = t8262 + t8263;
  t8266 = -1.*t5980*t8260;
  t8268 = t5736*t8264;
  t8271 = t8266 + t8268;
  t8278 = t5736*t8260;
  t8279 = t5980*t8264;
  t8285 = t8278 + t8279;
  t8306 = t2326*t835*t469;
  t8307 = -1.*t2326*t1022*t1489;
  t8310 = t8306 + t8307;
  t8318 = -1.*t2326*t469*t1022;
  t8319 = -1.*t2326*t835*t1489;
  t8320 = t8318 + t8319;
  t8322 = t2707*t8310*t2206;
  t8323 = t8320*t2819;
  t8324 = t8322 + t8323;
  t8326 = t2707*t8320;
  t8327 = -1.*t8310*t2206*t2819;
  t8328 = t8326 + t8327;
  t8330 = -1.*t3368*t8324;
  t8332 = t3182*t8328;
  t8333 = t8330 + t8332;
  t8337 = t3182*t8324;
  t8338 = t3368*t8328;
  t8340 = t8337 + t8338;
  t8342 = t4450*t8333;
  t8343 = t3802*t8340;
  t8346 = t8342 + t8343;
  t8351 = t3802*t8333;
  t8354 = -1.*t4450*t8340;
  t8355 = t8351 + t8354;
  t8360 = -1.*t5980*t8346;
  t8361 = t5736*t8355;
  t8362 = t8360 + t8361;
  t8365 = t5736*t8346;
  t8366 = t5980*t8355;
  t8369 = t8365 + t8366;
  t8394 = -1.*t469*t6942;
  t8395 = t8394 + t8120;
  t8399 = t2707*t7179*t2206;
  t8402 = t8395*t2819;
  t8403 = t8399 + t8402;
  t8405 = t2707*t8395;
  t8406 = -1.*t7179*t2206*t2819;
  t8407 = t8405 + t8406;
  t8410 = -1.*t3368*t8403;
  t8411 = t3182*t8407;
  t8412 = t8410 + t8411;
  t8414 = t3182*t8403;
  t8416 = t3368*t8407;
  t8417 = t8414 + t8416;
  t8422 = t4450*t8412;
  t8423 = t3802*t8417;
  t8425 = t8422 + t8423;
  t8427 = t3802*t8412;
  t8428 = -1.*t4450*t8417;
  t8429 = t8427 + t8428;
  t8432 = -1.*t5980*t8425;
  t8433 = t5736*t8429;
  t8435 = t8432 + t8433;
  t8439 = t5736*t8425;
  t8440 = t5980*t8429;
  t8441 = t8439 + t8440;
  t8453 = t809*t835;
  t8454 = t911*t917*t1022;
  t8455 = t8453 + t8454;
  t8458 = -1.*t8455*t1489;
  t8459 = t8211 + t8458;
  t8466 = -1.*t469*t8455;
  t8467 = t8466 + t8226;
  t8469 = t2707*t8459*t2206;
  t8470 = t8467*t2819;
  t8471 = t8469 + t8470;
  t8473 = t2707*t8467;
  t8474 = -1.*t8459*t2206*t2819;
  t8475 = t8473 + t8474;
  t8477 = -1.*t3368*t8471;
  t8478 = t3182*t8475;
  t8480 = t8477 + t8478;
  t8483 = t3182*t8471;
  t8486 = t3368*t8475;
  t8487 = t8483 + t8486;
  t8490 = t4450*t8480;
  t8491 = t3802*t8487;
  t8494 = t8490 + t8491;
  t8496 = t3802*t8480;
  t8497 = -1.*t4450*t8487;
  t8498 = t8496 + t8497;
  t8500 = -1.*t5980*t8494;
  t8501 = t5736*t8498;
  t8502 = t8500 + t8501;
  t8504 = t5736*t8494;
  t8505 = t5980*t8498;
  t8506 = t8504 + t8505;
  t8313 = 0.1305*t1957*t8310;
  t8316 = t8310*t2291;
  t8317 = t8310*t2206*t2872;
  t8321 = t8320*t3074;
  t8325 = t3435*t8324;
  t8329 = t3644*t8328;
  t8335 = t4685*t8333;
  t8341 = t5443*t8340;
  t8349 = t6167*t8346;
  t8359 = t6438*t8355;
  t8363 = t6636*t8362;
  t8371 = t6715*t8369;
  t8372 = t6608*t8362;
  t8374 = t6522*t8369;
  t8375 = t8372 + t8374;
  t8378 = 0.077577*t8375;
  t8379 = t6522*t8362;
  t8382 = -1.*t6608*t8369;
  t8384 = t8379 + t8382;
  t8385 = -1.059658*t8384;
  t7074 = t1957*t7006;
  t7080 = -1.*t809*t2326*t2206;
  t7092 = t7074 + t7080;
  t8542 = -1.*t2707*t3368*t7092;
  t8544 = -1.*t3182*t7092*t2819;
  t8545 = t8542 + t8544;
  t8547 = t3182*t2707*t7092;
  t8548 = -1.*t3368*t7092*t2819;
  t8549 = t8547 + t8548;
  t8551 = t4450*t8545;
  t8552 = t3802*t8549;
  t8554 = t8551 + t8552;
  t8558 = t3802*t8545;
  t8560 = -1.*t4450*t8549;
  t8561 = t8558 + t8560;
  t8564 = -1.*t5980*t8554;
  t8565 = t5736*t8561;
  t8567 = t8564 + t8565;
  t8569 = t5736*t8554;
  t8570 = t5980*t8561;
  t8571 = t8569 + t8570;
  t8527 = 0.135*t1957;
  t8528 = -0.049*t2206;
  t8529 = t8527 + t8528;
  t8531 = 0.049*t1957;
  t8532 = t8531 + t2336;
  t8589 = t469*t8455;
  t8590 = t8205*t1489;
  t8591 = t8589 + t8590;
  t8593 = t1957*t8591;
  t8594 = -1.*t2326*t911*t2206;
  t8595 = t8593 + t8594;
  t8602 = -1.*t2707*t3368*t8595;
  t8603 = -1.*t3182*t8595*t2819;
  t8604 = t8602 + t8603;
  t8607 = t3182*t2707*t8595;
  t8608 = -1.*t3368*t8595*t2819;
  t8609 = t8607 + t8608;
  t8611 = t4450*t8604;
  t8612 = t3802*t8609;
  t8613 = t8611 + t8612;
  t8615 = t3802*t8604;
  t8616 = -1.*t4450*t8609;
  t8617 = t8615 + t8616;
  t8620 = -1.*t5980*t8613;
  t8621 = t5736*t8617;
  t8622 = t8620 + t8621;
  t8624 = t5736*t8613;
  t8625 = t5980*t8617;
  t8626 = t8624 + t8625;
  t8638 = t2326*t469*t1022;
  t8639 = t2326*t835*t1489;
  t8640 = t8638 + t8639;
  t8642 = t1957*t8640;
  t8643 = t917*t2206;
  t8644 = t8642 + t8643;
  t8652 = -1.*t2707*t3368*t8644;
  t8653 = -1.*t3182*t8644*t2819;
  t8654 = t8652 + t8653;
  t8656 = t3182*t2707*t8644;
  t8657 = -1.*t3368*t8644*t2819;
  t8658 = t8656 + t8657;
  t8660 = t4450*t8654;
  t8661 = t3802*t8658;
  t8662 = t8660 + t8661;
  t8664 = t3802*t8654;
  t8665 = -1.*t4450*t8658;
  t8666 = t8664 + t8665;
  t8668 = -1.*t5980*t8662;
  t8669 = t5736*t8666;
  t8670 = t8668 + t8669;
  t8672 = t5736*t8662;
  t8673 = t5980*t8666;
  t8674 = t8672 + t8673;
  t8692 = -1.*t2707*t7110;
  t8693 = -1.*t7179*t2819;
  t8694 = t8692 + t8693;
  t8697 = t3368*t8694;
  t8698 = t8697 + t7291;
  t8700 = t3182*t8694;
  t8701 = -1.*t3368*t7277;
  t8702 = t8700 + t8701;
  t8704 = -1.*t4450*t8698;
  t8705 = t3802*t8702;
  t8706 = t8704 + t8705;
  t8708 = t3802*t8698;
  t8709 = t4450*t8702;
  t8710 = t8708 + t8709;
  t8712 = t5980*t8706;
  t8713 = t5736*t8710;
  t8714 = t8712 + t8713;
  t8716 = t5736*t8706;
  t8717 = -1.*t5980*t8710;
  t8718 = t8716 + t8717;
  t8685 = 0.049*t2707;
  t8686 = t8685 + t2821;
  t8688 = -0.09*t2707;
  t8689 = -0.049*t2819;
  t8690 = t8688 + t8689;
  t8730 = t2326*t1957*t911;
  t8731 = t8591*t2206;
  t8732 = t8730 + t8731;
  t8734 = -1.*t2707*t8732;
  t8735 = -1.*t8459*t2819;
  t8736 = t8734 + t8735;
  t8738 = t2707*t8459;
  t8739 = -1.*t8732*t2819;
  t8740 = t8738 + t8739;
  t8742 = t3368*t8736;
  t8743 = t3182*t8740;
  t8744 = t8742 + t8743;
  t8746 = t3182*t8736;
  t8747 = -1.*t3368*t8740;
  t8748 = t8746 + t8747;
  t8750 = -1.*t4450*t8744;
  t8751 = t3802*t8748;
  t8752 = t8750 + t8751;
  t8754 = t3802*t8744;
  t8755 = t4450*t8748;
  t8756 = t8754 + t8755;
  t8758 = t5980*t8752;
  t8759 = t5736*t8756;
  t8760 = t8758 + t8759;
  t8762 = t5736*t8752;
  t8763 = -1.*t5980*t8756;
  t8764 = t8762 + t8763;
  t8776 = -1.*t1957*t917;
  t8777 = t8640*t2206;
  t8778 = t8776 + t8777;
  t8780 = -1.*t2707*t8778;
  t8781 = -1.*t8310*t2819;
  t8782 = t8780 + t8781;
  t8784 = t2707*t8310;
  t8785 = -1.*t8778*t2819;
  t8786 = t8784 + t8785;
  t8788 = t3368*t8782;
  t8789 = t3182*t8786;
  t8790 = t8788 + t8789;
  t8792 = t3182*t8782;
  t8793 = -1.*t3368*t8786;
  t8794 = t8792 + t8793;
  t8796 = -1.*t4450*t8790;
  t8797 = t3802*t8794;
  t8798 = t8796 + t8797;
  t8800 = t3802*t8790;
  t8801 = t4450*t8794;
  t8802 = t8800 + t8801;
  t8804 = t5980*t8798;
  t8805 = t5736*t8802;
  t8806 = t8804 + t8805;
  t8808 = t5736*t8798;
  t8809 = -1.*t5980*t8802;
  t8810 = t8808 + t8809;
  t8829 = -1.*t3182*t7226;
  t8830 = t8829 + t8701;
  t8832 = -1.*t4450*t7294;
  t8833 = t3802*t8830;
  t8834 = t8832 + t8833;
  t8836 = t4450*t8830;
  t8837 = t7383 + t8836;
  t8839 = t5980*t8834;
  t8840 = t5736*t8837;
  t8841 = t8839 + t8840;
  t8843 = t5736*t8834;
  t8844 = -1.*t5980*t8837;
  t8845 = t8843 + t8844;
  t8821 = -0.21*t3182;
  t8822 = -0.049*t3368;
  t8823 = t8821 + t8822;
  t8825 = 0.049*t3182;
  t8826 = t8825 + t3395;
  t8856 = t2707*t8732;
  t8857 = t8459*t2819;
  t8858 = t8856 + t8857;
  t8861 = -1.*t3368*t8858;
  t8862 = t8861 + t8743;
  t8864 = -1.*t3182*t8858;
  t8865 = t8864 + t8747;
  t8867 = -1.*t4450*t8862;
  t8868 = t3802*t8865;
  t8869 = t8867 + t8868;
  t8871 = t3802*t8862;
  t8872 = t4450*t8865;
  t8873 = t8871 + t8872;
  t8875 = t5980*t8869;
  t8876 = t5736*t8873;
  t8877 = t8875 + t8876;
  t8879 = t5736*t8869;
  t8880 = -1.*t5980*t8873;
  t8881 = t8879 + t8880;
  t8892 = t2707*t8778;
  t8893 = t8310*t2819;
  t8894 = t8892 + t8893;
  t8897 = -1.*t3368*t8894;
  t8898 = t8897 + t8789;
  t8900 = -1.*t3182*t8894;
  t8901 = t8900 + t8793;
  t8903 = -1.*t4450*t8898;
  t8904 = t3802*t8901;
  t8905 = t8903 + t8904;
  t8907 = t3802*t8898;
  t8908 = t4450*t8901;
  t8909 = t8907 + t8908;
  t8911 = t5980*t8905;
  t8912 = t5736*t8909;
  t8913 = t8911 + t8912;
  t8915 = t5736*t8905;
  t8916 = -1.*t5980*t8909;
  t8917 = t8915 + t8916;
  t8935 = -1.*t3802*t7336;
  t8936 = t8832 + t8935;
  t8939 = t5980*t8936;
  t8940 = t8939 + t7443;
  t8942 = t5736*t8936;
  t8943 = -1.*t5980*t7418;
  t8944 = t8942 + t8943;
  t8928 = 0.0016*t3802;
  t8929 = t8928 + t5025;
  t8931 = -0.2707*t3802;
  t8932 = -0.0016*t4450;
  t8933 = t8931 + t8932;
  t8956 = t3182*t8858;
  t8957 = t3368*t8740;
  t8958 = t8956 + t8957;
  t8960 = -1.*t3802*t8958;
  t8961 = t8867 + t8960;
  t8963 = -1.*t4450*t8958;
  t8964 = t8871 + t8963;
  t8966 = t5980*t8961;
  t8967 = t5736*t8964;
  t8968 = t8966 + t8967;
  t8970 = t5736*t8961;
  t8971 = -1.*t5980*t8964;
  t8972 = t8970 + t8971;
  t8984 = t3182*t8894;
  t8985 = t3368*t8786;
  t8986 = t8984 + t8985;
  t8988 = -1.*t3802*t8986;
  t8989 = t8903 + t8988;
  t8991 = -1.*t4450*t8986;
  t8992 = t8907 + t8991;
  t8994 = t5980*t8989;
  t8995 = t5736*t8992;
  t8996 = t8994 + t8995;
  t8998 = t5736*t8989;
  t8999 = -1.*t5980*t8992;
  t9000 = t8998 + t8999;
  t9019 = -1.*t5736*t7368;
  t9020 = t9019 + t8943;
  t7500 = t6522*t7453;
  t9011 = -0.7055*t5736;
  t9012 = 0.0184*t5980;
  t9013 = t9011 + t9012;
  t9015 = -0.0184*t5736;
  t9016 = t9015 + t6083;
  t9030 = t4450*t8862;
  t9031 = t3802*t8958;
  t9032 = t9030 + t9031;
  t9035 = -1.*t5980*t9032;
  t9036 = t9035 + t8967;
  t9038 = -1.*t5736*t9032;
  t9039 = t9038 + t8971;
  t9050 = t4450*t8898;
  t9051 = t3802*t8986;
  t9052 = t9050 + t9051;
  t9055 = -1.*t5980*t9052;
  t9056 = t9055 + t8995;
  t9058 = -1.*t5736*t9052;
  t9059 = t9058 + t8999;
  t9022 = -1.*t6608*t7453;
  t7516 = -1.*t6608*t7470;
  t7519 = t7500 + t7516;
  t9070 = 0.0216*t6522;
  t9071 = t9070 + t6701;
  t9073 = -1.1135*t6522;
  t9074 = -0.0216*t6608;
  t9075 = t9073 + t9074;
  t9041 = -1.*t6608*t9036;
  t9083 = t5736*t9032;
  t9084 = t5980*t8964;
  t9085 = t9083 + t9084;
  t9045 = t6522*t9036;
  t9061 = -1.*t6608*t9056;
  t9095 = t5736*t9052;
  t9096 = t5980*t8992;
  t9097 = t9095 + t9096;
  t9065 = t6522*t9056;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1456*t1494 + t1846*t2291 + t2632*t2872 + t3033*t3074 + t3435*t3577 + t3644*t3731 + t4685*t4833 + t5443*t5566 + t6167*t6352 + t6438*t6500 + t6636*t6664 + t6715*t6762 + 0.077577*(t6608*t6664 + t6522*t6762) - 1.059658*(t6522*t6664 - 1.*t6608*t6762) + t1292*t803 - 1.*t2326*t2388*t911 + 0.1305*(t1846*t1957 + t2206*t2326*t911);
  p_output1[10]=t1494*t6970 + t2291*t7006 + 0.1305*t7092 + t2872*t7110 + t3074*t7179 + t3435*t7226 + t3644*t7277 + t4685*t7294 + t5443*t7336 + t6167*t7368 + t6438*t7418 + t6636*t7453 + t6715*t7470 + 0.077577*(t6608*t7453 + t6522*t7470) - 1.059658*t7519 + t6942*t803 + t2326*t2388*t809;
  p_output1[11]=0;
  p_output1[12]=t2291*t7569 + t2872*t7646 + t3074*t7660 + t3435*t7673 + t3644*t7687 + t4685*t7696 + t5443*t7713 + t6167*t7721 + t6438*t7738 + t6636*t7751 + t6715*t7760 + 0.077577*(t6608*t7751 + t6522*t7760) - 1.059658*(t6522*t7751 - 1.*t6608*t7760) + t1022*t2326*t803*t809 + t1494*t2326*t809*t835 - 1.*t2388*t809*t917 + 0.1305*(t1957*t7569 + t2206*t809*t917);
  p_output1[13]=t2291*t7804 + t2872*t7830 + t3074*t7850 + t3435*t7860 + t3644*t7871 + t4685*t7881 + t5443*t7887 + t6167*t7896 + t6438*t7903 + t6636*t7916 + t6715*t7933 + 0.077577*(t6608*t7916 + t6522*t7933) - 1.059658*(t6522*t7916 - 1.*t6608*t7933) + t1022*t2326*t803*t911 + t1494*t2326*t835*t911 - 1.*t2388*t911*t917 + 0.1305*(t1957*t7804 + t2206*t911*t917);
  p_output1[14]=-1.*t2326*t2388 + t2291*t7972 + 0.1305*(t2206*t2326 + t1957*t7972) + t2872*t7985 + t3074*t7998 + t3435*t8004 + t3644*t8015 + t4685*t8027 + t5443*t8037 + t6167*t8047 + t6438*t8055 + t6636*t8060 + t6715*t8068 + 0.077577*(t6608*t8060 + t6522*t8068) - 1.059658*(t6522*t8060 - 1.*t6608*t8068) - 1.*t1022*t803*t917 - 1.*t1494*t835*t917;
  p_output1[15]=t6970*t803 + t1494*t8104 + 0.1305*t1957*t8111 + t2291*t8111 + t2206*t2872*t8111 + t3074*t8121 + t3435*t8130 + t3644*t8138 + t4685*t8144 + t5443*t8156 + t6167*t8162 + t6438*t8167 + t6636*t8179 + t6715*t8185 + 0.077577*(t6608*t8179 + t6522*t8185) - 1.059658*(t6522*t8179 - 1.*t6608*t8185);
  p_output1[16]=t1292*t1494 + t803*t8205 + 0.1305*t1957*t8216 + t2291*t8216 + t2206*t2872*t8216 + t3074*t8227 + t3435*t8235 + t3644*t8240 + t4685*t8245 + t5443*t8254 + t6167*t8260 + t6438*t8264 + t6636*t8271 + t6715*t8285 + 0.077577*(t6608*t8271 + t6522*t8285) - 1.059658*(t6522*t8271 - 1.*t6608*t8285);
  p_output1[17]=-1.*t1022*t1494*t2326 + t8313 + t8316 + t8317 + t8321 + t8325 + t8329 + t8335 + t8341 + t8349 + t2326*t803*t835 + t8359 + t8363 + t8371 + t8378 + t8385;
  p_output1[18]=0.135*t1489*t6942 - 0.135*t469*t6970 + 0.1305*t1957*t7179 + t2291*t7179 + t2206*t2872*t7179 + t3074*t8395 + t3435*t8403 + t3644*t8407 + t4685*t8412 + t5443*t8417 + t6167*t8425 + t6438*t8429 + t6636*t8435 + t6715*t8441 + 0.077577*(t6608*t8435 + t6522*t8441) - 1.059658*(t6522*t8435 - 1.*t6608*t8441);
  p_output1[19]=-0.135*t469*t8205 + 0.135*t1489*t8455 + 0.1305*t1957*t8459 + t2291*t8459 + t2206*t2872*t8459 + t3074*t8467 + t3435*t8471 + t3644*t8475 + t4685*t8480 + t5443*t8487 + t6167*t8494 + t6438*t8498 + t6636*t8502 + t6715*t8506 + 0.077577*(t6608*t8502 + t6522*t8506) - 1.059658*(t6522*t8502 - 1.*t6608*t8506);
  p_output1[20]=0.135*t1022*t1489*t2326 + t8313 + t8316 + t8317 + t8321 + t8325 + t8329 + t8335 + t8341 + t8349 - 0.135*t2326*t469*t835 + t8359 + t8363 + t8371 + t8378 + t8385;
  p_output1[21]=t2872*t7092 + t2707*t3435*t7092 - 1.*t2819*t3644*t7092 + 0.1305*(-1.*t2206*t7006 - 1.*t1957*t2326*t809) + t2326*t809*t8529 + t7006*t8532 + t4685*t8545 + t5443*t8549 + t6167*t8554 + t6438*t8561 + t6636*t8567 + t6715*t8571 + 0.077577*(t6608*t8567 + t6522*t8571) - 1.059658*(t6522*t8567 - 1.*t6608*t8571);
  p_output1[22]=t8532*t8591 + 0.1305*(t2620 - 1.*t2206*t8591) + t2872*t8595 + t2707*t3435*t8595 - 1.*t2819*t3644*t8595 + t4685*t8604 + t5443*t8609 + t6167*t8613 + t6438*t8617 + t6636*t8622 + t6715*t8626 + 0.077577*(t6608*t8622 + t6522*t8626) - 1.059658*(t6522*t8622 - 1.*t6608*t8626) + t2326*t8529*t911;
  p_output1[23]=t8532*t8640 + t2872*t8644 + t2707*t3435*t8644 - 1.*t2819*t3644*t8644 + t4685*t8654 + t5443*t8658 + t6167*t8662 + t6438*t8666 + t6636*t8670 + t6715*t8674 + 0.077577*(t6608*t8670 + t6522*t8674) - 1.059658*(t6522*t8670 - 1.*t6608*t8674) - 1.*t8529*t917 + 0.1305*(-1.*t2206*t8640 + t1957*t917);
  p_output1[24]=t3435*t7277 + t7179*t8686 + t7110*t8690 + t3644*t8694 + t5443*t8698 + t4685*t8702 + t6438*t8706 + t6167*t8710 + t6715*t8714 + t6636*t8718 - 1.059658*(-1.*t6608*t8714 + t6522*t8718) + 0.077577*(t6522*t8714 + t6608*t8718);
  p_output1[25]=t8459*t8686 + t8690*t8732 + t3644*t8736 + t3435*t8740 + t5443*t8744 + t4685*t8748 + t6438*t8752 + t6167*t8756 + t6715*t8760 + t6636*t8764 - 1.059658*(-1.*t6608*t8760 + t6522*t8764) + 0.077577*(t6522*t8760 + t6608*t8764);
  p_output1[26]=t8310*t8686 + t8690*t8778 + t3644*t8782 + t3435*t8786 + t5443*t8790 + t4685*t8794 + t6438*t8798 + t6167*t8802 + t6715*t8806 + t6636*t8810 - 1.059658*(-1.*t6608*t8806 + t6522*t8810) + 0.077577*(t6522*t8806 + t6608*t8810);
  p_output1[27]=t5443*t7294 + t7226*t8823 + t7277*t8826 + t4685*t8830 + t6438*t8834 + t6167*t8837 + t6715*t8841 + t6636*t8845 - 1.059658*(-1.*t6608*t8841 + t6522*t8845) + 0.077577*(t6522*t8841 + t6608*t8845);
  p_output1[28]=t8740*t8826 + t8823*t8858 + t5443*t8862 + t4685*t8865 + t6438*t8869 + t6167*t8873 + t6715*t8877 + t6636*t8881 - 1.059658*(-1.*t6608*t8877 + t6522*t8881) + 0.077577*(t6522*t8877 + t6608*t8881);
  p_output1[29]=t8786*t8826 + t8823*t8894 + t5443*t8898 + t4685*t8901 + t6438*t8905 + t6167*t8909 + t6715*t8913 + t6636*t8917 - 1.059658*(-1.*t6608*t8913 + t6522*t8917) + 0.077577*(t6522*t8913 + t6608*t8917);
  p_output1[30]=t6167*t7418 + t7294*t8929 + t7336*t8933 + t6438*t8936 + t6715*t8940 + t6636*t8944 - 1.059658*(-1.*t6608*t8940 + t6522*t8944) + 0.077577*(t6522*t8940 + t6608*t8944);
  p_output1[31]=t8862*t8929 + t8933*t8958 + t6438*t8961 + t6167*t8964 + t6715*t8968 + t6636*t8972 - 1.059658*(-1.*t6608*t8968 + t6522*t8972) + 0.077577*(t6522*t8968 + t6608*t8972);
  p_output1[32]=t8898*t8929 + t8933*t8986 + t6438*t8989 + t6167*t8992 + t6715*t8996 + t6636*t9000 - 1.059658*(-1.*t6608*t8996 + t6522*t9000) + 0.077577*(t6522*t8996 + t6608*t9000);
  p_output1[33]=t6715*t7453 + t7368*t9013 + t7418*t9016 + t6636*t9020 + 0.077577*(t7500 + t6608*t9020) - 1.059658*(t6522*t9020 + t9022);
  p_output1[34]=t8964*t9016 + t9013*t9032 + t6715*t9036 + t6636*t9039 - 1.059658*(t6522*t9039 + t9041) + 0.077577*(t6608*t9039 + t9045);
  p_output1[35]=t8992*t9016 + t9013*t9052 + t6715*t9056 + t6636*t9059 - 1.059658*(t6522*t9059 + t9061) + 0.077577*(t6608*t9059 + t9065);
  p_output1[36]=0.077577*t7519 - 1.059658*(-1.*t6522*t7470 + t9022) + t7453*t9071 + t7470*t9075;
  p_output1[37]=t9036*t9071 + t9075*t9085 - 1.059658*(t9041 - 1.*t6522*t9085) + 0.077577*(t9045 - 1.*t6608*t9085);
  p_output1[38]=t9056*t9071 + t9075*t9097 - 1.059658*(t9061 - 1.*t6522*t9097) + 0.077577*(t9065 - 1.*t6608*t9097);
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void J_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
