// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__7\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__2;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__3;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__4;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__5;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__6;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__7;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__8;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__9;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__10;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__11;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__12;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__13;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__14;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__15;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__16;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__17;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__18;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__19;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__20;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__21;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__22;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__23;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__24;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__25;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__26;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__27;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__28;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__29;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__30;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__31;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__32;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__33;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__34;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__35;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__36;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__37;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__38;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__39;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__40;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__41;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__42;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__43;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__44;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__45;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__46;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__47;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__48;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__49;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__50;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__51;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__52;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__53;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__54;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__55;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__56;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__57;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__58;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__59;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__60;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__61;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__62;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__63;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__64;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__65;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__66;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__67;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__68;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__69;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__70;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__71;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__72;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__73;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__74;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__75;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__76;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__77;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__78;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__79;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__80;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__81;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__82;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__83;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__84;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__85;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__86;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__87;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__88;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__89;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__90;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__91;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__92;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__93;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__94;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__95;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__96;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__97;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__98;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__99;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__100;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__101;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__102;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__103;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__104;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__105;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__106;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__107;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__108;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__109;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__110;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__111;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__112;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__113;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__114;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__115;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__116;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__117;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__118;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__119;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__120;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__121;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__122;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__123;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__124;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__125;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__126;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__127;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__128;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__129;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__130;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__131;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__132;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__133;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__134;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__135;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__136;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__137;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__138;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__139;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__140;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__141;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__142;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__143;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__144;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__145;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__146;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__147;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__148;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__149;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__150;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__151;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__152;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__153;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__154;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__155;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__156;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__157;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__158;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__159;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__160;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__161;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__162;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__163;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__164;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__165;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__166;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__167;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__168;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__169;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__170;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__171;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__172;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__173;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__174;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__175;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__176;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__177;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__178;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__179;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__180;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__181;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__182;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__183;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__184;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__185;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__186;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__187;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__188;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__189;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__190;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__191;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__192;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__193;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__194;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__195;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__196;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__197;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__198;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__199;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__200;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__201;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__202;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__203;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__204;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__205;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__206;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__207;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__208;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__209;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__210;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__211;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__212;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__213;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__214;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__215;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__216;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__217;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__218;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__219;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__220;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__221;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__222;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__223;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__224;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__225;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__226;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__227;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__228;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__229;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__230;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__231;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__232;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__233;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__234;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__235;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__236;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__237;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__238;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__239;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__240;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__241;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__242;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__243;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__244;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__245;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__246;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__247;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__248;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__249;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__250;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__251;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__252;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__253;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__254;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__255;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__256;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__257;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__258;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__259;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__260;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__261;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__262;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__263;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__264;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__265;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__266;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__267;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__268;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__269;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__270;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__271;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__272;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__273;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__274;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__275;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__276;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__277;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__278;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__279;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__280;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__281;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__282;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__283;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__284;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__285;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__286;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__287;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__288;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__289;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__290;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__291;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__292;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__293;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__294;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__295;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__296;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__297;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__298;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__299;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__300;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__301;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__302;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__303;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__304;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__305;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__306;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__307;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__308;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__309;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__310;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__311;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__312;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__313;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__314;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__315;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__316;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__317;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__318;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__319;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__320;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__321;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__322;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__323;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__324;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__325;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__326;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__327;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__328;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__329;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__330;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__331;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__332;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__333;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__334;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__335;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__336;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__337;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__338;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__339;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__340;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__341;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__342;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__343;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__344;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__345;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__346;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__347;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__348;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__349;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__350;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__351;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__352;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__353;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__354;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__355;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__356;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__357;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__358;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__359;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__360;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__361;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__362;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__363;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__364;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__365;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__366;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__367;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__368;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__369;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__370;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__371;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__372;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__373;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__374;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__375;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__376;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__377;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__378;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__379;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__380;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__381;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__382;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__383;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__384;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__385;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__386;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__387;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__388;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__389;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__390;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__391;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__392;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__393;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__394;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__395;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__396;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__397;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__398;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__399;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__400;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__401;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__402;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__403;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__404;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__405;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__406;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__407;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__408;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__409;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__410;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__411;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__412;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__413;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__414;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__415;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__416;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__417;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__418;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__419;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__420;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__421;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__422;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__423;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__424;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__425;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__426;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__427;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__428;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__429;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__430;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__431;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__432;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__433;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__434;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__435;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__436;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__437;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__438;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__439;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__440;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__441;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__442;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__443;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__444;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__445;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__446;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__447;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__448;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__449;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__450;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__451;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__452;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__453;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__454;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__455;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__456;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__457;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__458;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__459;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__460;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__461;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__462;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__463;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__464;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__465;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__466;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__467;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__468;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__469;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__470;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__471;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__472;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__473;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__474;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__475;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__476;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__477;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__478;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__479;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__480;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__481;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__482;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__483;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__484;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__485;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__486;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__487;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__488;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__489;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__490;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__491;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__492;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__493;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__494;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__495;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__496;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__497;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__498;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__499;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__500;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__501;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__502;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__503;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__504;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__505;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__506;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__507;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__508;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__509;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__510;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__511;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__512;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__513;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__514;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__515;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__516;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__517;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__518;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__519;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__520;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__521;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__522;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__523;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__524;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__525;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__526;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__527;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__528;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__529;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__530;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__531;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__532;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__533;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__534;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__535;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__536;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__537;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__538;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__539;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__540;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__541;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__542;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__543;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__544;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__545;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__546;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__547;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__548;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__549;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__550;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__551;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__552;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__553;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__554;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__555;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__556;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__557;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__558;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__559;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__560;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__561;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__562;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__563;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__564;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__565;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__566;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__567;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__568;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__569;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__570;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__571;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__572;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__573;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__574;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__575;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__576;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__577;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__578;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__579;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__580;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__581;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__582;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__583;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__584;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__585;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__586;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__587;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__588;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__589;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__590;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__591;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__592;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__593;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__594;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__595;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__596;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__597;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__598;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__599;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__600;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__601;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__602;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__603;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__604;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__605;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__606;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__607;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__608;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__609;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__610;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__611;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__612;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__613;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__614;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__615;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__616;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__617;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__618;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__619;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__620;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__621;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__622;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__623;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__624;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__625;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__626;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__627;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__628;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__629;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__630;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__631;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__632;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__633;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__634;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__635;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__636;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__637;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__638;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__639;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__640;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__641;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__642;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__643;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__644;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__645;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__646;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__647;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__648;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__649;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__650;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__651;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__652;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__653;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__654;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__655;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__656;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__657;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__658;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__659;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__660;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__661;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__662;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__663;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__664;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__665;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__666;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__667;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__668;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__669;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__670;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__671;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__672;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__673;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__674;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__675;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__676;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__677;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__678;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__679;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__680;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__681;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__682;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__683;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__684;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__685;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__686;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__687;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__688;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__689;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__690;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__691;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__692;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__693;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__694;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__695;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__696;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__697;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__698;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__699;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__700;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__701;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__702;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__703;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__704;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__705;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__706;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__707;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__708;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__709;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__710;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__711;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__712;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__713;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__714;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__715;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__716;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__717;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__718;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__719;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__720;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__721;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__722;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__723;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__724;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__725;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__726;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__727;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__728;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__729;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__730;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__731;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__732;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__733;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__734;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__735;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__736;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__737;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__738;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__739;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__740;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__741;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__742;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__743;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__744;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__745;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__746;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__747;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__748;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__749;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__750;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__751;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__752;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__753;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__754;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__755;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__756;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__757;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__758;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__759;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__760;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__761;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__762;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__763;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__764;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__765;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__766;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__767;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__768;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__769;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__770;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__771;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__772;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__773;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__774;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__775;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__776;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__777;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__778;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__779;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__780;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__781;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__782;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__783;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__784;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__785;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__786;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__787;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__788;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__789;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__790;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__791;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__792;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__793;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__794;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__795;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__796;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__797;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__798;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__799;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__800;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__801;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__802;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__803;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__804;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__805;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__806;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__807;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__808;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__809;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__810;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__811;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__812;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__813;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__814;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__815;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__816;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__817;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__818;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__819;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__820;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__821;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__822;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__823;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__824;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__825;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__826;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__827;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__828;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__829;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__830;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__831;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__832;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__833;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__834;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__835;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__836;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__837;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__838;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__839;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__840;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__841;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__842;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__843;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__844;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__845;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__846;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__847;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__848;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__849;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__850;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__851;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__852;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__853;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__854;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__855;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__856;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__857;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__858;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__859;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__860;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__861;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__862;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__863;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__864;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__865;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__866;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__867;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__868;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__869;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__870;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__871;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__872;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__873;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__874;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__875;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__876;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__877;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__878;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__879;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__880;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__881;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__882;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__883;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__884;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__885;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__886;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__887;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__888;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__889;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__890;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__891;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__892;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__893;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__894;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__895;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__896;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__897;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__898;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__899;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__900;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__901;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__902;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__903;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__904;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__905;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__906;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__907;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__908;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__909;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__910;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__911;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__912;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__913;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__914;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__915;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__916;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__917;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__918;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__919;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__920;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__921;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__922;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__923;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__924;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__925;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__926;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__927;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__928;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__929;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__930;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__931;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__932;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__933;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__934;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__935;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__936;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__937;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__938;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__939;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__940;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__941;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__942;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__943;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__944;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__945;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__946;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__947;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__948;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__949;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__950;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__951;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__952;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__953;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__954;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__955;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__956;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__957;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__958;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__959;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__960;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__961;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__962;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__963;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__964;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__965;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__966;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__967;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__968;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__969;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__970;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__971;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__972;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__973;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__974;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__975;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__976;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__977;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__978;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__979;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__980;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__981;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__982;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__983;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__984;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__985;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__986;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__987;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__988;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__989;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__990;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__991;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__992;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__993;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__994;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__995;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__996;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__997;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__998;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__999;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1000;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1001;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1002;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1003;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1004;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1005;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1006;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1007;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1008;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1009;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1010;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1011;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1012;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1013;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1014;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1015;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1016;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1017;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1018;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1019;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1020;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1021;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1022;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1023;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1024;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1025;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1026;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1027;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1028;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1029;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1030;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1031;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1032;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1033;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1034;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1035;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1036;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1037;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1038;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1039;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1040;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1041;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1042;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1043;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1044;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1045;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1046;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1047;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1048;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1049;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1050;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1051;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1052;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1053;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1054;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1055;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1056;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1057;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1058;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1059;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1060;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1061;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1062;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1063;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1064;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1065;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1066;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1067;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1068;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1069;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1070;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1071;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1072;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1073;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1074;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1075;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1076;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1077;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1078;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1079;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1080;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1081;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1082;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1083;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1084;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1085;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1086;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1087;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1088;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1089;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1090;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1091;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1092;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1093;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1094;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1095;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1096;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1097;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1098;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1099;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1100;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1101;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1102;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1103;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1104;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1105;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1106;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1107;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1108;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1109;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1110;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1111;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1112;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1113;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1114;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1115;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1116;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1117;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1118;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1119;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1120;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1121;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1122;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1123;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1124;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1125;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1126;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1127;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1128;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1129;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1130;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1131;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1132;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1133;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1134;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1135;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1136;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1137;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1138;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1139;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1140;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1141;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1142;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1143;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1144;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1145;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1146;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1147;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1148;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1149;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1150;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1151;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1152;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1153;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1154;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1155;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1156;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1157;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1158;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1159;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1160;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1161;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1162;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1163;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1164;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1165;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1166;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1167;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1168;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1169;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1170;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1171;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1172;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1173;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1174;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1175;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1176;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1177;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1178;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1179;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1180;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1181;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1182;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1183;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1184;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1185;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1186;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1187;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1188;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1189;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1190;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1191;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1192;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1193;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1194;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1195;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1196;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1197;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1198;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1199;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1200;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1201;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1202;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1203;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1204;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1205;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1206;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1207;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1208;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1209;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1210;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1211;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1212;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1213;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1214;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1215;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1216;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1217;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1218;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1219;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1220;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1221;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1222;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1223;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1224;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1225;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1226;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1227;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1228;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1229;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1230;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1231;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1232;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1233;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1234;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1235;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1236;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1237;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1238;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1239;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1240;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1241;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1242;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1243;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1244;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1245;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1246;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1247;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1248;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1249;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1250;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1251;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1252;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1253;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1254;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1255;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1256;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1257;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1258;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1259;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1260;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1261;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1262;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1263;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1264;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1265;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1266;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1267;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1268;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1269;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1270;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1271;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1272;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1273;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1274;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1275;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1276;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1277;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1278;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1279;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1280;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1281;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1282;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1283;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1284;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1285;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1286;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1287;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1288;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1289;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1290;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1291;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1292;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1293;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1294;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1295;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1296;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1297;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1298;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1299;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1300;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1301;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1302;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1303;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1304;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1305;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1306;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1307;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1308;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1309;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1310;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1311;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1312;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1313;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1314;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1315;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1316;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1317;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1318;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1319;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1320;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1321;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1322;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1323;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1324;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1325;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1326;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1327;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1328;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1329;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1330;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1331;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1332;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1333;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1334;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1335;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1336;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1337;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1338;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1339;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1340;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1341;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1342;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1343;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1344;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1345;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1346;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1347;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1348;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1349;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1350;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1351;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1352;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1353;
    VlWide<3>/*95:0*/ __Vtemp_h9f28c8e0__1354;
    // Body
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__0, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__2, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__3, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__4, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v596 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__0[2U] 
                                              >> 0xcU) 
                                             & (0x254U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x254U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x254U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__2[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x254U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__3[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__4[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x254U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__5, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__6, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__7, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__8, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__9, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v597 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__5[2U] 
                                              >> 0xcU) 
                                             & (0x255U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x255U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x255U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__6[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__7[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x255U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__8[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__9[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x255U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__10, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__11, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__12, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__13, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__14, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v598 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__10[2U] 
                                              >> 0xcU) 
                                             & (0x256U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x256U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x256U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__11[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__12[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x256U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__13[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__14[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x256U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__15, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__16, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__17, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__18, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__19, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v599 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__15[2U] 
                                              >> 0xcU) 
                                             & (0x257U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x257U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x257U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__16[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__17[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x257U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__18[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__19[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x257U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__20, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__21, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__22, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__23, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__24, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v600 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__20[2U] 
                                              >> 0xcU) 
                                             & (0x258U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x258U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x258U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__21[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__22[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x258U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__23[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__24[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x258U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__25, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__26, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__27, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__28, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__29, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v601 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__25[2U] 
                                              >> 0xcU) 
                                             & (0x259U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x259U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x259U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__26[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__27[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x259U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__28[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__29[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x259U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__30, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__31, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__32, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__33, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__34, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v602 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__30[2U] 
                                              >> 0xcU) 
                                             & (0x25aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__31[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__32[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__33[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__34[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__35, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__36, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__37, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__38, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__39, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v603 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__35[2U] 
                                              >> 0xcU) 
                                             & (0x25bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__36[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__37[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__38[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__39[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__40, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__41, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__42, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__43, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__44, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v604 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__40[2U] 
                                              >> 0xcU) 
                                             & (0x25cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__41[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__42[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__43[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__44[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__45, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__46, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__47, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__48, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__49, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v605 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__45[2U] 
                                              >> 0xcU) 
                                             & (0x25dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__46[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__47[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__48[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__49[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__50, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__51, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__52, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__53, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__54, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v606 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__50[2U] 
                                              >> 0xcU) 
                                             & (0x25eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__51[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__52[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__53[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__54[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__55, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__56, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__57, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__58, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__59, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v607 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__55[2U] 
                                              >> 0xcU) 
                                             & (0x25fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x25fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__56[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__57[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x25fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__58[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__59[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x25fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__60, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__61, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__62, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__63, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__64, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v608 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__60[2U] 
                                              >> 0xcU) 
                                             & (0x260U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x260U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x260U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__61[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__62[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x260U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__63[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__64[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x260U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__65, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__66, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__67, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__68, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__69, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v609 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__65[2U] 
                                              >> 0xcU) 
                                             & (0x261U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x261U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x261U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__66[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__67[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x261U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__68[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__69[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x261U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__70, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__71, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__72, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__73, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__74, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v610 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__70[2U] 
                                              >> 0xcU) 
                                             & (0x262U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x262U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x262U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__71[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__72[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x262U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__73[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__74[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x262U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__75, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__76, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__77, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__78, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__79, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v611 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__75[2U] 
                                              >> 0xcU) 
                                             & (0x263U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x263U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x263U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__76[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__77[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x263U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__78[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__79[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x263U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__80, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__81, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__82, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__83, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__84, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v612 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__80[2U] 
                                              >> 0xcU) 
                                             & (0x264U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x264U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x264U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__81[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__82[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x264U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__83[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__84[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x264U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__85, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__86, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__87, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__88, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__89, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v613 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__85[2U] 
                                              >> 0xcU) 
                                             & (0x265U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x265U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x265U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__86[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__87[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x265U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__88[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__89[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x265U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__90, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__91, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__92, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__93, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__94, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v614 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__90[2U] 
                                              >> 0xcU) 
                                             & (0x266U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x266U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x266U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__91[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__92[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x266U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__93[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__94[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x266U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__95, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__96, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__97, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__98, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__99, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v615 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__95[2U] 
                                              >> 0xcU) 
                                             & (0x267U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x267U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x267U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__96[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__97[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x267U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__98[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__99[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x267U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__100, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__101, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__102, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__103, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__104, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v616 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__100[2U] 
                                              >> 0xcU) 
                                             & (0x268U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x268U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x268U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__101[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__102[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x268U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__103[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__104[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x268U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__105, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__106, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__107, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__108, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__109, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v617 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__105[2U] 
                                              >> 0xcU) 
                                             & (0x269U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x269U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x269U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__106[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__107[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x269U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__108[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__109[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x269U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__110, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__111, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__112, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__113, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__114, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v618 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__110[2U] 
                                              >> 0xcU) 
                                             & (0x26aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__111[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__112[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__113[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__114[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__115, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__116, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__117, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__118, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__119, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v619 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__115[2U] 
                                              >> 0xcU) 
                                             & (0x26bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__116[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__117[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__118[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__119[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__120, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__121, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__122, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__123, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__124, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v620 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__120[2U] 
                                              >> 0xcU) 
                                             & (0x26cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__121[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__122[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__123[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__124[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__125, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__126, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__127, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__128, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__129, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v621 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__125[2U] 
                                              >> 0xcU) 
                                             & (0x26dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__126[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__127[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__128[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__129[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__130, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__131, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__132, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__133, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__134, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v622 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__130[2U] 
                                              >> 0xcU) 
                                             & (0x26eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__131[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__132[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__133[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__134[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__135, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__136, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__137, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__138, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__139, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v623 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__135[2U] 
                                              >> 0xcU) 
                                             & (0x26fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x26fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__136[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__137[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x26fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__138[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__139[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x26fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__140, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__141, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__142, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__143, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__144, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v624 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__140[2U] 
                                              >> 0xcU) 
                                             & (0x270U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x270U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x270U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__141[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__142[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x270U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__143[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__144[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x270U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__145, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__146, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__147, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__148, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__149, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v625 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__145[2U] 
                                              >> 0xcU) 
                                             & (0x271U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x271U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x271U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__146[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__147[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x271U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__148[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__149[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x271U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__150, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__151, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__152, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__153, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__154, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v626 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__150[2U] 
                                              >> 0xcU) 
                                             & (0x272U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x272U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x272U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__151[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__152[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x272U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__153[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__154[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x272U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__155, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__156, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__157, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__158, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__159, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v627 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__155[2U] 
                                              >> 0xcU) 
                                             & (0x273U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x273U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x273U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__156[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__157[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x273U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__158[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__159[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x273U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__160, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__161, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__162, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__163, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__164, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v628 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__160[2U] 
                                              >> 0xcU) 
                                             & (0x274U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x274U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x274U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__161[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__162[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x274U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__163[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__164[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x274U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__165, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__166, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__167, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__168, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__169, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v629 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__165[2U] 
                                              >> 0xcU) 
                                             & (0x275U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x275U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x275U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__166[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__167[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x275U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__168[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__169[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x275U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__170, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__171, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__172, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__173, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__174, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v630 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__170[2U] 
                                              >> 0xcU) 
                                             & (0x276U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x276U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x276U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__171[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__172[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x276U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__173[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__174[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x276U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__175, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__176, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__177, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__178, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__179, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v631 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__175[2U] 
                                              >> 0xcU) 
                                             & (0x277U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x277U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x277U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__176[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__177[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x277U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__178[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__179[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x277U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__180, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__181, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__182, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__183, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__184, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v632 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__180[2U] 
                                              >> 0xcU) 
                                             & (0x278U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x278U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x278U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__181[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__182[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x278U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__183[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__184[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x278U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__185, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__186, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__187, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__188, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__189, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v633 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__185[2U] 
                                              >> 0xcU) 
                                             & (0x279U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x279U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x279U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__186[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__187[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x279U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__188[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__189[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x279U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__190, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__191, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__192, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__193, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__194, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v634 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__190[2U] 
                                              >> 0xcU) 
                                             & (0x27aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__191[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__192[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__193[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__194[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__195, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__196, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__197, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__198, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__199, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v635 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__195[2U] 
                                              >> 0xcU) 
                                             & (0x27bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__196[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__197[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__198[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__199[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__200, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__201, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__202, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__203, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__204, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v636 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__200[2U] 
                                              >> 0xcU) 
                                             & (0x27cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__201[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__202[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__203[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__204[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__205, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__206, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__207, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__208, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__209, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v637 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__205[2U] 
                                              >> 0xcU) 
                                             & (0x27dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__206[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__207[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__208[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__209[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__210, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__211, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__212, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__213, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__214, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v638 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__210[2U] 
                                              >> 0xcU) 
                                             & (0x27eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__211[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__212[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__213[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__214[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__215, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__216, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__217, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__218, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__219, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v639 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__215[2U] 
                                              >> 0xcU) 
                                             & (0x27fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x27fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__216[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__217[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x27fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__218[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__219[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x27fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__220, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__221, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__222, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__223, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__224, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v640 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__220[2U] 
                                              >> 0xcU) 
                                             & (0x280U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x280U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x280U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__221[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__222[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x280U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__223[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__224[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x280U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__225, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__226, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__227, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__228, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__229, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v641 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__225[2U] 
                                              >> 0xcU) 
                                             & (0x281U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x281U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x281U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__226[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__227[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x281U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__228[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__229[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x281U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__230, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__231, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__232, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__233, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__234, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v642 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__230[2U] 
                                              >> 0xcU) 
                                             & (0x282U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x282U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x282U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__231[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__232[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x282U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__233[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__234[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x282U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__235, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__236, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__237, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__238, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__239, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v643 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__235[2U] 
                                              >> 0xcU) 
                                             & (0x283U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x283U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x283U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__236[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__237[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x283U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__238[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__239[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x283U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__240, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__241, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__242, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__243, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__244, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v644 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__240[2U] 
                                              >> 0xcU) 
                                             & (0x284U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x284U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x284U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__241[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__242[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x284U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__243[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__244[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x284U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__245, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__246, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__247, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__248, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__249, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v645 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__245[2U] 
                                              >> 0xcU) 
                                             & (0x285U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x285U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x285U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__246[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__247[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x285U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__248[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__249[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x285U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__250, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__251, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__252, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__253, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__254, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v646 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__250[2U] 
                                              >> 0xcU) 
                                             & (0x286U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x286U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x286U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__251[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__252[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x286U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__253[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__254[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x286U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__255, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__256, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__257, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__258, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__259, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v647 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__255[2U] 
                                              >> 0xcU) 
                                             & (0x287U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x287U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x287U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__256[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__257[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x287U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__258[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__259[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x287U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__260, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__261, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__262, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__263, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__264, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v648 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__260[2U] 
                                              >> 0xcU) 
                                             & (0x288U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x288U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x288U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__261[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__262[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x288U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__263[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__264[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x288U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__265, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__266, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__267, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__268, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__269, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v649 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__265[2U] 
                                              >> 0xcU) 
                                             & (0x289U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x289U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x289U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__266[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__267[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x289U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__268[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__269[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x289U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__270, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__271, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__272, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__273, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__274, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v650 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__270[2U] 
                                              >> 0xcU) 
                                             & (0x28aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__271[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__272[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__273[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__274[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__275, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__276, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__277, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__278, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__279, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v651 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__275[2U] 
                                              >> 0xcU) 
                                             & (0x28bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__276[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__277[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__278[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__279[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__280, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__281, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__282, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__283, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__284, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v652 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__280[2U] 
                                              >> 0xcU) 
                                             & (0x28cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__281[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__282[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__283[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__284[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__285, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__286, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__287, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__288, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__289, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v653 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__285[2U] 
                                              >> 0xcU) 
                                             & (0x28dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__286[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__287[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__288[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__289[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__290, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__291, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__292, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__293, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__294, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v654 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__290[2U] 
                                              >> 0xcU) 
                                             & (0x28eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__291[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__292[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__293[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__294[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__295, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__296, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__297, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__298, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__299, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v655 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__295[2U] 
                                              >> 0xcU) 
                                             & (0x28fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x28fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__296[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__297[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x28fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__298[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__299[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x28fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__300, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__301, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__302, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__303, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__304, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v656 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__300[2U] 
                                              >> 0xcU) 
                                             & (0x290U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x290U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x290U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__301[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__302[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x290U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__303[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__304[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x290U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__305, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__306, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__307, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__308, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__309, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v657 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__305[2U] 
                                              >> 0xcU) 
                                             & (0x291U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x291U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x291U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__306[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__307[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x291U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__308[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__309[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x291U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__310, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__311, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__312, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__313, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__314, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v658 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__310[2U] 
                                              >> 0xcU) 
                                             & (0x292U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x292U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x292U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__311[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__312[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x292U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__313[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__314[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x292U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__315, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__316, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__317, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__318, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__319, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v659 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__315[2U] 
                                              >> 0xcU) 
                                             & (0x293U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x293U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x293U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__316[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__317[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x293U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__318[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__319[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x293U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__320, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__321, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__322, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__323, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__324, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v660 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__320[2U] 
                                              >> 0xcU) 
                                             & (0x294U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x294U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x294U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__321[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__322[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x294U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__323[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__324[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x294U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__325, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__326, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__327, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__328, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__329, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v661 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__325[2U] 
                                              >> 0xcU) 
                                             & (0x295U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x295U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x295U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__326[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__327[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x295U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__328[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__329[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x295U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__330, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__331, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__332, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__333, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__334, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v662 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__330[2U] 
                                              >> 0xcU) 
                                             & (0x296U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x296U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x296U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__331[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__332[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x296U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__333[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__334[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x296U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__335, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__336, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__337, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__338, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__339, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v663 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__335[2U] 
                                              >> 0xcU) 
                                             & (0x297U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x297U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x297U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__336[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__337[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x297U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__338[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__339[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x297U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__340, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__341, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__342, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__343, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__344, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v664 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__340[2U] 
                                              >> 0xcU) 
                                             & (0x298U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x298U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x298U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__341[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__342[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x298U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__343[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__344[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x298U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__345, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__346, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__347, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__348, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__349, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v665 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__345[2U] 
                                              >> 0xcU) 
                                             & (0x299U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x299U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x299U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__346[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__347[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x299U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__348[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__349[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x299U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__350, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__351, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__352, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__353, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__354, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v666 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__350[2U] 
                                              >> 0xcU) 
                                             & (0x29aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__351[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__352[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__353[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__354[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__355, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__356, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__357, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__358, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__359, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v667 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__355[2U] 
                                              >> 0xcU) 
                                             & (0x29bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__356[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__357[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__358[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__359[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__360, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__361, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__362, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__363, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__364, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v668 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__360[2U] 
                                              >> 0xcU) 
                                             & (0x29cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__361[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__362[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__363[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__364[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__365, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__366, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__367, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__368, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__369, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v669 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__365[2U] 
                                              >> 0xcU) 
                                             & (0x29dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__366[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__367[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__368[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__369[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__370, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__371, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__372, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__373, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__374, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v670 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__370[2U] 
                                              >> 0xcU) 
                                             & (0x29eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__371[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__372[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__373[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__374[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__375, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__376, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__377, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__378, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__379, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v671 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__375[2U] 
                                              >> 0xcU) 
                                             & (0x29fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x29fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__376[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__377[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x29fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__378[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__379[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x29fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__380, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__381, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__382, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__383, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__384, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v672 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__380[2U] 
                                              >> 0xcU) 
                                             & (0x2a0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__381[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__382[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__383[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__384[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__385, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__386, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__387, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__388, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__389, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v673 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__385[2U] 
                                              >> 0xcU) 
                                             & (0x2a1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__386[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__387[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__388[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__389[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__390, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__391, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__392, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__393, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__394, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v674 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__390[2U] 
                                              >> 0xcU) 
                                             & (0x2a2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__391[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__392[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__393[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__394[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__395, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__396, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__397, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__398, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__399, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v675 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__395[2U] 
                                              >> 0xcU) 
                                             & (0x2a3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__396[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__397[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__398[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__399[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__400, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__401, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__402, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__403, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__404, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v676 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__400[2U] 
                                              >> 0xcU) 
                                             & (0x2a4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__401[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__402[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__403[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__404[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__405, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__406, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__407, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__408, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__409, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v677 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__405[2U] 
                                              >> 0xcU) 
                                             & (0x2a5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__406[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__407[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__408[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__409[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__410, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__411, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__412, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__413, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__414, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v678 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__410[2U] 
                                              >> 0xcU) 
                                             & (0x2a6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__411[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__412[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__413[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__414[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__415, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__416, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__417, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__418, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__419, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v679 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__415[2U] 
                                              >> 0xcU) 
                                             & (0x2a7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__416[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__417[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__418[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__419[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__420, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__421, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__422, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__423, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__424, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v680 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__420[2U] 
                                              >> 0xcU) 
                                             & (0x2a8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__421[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__422[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__423[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__424[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__425, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__426, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__427, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__428, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__429, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v681 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__425[2U] 
                                              >> 0xcU) 
                                             & (0x2a9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2a9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__426[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__427[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2a9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__428[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__429[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2a9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__430, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__431, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__432, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__433, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__434, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v682 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__430[2U] 
                                              >> 0xcU) 
                                             & (0x2aaU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2aaU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2aaU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__431[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__432[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2aaU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__433[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__434[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2aaU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__435, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__436, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__437, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__438, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__439, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v683 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__435[2U] 
                                              >> 0xcU) 
                                             & (0x2abU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2abU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2abU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__436[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__437[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2abU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__438[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__439[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2abU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__440, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__441, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__442, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__443, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__444, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v684 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__440[2U] 
                                              >> 0xcU) 
                                             & (0x2acU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2acU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2acU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__441[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__442[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2acU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__443[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__444[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2acU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__445, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__446, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__447, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__448, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__449, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v685 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__445[2U] 
                                              >> 0xcU) 
                                             & (0x2adU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2adU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2adU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__446[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__447[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2adU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__448[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__449[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2adU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__450, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__451, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__452, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__453, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__454, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v686 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__450[2U] 
                                              >> 0xcU) 
                                             & (0x2aeU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2aeU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2aeU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__451[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__452[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2aeU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__453[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__454[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2aeU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__455, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__456, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__457, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__458, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__459, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v687 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__455[2U] 
                                              >> 0xcU) 
                                             & (0x2afU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2afU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2afU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__456[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__457[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2afU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__458[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__459[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2afU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__460, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__461, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__462, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__463, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__464, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v688 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__460[2U] 
                                              >> 0xcU) 
                                             & (0x2b0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__461[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__462[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__463[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__464[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__465, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__466, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__467, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__468, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__469, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v689 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__465[2U] 
                                              >> 0xcU) 
                                             & (0x2b1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__466[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__467[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__468[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__469[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__470, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__471, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__472, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__473, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__474, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v690 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__470[2U] 
                                              >> 0xcU) 
                                             & (0x2b2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__471[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__472[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__473[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__474[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__475, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__476, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__477, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__478, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__479, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v691 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__475[2U] 
                                              >> 0xcU) 
                                             & (0x2b3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__476[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__477[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__478[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__479[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__480, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__481, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__482, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__483, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__484, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v692 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__480[2U] 
                                              >> 0xcU) 
                                             & (0x2b4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__481[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__482[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__483[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__484[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__485, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__486, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__487, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__488, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__489, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v693 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__485[2U] 
                                              >> 0xcU) 
                                             & (0x2b5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__486[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__487[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__488[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__489[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__490, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__491, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__492, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__493, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__494, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v694 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__490[2U] 
                                              >> 0xcU) 
                                             & (0x2b6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__491[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__492[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__493[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__494[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__495, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__496, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__497, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__498, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__499, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v695 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__495[2U] 
                                              >> 0xcU) 
                                             & (0x2b7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__496[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__497[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__498[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__499[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__500, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__501, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__502, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__503, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__504, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v696 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__500[2U] 
                                              >> 0xcU) 
                                             & (0x2b8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__501[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__502[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__503[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__504[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__505, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__506, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__507, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__508, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__509, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v697 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__505[2U] 
                                              >> 0xcU) 
                                             & (0x2b9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2b9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__506[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__507[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2b9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__508[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__509[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2b9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__510, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__511, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__512, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__513, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__514, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v698 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__510[2U] 
                                              >> 0xcU) 
                                             & (0x2baU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2baU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2baU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__511[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__512[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2baU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__513[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__514[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2baU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__515, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__516, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__517, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__518, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__519, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v699 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__515[2U] 
                                              >> 0xcU) 
                                             & (0x2bbU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2bbU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__516[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__517[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__518[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__519[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2bbU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__520, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__521, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__522, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__523, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__524, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v700 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__520[2U] 
                                              >> 0xcU) 
                                             & (0x2bcU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2bcU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__521[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__522[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__523[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__524[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2bcU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__525, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__526, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__527, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__528, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__529, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v701 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__525[2U] 
                                              >> 0xcU) 
                                             & (0x2bdU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2bdU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__526[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__527[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__528[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__529[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2bdU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__530, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__531, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__532, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__533, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__534, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v702 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__530[2U] 
                                              >> 0xcU) 
                                             & (0x2beU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2beU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2beU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__531[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__532[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2beU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__533[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__534[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2beU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__535, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__536, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__537, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__538, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__539, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v703 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__535[2U] 
                                              >> 0xcU) 
                                             & (0x2bfU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2bfU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__536[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__537[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2bfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__538[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__539[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2bfU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__540, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__541, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__542, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__543, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__544, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v704 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__540[2U] 
                                              >> 0xcU) 
                                             & (0x2c0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__541[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__542[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__543[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__544[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__545, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__546, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__547, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__548, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__549, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v705 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__545[2U] 
                                              >> 0xcU) 
                                             & (0x2c1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__546[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__547[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__548[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__549[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__550, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__551, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__552, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__553, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__554, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v706 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__550[2U] 
                                              >> 0xcU) 
                                             & (0x2c2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__551[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__552[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__553[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__554[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__555, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__556, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__557, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__558, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__559, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v707 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__555[2U] 
                                              >> 0xcU) 
                                             & (0x2c3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__556[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__557[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__558[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__559[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__560, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__561, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__562, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__563, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__564, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v708 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__560[2U] 
                                              >> 0xcU) 
                                             & (0x2c4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__561[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__562[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__563[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__564[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__565, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__566, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__567, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__568, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__569, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v709 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__565[2U] 
                                              >> 0xcU) 
                                             & (0x2c5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__566[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__567[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__568[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__569[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__570, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__571, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__572, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__573, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__574, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v710 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__570[2U] 
                                              >> 0xcU) 
                                             & (0x2c6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__571[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__572[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__573[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__574[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__575, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__576, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__577, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__578, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__579, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v711 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__575[2U] 
                                              >> 0xcU) 
                                             & (0x2c7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__576[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__577[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__578[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__579[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__580, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__581, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__582, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__583, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__584, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v712 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__580[2U] 
                                              >> 0xcU) 
                                             & (0x2c8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__581[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__582[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__583[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__584[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__585, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__586, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__587, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__588, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__589, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v713 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__585[2U] 
                                              >> 0xcU) 
                                             & (0x2c9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2c9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__586[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__587[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2c9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__588[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__589[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2c9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__590, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__591, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__592, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__593, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__594, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v714 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__590[2U] 
                                              >> 0xcU) 
                                             & (0x2caU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2caU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2caU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__591[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__592[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2caU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__593[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__594[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2caU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__595, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__596, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__597, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__598, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__599, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v715 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__595[2U] 
                                              >> 0xcU) 
                                             & (0x2cbU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2cbU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__596[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__597[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__598[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__599[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2cbU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__600, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__601, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__602, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__603, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__604, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v716 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__600[2U] 
                                              >> 0xcU) 
                                             & (0x2ccU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ccU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ccU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__601[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__602[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ccU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__603[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__604[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ccU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__605, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__606, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__607, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__608, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__609, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v717 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__605[2U] 
                                              >> 0xcU) 
                                             & (0x2cdU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2cdU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__606[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__607[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__608[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__609[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2cdU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__610, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__611, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__612, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__613, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__614, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v718 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__610[2U] 
                                              >> 0xcU) 
                                             & (0x2ceU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ceU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ceU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__611[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__612[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ceU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__613[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__614[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ceU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__615, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__616, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__617, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__618, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__619, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v719 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__615[2U] 
                                              >> 0xcU) 
                                             & (0x2cfU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2cfU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__616[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__617[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2cfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__618[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__619[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2cfU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__620, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__621, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__622, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__623, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__624, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v720 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__620[2U] 
                                              >> 0xcU) 
                                             & (0x2d0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__621[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__622[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__623[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__624[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__625, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__626, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__627, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__628, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__629, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v721 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__625[2U] 
                                              >> 0xcU) 
                                             & (0x2d1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__626[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__627[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__628[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__629[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__630, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__631, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__632, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__633, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__634, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v722 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__630[2U] 
                                              >> 0xcU) 
                                             & (0x2d2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__631[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__632[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__633[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__634[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__635, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__636, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__637, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__638, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__639, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v723 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__635[2U] 
                                              >> 0xcU) 
                                             & (0x2d3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__636[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__637[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__638[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__639[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__640, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__641, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__642, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__643, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__644, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v724 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__640[2U] 
                                              >> 0xcU) 
                                             & (0x2d4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__641[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__642[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__643[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__644[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__645, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__646, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__647, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__648, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__649, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v725 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__645[2U] 
                                              >> 0xcU) 
                                             & (0x2d5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__646[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__647[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__648[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__649[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__650, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__651, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__652, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__653, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__654, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v726 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__650[2U] 
                                              >> 0xcU) 
                                             & (0x2d6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__651[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__652[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__653[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__654[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__655, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__656, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__657, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__658, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__659, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v727 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__655[2U] 
                                              >> 0xcU) 
                                             & (0x2d7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__656[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__657[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__658[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__659[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__660, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__661, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__662, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__663, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__664, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v728 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__660[2U] 
                                              >> 0xcU) 
                                             & (0x2d8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__661[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__662[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__663[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__664[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__665, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__666, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__667, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__668, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__669, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v729 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__665[2U] 
                                              >> 0xcU) 
                                             & (0x2d9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2d9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__666[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__667[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2d9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__668[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__669[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2d9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__670, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__671, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__672, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__673, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__674, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v730 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__670[2U] 
                                              >> 0xcU) 
                                             & (0x2daU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2daU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2daU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__671[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__672[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2daU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__673[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__674[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2daU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__675, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__676, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__677, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__678, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__679, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v731 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__675[2U] 
                                              >> 0xcU) 
                                             & (0x2dbU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2dbU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__676[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__677[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__678[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__679[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2dbU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__680, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__681, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__682, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__683, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__684, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v732 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__680[2U] 
                                              >> 0xcU) 
                                             & (0x2dcU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2dcU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__681[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__682[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__683[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__684[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2dcU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__685, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__686, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__687, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__688, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__689, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v733 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__685[2U] 
                                              >> 0xcU) 
                                             & (0x2ddU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ddU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ddU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__686[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__687[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ddU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__688[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__689[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ddU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__690, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__691, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__692, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__693, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__694, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v734 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__690[2U] 
                                              >> 0xcU) 
                                             & (0x2deU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2deU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2deU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__691[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__692[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2deU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__693[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__694[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2deU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__695, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__696, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__697, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__698, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__699, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v735 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__695[2U] 
                                              >> 0xcU) 
                                             & (0x2dfU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2dfU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__696[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__697[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2dfU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__698[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__699[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2dfU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__700, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__701, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__702, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__703, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__704, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v736 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__700[2U] 
                                              >> 0xcU) 
                                             & (0x2e0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__701[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__702[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__703[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__704[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__705, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__706, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__707, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__708, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__709, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v737 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__705[2U] 
                                              >> 0xcU) 
                                             & (0x2e1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__706[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__707[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__708[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__709[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__710, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__711, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__712, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__713, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__714, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v738 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__710[2U] 
                                              >> 0xcU) 
                                             & (0x2e2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__711[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__712[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__713[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__714[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__715, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__716, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__717, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__718, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__719, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v739 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__715[2U] 
                                              >> 0xcU) 
                                             & (0x2e3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__716[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__717[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__718[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__719[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__720, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__721, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__722, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__723, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__724, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v740 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__720[2U] 
                                              >> 0xcU) 
                                             & (0x2e4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__721[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__722[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__723[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__724[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__725, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__726, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__727, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__728, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__729, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v741 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__725[2U] 
                                              >> 0xcU) 
                                             & (0x2e5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__726[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__727[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__728[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__729[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__730, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__731, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__732, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__733, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__734, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v742 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__730[2U] 
                                              >> 0xcU) 
                                             & (0x2e6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__731[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__732[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__733[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__734[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__735, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__736, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__737, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__738, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__739, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v743 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__735[2U] 
                                              >> 0xcU) 
                                             & (0x2e7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__736[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__737[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__738[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__739[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__740, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__741, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__742, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__743, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__744, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v744 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__740[2U] 
                                              >> 0xcU) 
                                             & (0x2e8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__741[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__742[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__743[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__744[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__745, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__746, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__747, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__748, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__749, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v745 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__745[2U] 
                                              >> 0xcU) 
                                             & (0x2e9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2e9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__746[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__747[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2e9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__748[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__749[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2e9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__750, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__751, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__752, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__753, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__754, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v746 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__750[2U] 
                                              >> 0xcU) 
                                             & (0x2eaU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2eaU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2eaU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__751[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__752[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2eaU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__753[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__754[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2eaU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__755, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__756, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__757, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__758, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__759, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v747 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__755[2U] 
                                              >> 0xcU) 
                                             & (0x2ebU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ebU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ebU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__756[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__757[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ebU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__758[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__759[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ebU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__760, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__761, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__762, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__763, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__764, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v748 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__760[2U] 
                                              >> 0xcU) 
                                             & (0x2ecU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ecU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ecU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__761[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__762[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ecU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__763[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__764[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ecU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__765, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__766, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__767, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__768, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__769, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v749 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__765[2U] 
                                              >> 0xcU) 
                                             & (0x2edU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2edU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2edU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__766[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__767[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2edU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__768[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__769[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2edU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__770, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__771, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__772, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__773, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__774, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v750 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__770[2U] 
                                              >> 0xcU) 
                                             & (0x2eeU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2eeU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2eeU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__771[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__772[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2eeU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__773[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__774[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2eeU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__775, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__776, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__777, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__778, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__779, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v751 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__775[2U] 
                                              >> 0xcU) 
                                             & (0x2efU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2efU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2efU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__776[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__777[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2efU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__778[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__779[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2efU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__780, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__781, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__782, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__783, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__784, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v752 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__780[2U] 
                                              >> 0xcU) 
                                             & (0x2f0U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f0U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__781[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__782[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f0U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__783[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__784[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f0U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__785, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__786, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__787, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__788, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__789, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v753 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__785[2U] 
                                              >> 0xcU) 
                                             & (0x2f1U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f1U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__786[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__787[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f1U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__788[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__789[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f1U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__790, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__791, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__792, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__793, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__794, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v754 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__790[2U] 
                                              >> 0xcU) 
                                             & (0x2f2U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f2U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__791[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__792[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f2U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__793[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__794[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f2U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__795, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__796, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__797, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__798, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__799, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v755 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__795[2U] 
                                              >> 0xcU) 
                                             & (0x2f3U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f3U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__796[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__797[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f3U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__798[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__799[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f3U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__800, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__801, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__802, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__803, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__804, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v756 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__800[2U] 
                                              >> 0xcU) 
                                             & (0x2f4U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f4U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__801[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__802[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f4U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__803[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__804[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f4U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__805, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__806, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__807, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__808, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__809, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v757 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__805[2U] 
                                              >> 0xcU) 
                                             & (0x2f5U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f5U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__806[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__807[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f5U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__808[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__809[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f5U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__810, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__811, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__812, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__813, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__814, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v758 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__810[2U] 
                                              >> 0xcU) 
                                             & (0x2f6U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f6U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__811[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__812[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f6U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__813[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__814[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f6U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__815, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__816, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__817, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__818, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__819, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v759 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__815[2U] 
                                              >> 0xcU) 
                                             & (0x2f7U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f7U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__816[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__817[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f7U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__818[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__819[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f7U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__820, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__821, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__822, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__823, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__824, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v760 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__820[2U] 
                                              >> 0xcU) 
                                             & (0x2f8U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f8U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__821[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__822[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f8U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__823[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__824[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f8U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__825, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__826, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__827, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__828, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__829, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v761 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__825[2U] 
                                              >> 0xcU) 
                                             & (0x2f9U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2f9U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__826[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__827[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2f9U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__828[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__829[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2f9U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__830, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__831, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__832, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__833, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__834, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v762 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__830[2U] 
                                              >> 0xcU) 
                                             & (0x2faU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2faU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2faU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__831[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__832[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2faU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__833[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__834[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2faU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__835, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__836, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__837, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__838, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__839, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v763 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__835[2U] 
                                              >> 0xcU) 
                                             & (0x2fbU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2fbU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__836[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__837[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fbU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__838[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__839[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2fbU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__840, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__841, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__842, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__843, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__844, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v764 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__840[2U] 
                                              >> 0xcU) 
                                             & (0x2fcU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2fcU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__841[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__842[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fcU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__843[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__844[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2fcU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__845, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__846, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__847, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__848, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__849, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v765 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__845[2U] 
                                              >> 0xcU) 
                                             & (0x2fdU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2fdU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__846[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__847[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2fdU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__848[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__849[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2fdU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__850, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__851, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__852, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__853, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__854, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v766 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__850[2U] 
                                              >> 0xcU) 
                                             & (0x2feU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2feU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2feU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__851[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__852[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2feU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__853[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__854[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2feU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__855, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__856, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__857, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__858, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__859, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v767 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__855[2U] 
                                              >> 0xcU) 
                                             & (0x2ffU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x2ffU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ffU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__856[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__857[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x2ffU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__858[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__859[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x2ffU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__860, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__861, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__862, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__863, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__864, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v768 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__860[2U] 
                                              >> 0xcU) 
                                             & (0x300U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x300U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x300U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__861[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__862[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x300U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__863[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__864[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x300U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__865, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__866, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__867, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__868, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__869, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v769 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__865[2U] 
                                              >> 0xcU) 
                                             & (0x301U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x301U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x301U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__866[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__867[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x301U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__868[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__869[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x301U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__870, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__871, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__872, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__873, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__874, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v770 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__870[2U] 
                                              >> 0xcU) 
                                             & (0x302U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x302U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x302U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__871[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__872[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x302U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__873[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__874[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x302U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__875, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__876, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__877, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__878, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__879, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v771 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__875[2U] 
                                              >> 0xcU) 
                                             & (0x303U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x303U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x303U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__876[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__877[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x303U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__878[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__879[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x303U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__880, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__881, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__882, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__883, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__884, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v772 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__880[2U] 
                                              >> 0xcU) 
                                             & (0x304U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x304U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x304U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__881[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__882[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x304U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__883[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__884[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x304U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__885, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__886, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__887, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__888, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__889, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v773 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__885[2U] 
                                              >> 0xcU) 
                                             & (0x305U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x305U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x305U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__886[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__887[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x305U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__888[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__889[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x305U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__890, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__891, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__892, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__893, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__894, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v774 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__890[2U] 
                                              >> 0xcU) 
                                             & (0x306U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x306U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x306U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__891[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__892[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x306U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__893[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__894[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x306U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__895, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__896, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__897, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__898, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__899, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v775 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__895[2U] 
                                              >> 0xcU) 
                                             & (0x307U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x307U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x307U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__896[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__897[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x307U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__898[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__899[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x307U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__900, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__901, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__902, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__903, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__904, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v776 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__900[2U] 
                                              >> 0xcU) 
                                             & (0x308U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x308U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x308U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__901[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__902[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x308U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__903[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__904[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x308U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__905, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__906, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__907, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__908, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__909, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v777 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__905[2U] 
                                              >> 0xcU) 
                                             & (0x309U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x309U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x309U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__906[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__907[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x309U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__908[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__909[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x309U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__910, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__911, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__912, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__913, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__914, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v778 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__910[2U] 
                                              >> 0xcU) 
                                             & (0x30aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__911[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__912[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__913[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__914[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__915, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__916, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__917, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__918, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__919, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v779 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__915[2U] 
                                              >> 0xcU) 
                                             & (0x30bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__916[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__917[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__918[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__919[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__920, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__921, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__922, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__923, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__924, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v780 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__920[2U] 
                                              >> 0xcU) 
                                             & (0x30cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__921[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__922[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__923[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__924[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__925, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__926, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__927, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__928, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__929, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v781 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__925[2U] 
                                              >> 0xcU) 
                                             & (0x30dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__926[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__927[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__928[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__929[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__930, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__931, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__932, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__933, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__934, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v782 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__930[2U] 
                                              >> 0xcU) 
                                             & (0x30eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__931[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__932[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__933[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__934[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__935, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__936, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__937, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__938, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__939, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v783 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__935[2U] 
                                              >> 0xcU) 
                                             & (0x30fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x30fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__936[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__937[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x30fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__938[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__939[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x30fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__940, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__941, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__942, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__943, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__944, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v784 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__940[2U] 
                                              >> 0xcU) 
                                             & (0x310U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x310U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x310U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__941[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__942[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x310U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__943[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__944[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x310U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__945, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__946, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__947, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__948, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__949, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v785 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__945[2U] 
                                              >> 0xcU) 
                                             & (0x311U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x311U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x311U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__946[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__947[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x311U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__948[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__949[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x311U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__950, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__951, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__952, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__953, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__954, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v786 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__950[2U] 
                                              >> 0xcU) 
                                             & (0x312U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x312U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x312U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__951[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__952[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x312U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__953[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__954[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x312U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__955, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__956, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__957, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__958, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__959, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v787 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__955[2U] 
                                              >> 0xcU) 
                                             & (0x313U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x313U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x313U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__956[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__957[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x313U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__958[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__959[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x313U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__960, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__961, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__962, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__963, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__964, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v788 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__960[2U] 
                                              >> 0xcU) 
                                             & (0x314U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x314U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x314U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__961[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__962[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x314U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__963[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__964[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x314U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__965, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__966, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__967, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__968, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__969, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v789 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__965[2U] 
                                              >> 0xcU) 
                                             & (0x315U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x315U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x315U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__966[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__967[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x315U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__968[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__969[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x315U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__970, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__971, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__972, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__973, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__974, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v790 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__970[2U] 
                                              >> 0xcU) 
                                             & (0x316U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x316U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x316U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__971[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__972[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x316U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__973[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__974[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x316U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__975, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__976, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__977, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__978, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__979, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v791 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__975[2U] 
                                              >> 0xcU) 
                                             & (0x317U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x317U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x317U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__976[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__977[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x317U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__978[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__979[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x317U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__980, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__981, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__982, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__983, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__984, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v792 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__980[2U] 
                                              >> 0xcU) 
                                             & (0x318U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x318U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x318U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__981[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__982[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x318U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__983[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__984[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x318U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__985, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__986, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__987, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__988, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__989, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v793 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__985[2U] 
                                              >> 0xcU) 
                                             & (0x319U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x319U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x319U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__986[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__987[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x319U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__988[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__989[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x319U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__990, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__991, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__992, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__993, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__994, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v794 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__990[2U] 
                                              >> 0xcU) 
                                             & (0x31aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__991[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__992[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__993[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__994[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__995, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__996, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__997, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__998, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__999, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v795 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__995[2U] 
                                              >> 0xcU) 
                                             & (0x31bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__996[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__997[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__998[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__999[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1000, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1001, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1002, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1003, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1004, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v796 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1000[2U] 
                                              >> 0xcU) 
                                             & (0x31cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1001[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1002[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1003[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1004[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1005, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1006, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1007, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1008, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1009, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v797 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1005[2U] 
                                              >> 0xcU) 
                                             & (0x31dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1006[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1007[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1008[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1009[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1010, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1011, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1012, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1013, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1014, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v798 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1010[2U] 
                                              >> 0xcU) 
                                             & (0x31eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1011[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1012[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1013[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1014[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1015, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1016, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1017, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1018, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1019, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v799 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1015[2U] 
                                              >> 0xcU) 
                                             & (0x31fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x31fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1016[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1017[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x31fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1018[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1019[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x31fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1020, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1021, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1022, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1023, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1024, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v800 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1020[2U] 
                                              >> 0xcU) 
                                             & (0x320U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x320U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x320U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1021[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1022[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x320U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1023[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1024[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x320U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1025, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1026, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1027, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1028, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1029, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v801 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1025[2U] 
                                              >> 0xcU) 
                                             & (0x321U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x321U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x321U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1026[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1027[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x321U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1028[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1029[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x321U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1030, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1031, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1032, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1033, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1034, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v802 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1030[2U] 
                                              >> 0xcU) 
                                             & (0x322U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x322U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x322U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1031[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1032[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x322U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1033[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1034[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x322U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1035, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1036, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1037, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1038, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1039, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v803 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1035[2U] 
                                              >> 0xcU) 
                                             & (0x323U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x323U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x323U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1036[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1037[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x323U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1038[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1039[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x323U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1040, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1041, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1042, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1043, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1044, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v804 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1040[2U] 
                                              >> 0xcU) 
                                             & (0x324U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x324U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x324U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1041[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1042[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x324U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1043[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1044[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x324U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1045, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1046, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1047, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1048, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1049, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v805 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1045[2U] 
                                              >> 0xcU) 
                                             & (0x325U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x325U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x325U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1046[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1047[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x325U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1048[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1049[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x325U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1050, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1051, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1052, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1053, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1054, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v806 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1050[2U] 
                                              >> 0xcU) 
                                             & (0x326U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x326U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x326U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1051[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1052[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x326U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1053[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1054[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x326U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1055, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1056, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1057, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1058, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1059, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v807 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1055[2U] 
                                              >> 0xcU) 
                                             & (0x327U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x327U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x327U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1056[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1057[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x327U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1058[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1059[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x327U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1060, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1061, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1062, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1063, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1064, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v808 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1060[2U] 
                                              >> 0xcU) 
                                             & (0x328U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x328U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x328U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1061[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1062[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x328U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1063[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1064[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x328U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1065, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1066, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1067, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1068, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1069, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v809 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1065[2U] 
                                              >> 0xcU) 
                                             & (0x329U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x329U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x329U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1066[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1067[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x329U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1068[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1069[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x329U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1070, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1071, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1072, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1073, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1074, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v810 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1070[2U] 
                                              >> 0xcU) 
                                             & (0x32aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1071[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1072[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1073[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1074[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1075, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1076, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1077, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1078, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1079, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v811 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1075[2U] 
                                              >> 0xcU) 
                                             & (0x32bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1076[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1077[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1078[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1079[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1080, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1081, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1082, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1083, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1084, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v812 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1080[2U] 
                                              >> 0xcU) 
                                             & (0x32cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1081[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1082[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1083[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1084[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1085, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1086, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1087, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1088, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1089, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v813 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1085[2U] 
                                              >> 0xcU) 
                                             & (0x32dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1086[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1087[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1088[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1089[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1090, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1091, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1092, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1093, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1094, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v814 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1090[2U] 
                                              >> 0xcU) 
                                             & (0x32eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1091[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1092[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1093[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1094[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1095, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1096, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1097, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1098, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1099, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v815 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1095[2U] 
                                              >> 0xcU) 
                                             & (0x32fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x32fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1096[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1097[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x32fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1098[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1099[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x32fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1100, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1101, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1102, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1103, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1104, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v816 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1100[2U] 
                                              >> 0xcU) 
                                             & (0x330U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x330U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x330U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1101[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1102[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x330U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1103[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1104[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x330U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1105, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1106, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1107, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1108, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1109, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v817 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1105[2U] 
                                              >> 0xcU) 
                                             & (0x331U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x331U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x331U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1106[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1107[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x331U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1108[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1109[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x331U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1110, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1111, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1112, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1113, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1114, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v818 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1110[2U] 
                                              >> 0xcU) 
                                             & (0x332U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x332U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x332U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1111[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1112[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x332U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1113[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1114[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x332U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1115, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1116, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1117, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1118, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1119, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v819 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1115[2U] 
                                              >> 0xcU) 
                                             & (0x333U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x333U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x333U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1116[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1117[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x333U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1118[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1119[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x333U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1120, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1121, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1122, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1123, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1124, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v820 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1120[2U] 
                                              >> 0xcU) 
                                             & (0x334U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x334U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x334U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1121[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1122[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x334U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1123[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1124[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x334U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1125, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1126, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1127, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1128, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1129, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v821 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1125[2U] 
                                              >> 0xcU) 
                                             & (0x335U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x335U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x335U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1126[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1127[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x335U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1128[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1129[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x335U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1130, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1131, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1132, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1133, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1134, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v822 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1130[2U] 
                                              >> 0xcU) 
                                             & (0x336U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x336U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x336U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1131[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1132[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x336U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1133[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1134[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x336U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1135, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1136, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1137, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1138, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1139, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v823 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1135[2U] 
                                              >> 0xcU) 
                                             & (0x337U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x337U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x337U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1136[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1137[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x337U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1138[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1139[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x337U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1140, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1141, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1142, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1143, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1144, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v824 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1140[2U] 
                                              >> 0xcU) 
                                             & (0x338U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x338U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x338U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1141[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1142[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x338U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1143[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1144[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x338U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1145, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1146, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1147, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1148, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1149, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v825 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1145[2U] 
                                              >> 0xcU) 
                                             & (0x339U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x339U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x339U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1146[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1147[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x339U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1148[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1149[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x339U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1150, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1151, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1152, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1153, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1154, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v826 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1150[2U] 
                                              >> 0xcU) 
                                             & (0x33aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1151[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1152[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1153[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1154[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1155, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1156, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1157, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1158, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1159, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v827 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1155[2U] 
                                              >> 0xcU) 
                                             & (0x33bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1156[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1157[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1158[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1159[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1160, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1161, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1162, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1163, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1164, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v828 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1160[2U] 
                                              >> 0xcU) 
                                             & (0x33cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1161[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1162[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1163[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1164[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1165, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1166, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1167, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1168, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1169, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v829 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1165[2U] 
                                              >> 0xcU) 
                                             & (0x33dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1166[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1167[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1168[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1169[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1170, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1171, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1172, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1173, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1174, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v830 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1170[2U] 
                                              >> 0xcU) 
                                             & (0x33eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1171[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1172[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1173[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1174[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1175, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1176, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1177, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1178, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1179, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v831 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1175[2U] 
                                              >> 0xcU) 
                                             & (0x33fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x33fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1176[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1177[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x33fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1178[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1179[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x33fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1180, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1181, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1182, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1183, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1184, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v832 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1180[2U] 
                                              >> 0xcU) 
                                             & (0x340U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x340U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x340U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1181[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1182[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x340U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1183[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1184[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x340U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1185, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1186, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1187, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1188, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1189, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v833 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1185[2U] 
                                              >> 0xcU) 
                                             & (0x341U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x341U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x341U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1186[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1187[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x341U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1188[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1189[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x341U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1190, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1191, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1192, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1193, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1194, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v834 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1190[2U] 
                                              >> 0xcU) 
                                             & (0x342U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x342U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x342U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1191[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1192[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x342U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1193[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1194[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x342U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1195, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1196, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1197, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1198, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1199, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v835 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1195[2U] 
                                              >> 0xcU) 
                                             & (0x343U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x343U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x343U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1196[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1197[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x343U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1198[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1199[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x343U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1200, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1201, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1202, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1203, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1204, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v836 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1200[2U] 
                                              >> 0xcU) 
                                             & (0x344U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x344U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x344U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1201[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1202[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x344U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1203[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1204[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x344U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1205, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1206, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1207, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1208, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1209, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v837 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1205[2U] 
                                              >> 0xcU) 
                                             & (0x345U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x345U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x345U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1206[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1207[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x345U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1208[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1209[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x345U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1210, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1211, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1212, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1213, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1214, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v838 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1210[2U] 
                                              >> 0xcU) 
                                             & (0x346U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x346U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x346U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1211[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1212[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x346U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1213[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1214[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x346U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1215, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1216, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1217, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1218, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1219, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v839 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1215[2U] 
                                              >> 0xcU) 
                                             & (0x347U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x347U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x347U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1216[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1217[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x347U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1218[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1219[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x347U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1220, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1221, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1222, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1223, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1224, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v840 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1220[2U] 
                                              >> 0xcU) 
                                             & (0x348U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x348U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x348U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1221[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1222[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x348U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1223[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1224[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x348U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1225, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1226, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1227, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1228, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1229, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v841 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1225[2U] 
                                              >> 0xcU) 
                                             & (0x349U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x349U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x349U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1226[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1227[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x349U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1228[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1229[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x349U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1230, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1231, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1232, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1233, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1234, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v842 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1230[2U] 
                                              >> 0xcU) 
                                             & (0x34aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1231[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1232[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1233[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1234[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1235, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1236, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1237, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1238, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1239, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v843 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1235[2U] 
                                              >> 0xcU) 
                                             & (0x34bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1236[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1237[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1238[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1239[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1240, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1241, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1242, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1243, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1244, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v844 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1240[2U] 
                                              >> 0xcU) 
                                             & (0x34cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1241[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1242[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1243[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1244[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1245, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1246, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1247, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1248, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1249, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v845 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1245[2U] 
                                              >> 0xcU) 
                                             & (0x34dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1246[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1247[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1248[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1249[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1250, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1251, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1252, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1253, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1254, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v846 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1250[2U] 
                                              >> 0xcU) 
                                             & (0x34eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1251[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1252[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1253[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1254[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1255, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1256, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1257, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1258, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1259, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v847 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1255[2U] 
                                              >> 0xcU) 
                                             & (0x34fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x34fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1256[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1257[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x34fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1258[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1259[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x34fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1260, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1261, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1262, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1263, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1264, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v848 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1260[2U] 
                                              >> 0xcU) 
                                             & (0x350U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x350U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x350U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1261[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1262[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x350U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1263[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1264[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x350U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1265, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1266, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1267, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1268, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1269, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v849 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1265[2U] 
                                              >> 0xcU) 
                                             & (0x351U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x351U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x351U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1266[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1267[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x351U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1268[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1269[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x351U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1270, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1271, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1272, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1273, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1274, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v850 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1270[2U] 
                                              >> 0xcU) 
                                             & (0x352U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x352U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x352U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1271[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1272[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x352U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1273[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1274[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x352U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1275, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1276, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1277, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1278, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1279, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v851 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1275[2U] 
                                              >> 0xcU) 
                                             & (0x353U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x353U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x353U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1276[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1277[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x353U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1278[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1279[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x353U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1280, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1281, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1282, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1283, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1284, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v852 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1280[2U] 
                                              >> 0xcU) 
                                             & (0x354U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x354U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x354U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1281[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1282[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x354U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1283[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1284[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x354U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1285, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1286, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1287, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1288, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1289, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v853 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1285[2U] 
                                              >> 0xcU) 
                                             & (0x355U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x355U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x355U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1286[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1287[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x355U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1288[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1289[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x355U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1290, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1291, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1292, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1293, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1294, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v854 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1290[2U] 
                                              >> 0xcU) 
                                             & (0x356U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x356U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x356U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1291[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1292[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x356U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1293[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1294[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x356U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1295, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1296, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1297, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1298, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1299, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v855 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1295[2U] 
                                              >> 0xcU) 
                                             & (0x357U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x357U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x357U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1296[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1297[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x357U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1298[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1299[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x357U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1300, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1301, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1302, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1303, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1304, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v856 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1300[2U] 
                                              >> 0xcU) 
                                             & (0x358U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x358U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x358U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1301[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1302[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x358U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1303[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1304[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x358U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1305, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1306, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1307, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1308, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1309, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v857 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1305[2U] 
                                              >> 0xcU) 
                                             & (0x359U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x359U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x359U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1306[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1307[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x359U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1308[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1309[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x359U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1310, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1311, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1312, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1313, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1314, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v858 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1310[2U] 
                                              >> 0xcU) 
                                             & (0x35aU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35aU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1311[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1312[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35aU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1313[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1314[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35aU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1315, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1316, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1317, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1318, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1319, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v859 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1315[2U] 
                                              >> 0xcU) 
                                             & (0x35bU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35bU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1316[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1317[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35bU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1318[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1319[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35bU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1320, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1321, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1322, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1323, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1324, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v860 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1320[2U] 
                                              >> 0xcU) 
                                             & (0x35cU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35cU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1321[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1322[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35cU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1323[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1324[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35cU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1325, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1326, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1327, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1328, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1329, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v861 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1325[2U] 
                                              >> 0xcU) 
                                             & (0x35dU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35dU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1326[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1327[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35dU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1328[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1329[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35dU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1330, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1331, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1332, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1333, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1334, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v862 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1330[2U] 
                                              >> 0xcU) 
                                             & (0x35eU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35eU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1331[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1332[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35eU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1333[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1334[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35eU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1335, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1336, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1337, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1338, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1339, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v863 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1335[2U] 
                                              >> 0xcU) 
                                             & (0x35fU 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x35fU])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1336[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1337[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x35fU])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1338[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1339[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x35fU])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1340, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1341, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1342, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1343, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1344, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v864 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1340[2U] 
                                              >> 0xcU) 
                                             & (0x360U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x360U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x360U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1341[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1342[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x360U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1343[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1344[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x360U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1345, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1346, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1347, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1348, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1349, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v865 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1345[2U] 
                                              >> 0xcU) 
                                             & (0x361U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x361U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x361U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1346[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1347[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x361U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1348[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1349[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x361U])
            : 2U);
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1350, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1351, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1352, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1353, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    VL_EXTEND_WI(77,1, __Vtemp_h9f28c8e0__1354, (IData)(vlSymsp->TOP__pipeline.__PVT__ex_branch_in));
    vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v866 
        = ((IData)(vlSymsp->TOP.reset_n) ? (((__Vtemp_h9f28c8e0__1350[2U] 
                                              >> 0xcU) 
                                             & (0x362U 
                                                == (IData)(vlSelf->__PVT__gshare_inst__DOT__update_pht_addr)))
                                             ? ((2U 
                                                 & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                 [0x362U])
                                                 ? 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x362U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1351[2U])
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1352[2U])
                                                   ? 3U
                                                   : 1U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                  [0x362U])
                                                  ? 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1353[2U])
                                                   ? 2U
                                                   : 0U)
                                                  : 
                                                 ((0x800U 
                                                   & __Vtemp_h9f28c8e0__1354[2U])
                                                   ? 1U
                                                   : 0U)))
                                             : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                            [0x362U])
            : 2U);
}
