/*
 * MATLAB Compiler: 3.0
 * Date: Sun Jun 14 18:30:53 2009
 * Arguments: "-B" "macro_default" "-O" "all" "-O" "fold_scalar_mxarrays:on"
 * "-O" "fold_non_scalar_mxarrays:on" "-O" "optimize_integer_for_loops:on" "-O"
 * "array_indexing:on" "-O" "optimize_conditionals:on" "-M" "-silentsetup" "-d"
 * "C:/MATLAB6p5/work/mywav/src" "-B" "csglcom:mywav,mywav,1.0" "-B" "sgl" "-m"
 * "-W" "main" "-L" "C" "-t" "-T" "link:exe" "-h" "libmmfile.mlib" "-W"
 * "mainhg" "libmwsglm.mlib" "-t" "-W" "comhg:mywav,mywav,1.0" "-T" "link:lib"
 * "-h" "libmmfile.mlib" "-i" "-i" "C:/MATLAB6p5/work/fzone.m"
 * "C:/MATLAB6p5/work/myprowav.m" "C:/MATLAB6p5/work/tzone.m" 
 */
#include "wavread.h"
#include "libmatlbm.h"
#include "libmmfile.h"
static mxArray * _mxarray0_;
static mxArray * _mxarray1_;
static mxArray * _mxarray2_;

static mxChar _array4_[62] = { 'I', 'n', 'd', 'e', 'x', ' ', 'r', 'a', 'n',
                               'g', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b',
                               'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i',
                               'e', 'd', ' ', 'a', 's', ' ', 'a', ' ', 's',
                               'c', 'a', 'l', 'a', 'r', ' ', 'o', 'r', ' ',
                               '2', '-', 'e', 'l', 'e', 'm', 'e', 'n', 't',
                               ' ', 'v', 'e', 'c', 't', 'o', 'r', '.' };
static mxArray * _mxarray3_;

static mxChar _array6_[4] = { 's', 'i', 'z', 'e' };
static mxArray * _mxarray5_;
static mxArray * _mxarray7_;

static mxChar _array9_[4] = { 'R', 'I', 'F', 'F' };
static mxArray * _mxarray8_;

static mxChar _array11_[16] = { 'N', 'o', 't', ' ', 'a', ' ', 'W', 'A',
                                'V', 'E', ' ', 'f', 'i', 'l', 'e', '.' };
static mxArray * _mxarray10_;

static mxChar _array13_[4] = { 'W', 'A', 'V', 'E' };
static mxArray * _mxarray12_;

static mxChar _array15_[11] = { 'e', 'n', 'd', ' ', 'o', 'f',
                                ' ', 'f', 'i', 'l', 'e' };
static mxArray * _mxarray14_;

static mxChar _array17_[3] = { 'f', 'm', 't' };
static mxArray * _mxarray16_;

static mxChar _array19_[4] = { 'd', 'a', 't', 'a' };
static mxArray * _mxarray18_;

static mxChar _array21_[61] = { 'C', 'o', 'r', 'r', 'u', 'p', 't', ' ', 'W',
                                'A', 'V', ' ', 'f', 'i', 'l', 'e', ':', ' ',
                                'f', 'o', 'u', 'n', 'd', ' ', 'a', 'u', 'd',
                                'i', 'o', ' ', 'd', 'a', 't', 'a', ' ', 'b',
                                'e', 'f', 'o', 'r', 'e', ' ', 'f', 'o', 'r',
                                'm', 'a', 't', ' ', 'i', 'n', 'f', 'o', 'r',
                                'm', 'a', 't', 'i', 'o', 'n', '.' };
static mxArray * _mxarray20_;
static mxArray * _mxarray22_;

static mxChar _array24_[4] = { 'f', 'a', 'c', 't' };
static mxArray * _mxarray23_;

static mxChar _array26_[4] = { 'd', 'i', 's', 'p' };
static mxArray * _mxarray25_;

static mxChar _array28_[4] = { 'l', 'i', 's', 't' };
static mxArray * _mxarray27_;

static mxChar _array30_[45] = { 'I', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't',
                                ' ', 'c', 'h', 'u', 'n', 'k', ' ', 's', 'i',
                                'z', 'e', ' ', 'i', 'n', 'f', 'o', 'r', 'm',
                                'a', 't', 'i', 'o', 'n', ' ', 'i', 'n', ' ',
                                'W', 'A', 'V', ' ', 'f', 'i', 'l', 'e', '.' };
static mxArray * _mxarray29_;
static mxArray * _mxarray31_;
static mxArray * _mxarray32_;

static mxChar _array34_[4] = { '.', 'w', 'a', 'v' };
static mxArray * _mxarray33_;

static mxChar _array36_[2] = { 'r', 'b' };
static mxArray * _mxarray35_;

static mxChar _array38_[1] = { 'l' };
static mxArray * _mxarray37_;

static mxChar _array40_[17] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'o', 'p',
                                'e', 'n', ' ', 'f', 'i', 'l', 'e', '.' };
static mxArray * _mxarray39_;
static mxArray * _mxarray41_;

static mxChar _array43_[55] = { 'T', 'r', 'u', 'n', 'c', 'a', 't', 'e',
                                'd', ' ', 'c', 'h', 'u', 'n', 'k', ' ',
                                'h', 'e', 'a', 'd', 'e', 'r', ' ', 'f',
                                'o', 'u', 'n', 'd', ' ', '-', ' ', 'p',
                                'o', 's', 's', 'i', 'b', 'l', 'y', ' ',
                                'n', 'o', 't', ' ', 'a', ' ', 'W', 'A',
                                'V', ' ', 'f', 'i', 'l', 'e', '.' };
static mxArray * _mxarray42_;
static mxArray * _mxarray44_;

static mxChar _array46_[4] = { 'c', 'h', 'a', 'r' };
static mxArray * _mxarray45_;

static mxChar _array48_[5] = { 'u', 'l', 'o', 'n', 'g' };
static mxArray * _mxarray47_;

static mxChar _array50_[1] = { '<' };
static mxArray * _mxarray49_;

static mxChar _array52_[31] = { '-', 'c', 'k', '>', ' ', 'd', 'i', 'd',
                                ' ', 'n', 'o', 't', ' ', 'a', 'p', 'p',
                                'e', 'a', 'r', ' ', 'a', 's', ' ', 'e',
                                'x', 'p', 'e', 'c', 't', 'e', 'd' };
static mxArray * _mxarray51_;

static mxChar _array54_[32] = { 'F', 'i', 'l', 'e', ' ', 'd', 'o', 'e', 's',
                                ' ', 'n', 'o', 't', ' ', 'c', 'o', 'n', 't',
                                'a', 'i', 'n', ' ', 'r', 'e', 'q', 'u', 'i',
                                'r', 'e', 'd', ' ', 0x0027 };
static mxArray * _mxarray53_;

static mxChar _array56_[13] = { 0x0027, ' ', 'd', 'a', 't', 'a',
                                ' ', 'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray55_;

static mxChar _array58_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e',
                                'a', 'd', 'i', 'n', 'g', ' ', '<', 'l',
                                'i', 's', 't', '-', 'c', 'k', '>', ' ',
                                'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray57_;

static mxChar _array60_[5] = { 'u', 'c', 'h', 'a', 'r' };
static mxArray * _mxarray59_;
static mxArray * _mxarray61_;

static mxChar _array63_[4] = { 'i', 'n', 'f', 'o' };
static mxArray * _mxarray62_;

static mxChar _array65_[4] = { 'i', 'a', 'r', 't' };
static mxArray * _mxarray64_;

static mxChar _array67_[6] = { 'A', 'r', 't', 'i', 's', 't' };
static mxArray * _mxarray66_;

static mxChar _array69_[4] = { 'i', 'c', 'm', 't' };
static mxArray * _mxarray68_;

static mxChar _array71_[8] = { 'C', 'o', 'm', 'm', 'e', 'n', 't', 's' };
static mxArray * _mxarray70_;

static mxChar _array73_[4] = { 'i', 'c', 'r', 'd' };
static mxArray * _mxarray72_;

static mxChar _array75_[13] = { 'C', 'r', 'e', 'a', 't', 'i', 'o',
                                'n', ' ', 'd', 'a', 't', 'e' };
static mxArray * _mxarray74_;

static mxChar _array77_[4] = { 'i', 'c', 'o', 'p' };
static mxArray * _mxarray76_;

static mxChar _array79_[9] = { 'C', 'o', 'p', 'y', 'r', 'i', 'g', 'h', 't' };
static mxArray * _mxarray78_;

static mxChar _array81_[4] = { 'i', 'e', 'n', 'g' };
static mxArray * _mxarray80_;

static mxChar _array83_[8] = { 'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r' };
static mxArray * _mxarray82_;

static mxChar _array85_[4] = { 'i', 'n', 'a', 'm' };
static mxArray * _mxarray84_;

static mxChar _array87_[4] = { 'N', 'a', 'm', 'e' };
static mxArray * _mxarray86_;

static mxChar _array89_[4] = { 'i', 'p', 'r', 'd' };
static mxArray * _mxarray88_;

static mxChar _array91_[7] = { 'P', 'r', 'o', 'd', 'u', 'c', 't' };
static mxArray * _mxarray90_;

static mxChar _array93_[4] = { 'i', 's', 'b', 'j' };
static mxArray * _mxarray92_;

static mxChar _array95_[7] = { 'S', 'u', 'b', 'j', 'e', 'c', 't' };
static mxArray * _mxarray94_;

static mxChar _array97_[4] = { 'i', 's', 'f', 't' };
static mxArray * _mxarray96_;

static mxChar _array99_[8] = { 'S', 'o', 'f', 't', 'w', 'a', 'r', 'e' };
static mxArray * _mxarray98_;

static mxChar _array101_[4] = { 'i', 's', 'r', 'c' };
static mxArray * _mxarray100_;

static mxChar _array103_[6] = { 'S', 'o', 'u', 'r', 'c', 'e' };
static mxArray * _mxarray102_;

static double _array105_[4] = { 1.0, 256.0, 65536.0, 16777216.0 };
static mxArray * _mxarray104_;
static mxArray * _mxarray106_;

static double _array108_[2] = { 13.0, 10.0 };
static mxArray * _mxarray107_;

static mxChar _array110_[3] = { 'c', 'o', 'f' };
static mxArray * _mxarray109_;

static mxChar _array112_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e',
                                 'a', 'd', 'i', 'n', 'g', ' ', '<', 'd',
                                 'i', 's', 'p', '-', 'c', 'k', '>', ' ',
                                 'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray111_;

static double _array114_[2] = { 8.0, 40.0 };
static mxArray * _mxarray113_;

static mxChar _array116_[11] = { 'D', 'i', 's', 'p', 'l', 'a',
                                 'y', 'N', 'a', 'm', 'e' };
static mxArray * _mxarray115_;

static mxChar _array118_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e',
                                 'a', 'd', 'i', 'n', 'g', ' ', '<', 'f',
                                 'a', 'c', 't', '-', 'c', 'k', '>', ' ',
                                 'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray117_;
static mxArray * _mxarray119_;

static mxChar _array121_[31] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e',
                                 'a', 'd', 'i', 'n', 'g', ' ', '<', 'w',
                                 'a', 'v', 'e', '-', 'f', 'm', 't', '>',
                                 ' ', 'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray120_;

static mxChar _array123_[6] = { 'u', 's', 'h', 'o', 'r', 't' };
static mxArray * _mxarray122_;

static mxChar _array125_[35] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e', 'a',
                                 'd', 'i', 'n', 'g', ' ', 'P', 'C', 'M', ' ',
                                 '<', 'w', 'a', 'v', 'e', '-', 'f', 'm', 't',
                                 '>', ' ', 'c', 'h', 'u', 'n', 'k', '.' };
static mxArray * _mxarray124_;

static mxChar _array127_[15] = { 'M', 'i', 'c', 'r', 'o', 's', 'o', 'f',
                                 't', ' ', 'A', 'D', 'P', 'C', 'M' };
static mxArray * _mxarray126_;
static mxArray * _mxarray128_;

static mxChar _array130_[11] = { 'C', 'C', 'I', 'T', 'T', ' ',
                                 'a', '-', 'l', 'a', 'w' };
static mxArray * _mxarray129_;
static mxArray * _mxarray131_;

static mxChar _array133_[12] = { 'C', 'C', 'I', 'T', 'T', ' ',
                                 'm', 'u', '-', 'l', 'a', 'w' };
static mxArray * _mxarray132_;
static mxArray * _mxarray134_;

static mxChar _array136_[9] = { 'I', 'M', 'A', ' ', 'A', 'D', 'P', 'C', 'M' };
static mxArray * _mxarray135_;
static mxArray * _mxarray137_;

static mxChar _array139_[23] = { 'D', 'S', 'P', ' ', 'G', 'r', 'o', 'u',
                                 'p', ' ', 'T', 'r', 'u', 'e', 'S', 'p',
                                 'e', 'e', 'c', 'h', ' ', 'T', 'M' };
static mxArray * _mxarray138_;
static mxArray * _mxarray140_;

static mxChar _array142_[8] = { 'G', 'S', 'M', ' ', '6', '.', '1', '0' };
static mxArray * _mxarray141_;
static mxArray * _mxarray143_;

static mxChar _array145_[9] = { 'M', 'S', 'N', ' ', 'A', 'u', 'd', 'i', 'o' };
static mxArray * _mxarray144_;
static mxArray * _mxarray146_;

static mxChar _array148_[10] = { 'I', 'B', 'M', ' ', 'M',
                                 'u', '-', 'l', 'a', 'w' };
static mxArray * _mxarray147_;
static mxArray * _mxarray149_;

static mxChar _array151_[9] = { 'I', 'B', 'M', ' ', 'A', '-', 'l', 'a', 'w' };
static mxArray * _mxarray150_;
static mxArray * _mxarray152_;

static mxChar _array154_[29] = { 'I', 'B', 'M', ' ', 'A', 'V', 'C', ' ',
                                 'A', 'd', 'a', 'p', 't', 'i', 'v', 'e',
                                 ' ', 'D', 'i', 'f', 'f', 'e', 'r', 'e',
                                 'n', 't', 'i', 'a', 'l' };
static mxArray * _mxarray153_;

static mxChar _array156_[8] = { 'F', 'o', 'r', 'm', 'a', 't', ' ', '#' };
static mxArray * _mxarray155_;

static mxChar _array158_[25] = { 'D', 'a', 't', 'a', ' ', 'c', 'o', 'm', 'p',
                                 'r', 'e', 's', 's', 'i', 'o', 'n', ' ', 'f',
                                 'o', 'r', 'm', 'a', 't', ' ', '(' };
static mxArray * _mxarray157_;

static mxChar _array160_[19] = { ')', ' ', 'i', 's', ' ', 'n', 'o',
                                 't', ' ', 's', 'u', 'p', 'p', 'o',
                                 'r', 't', 'e', 'd', '.' };
static mxArray * _mxarray159_;

static mxChar _array162_[5] = { 's', 'h', 'o', 'r', 't' };
static mxArray * _mxarray161_;

static mxChar _array164_[5] = { 'b', 'i', 't', '2', '4' };
static mxArray * _mxarray163_;

static mxChar _array166_[5] = { 'f', 'l', 'o', 'a', 't' };
static mxArray * _mxarray165_;
static mxArray * _mxarray167_;

static mxChar _array169_[63] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'r', 'e',
                                 'a', 'd', ' ', 'P', 'C', 'M', ' ', 'f', 'i',
                                 'l', 'e', ' ', 'f', 'o', 'r', 'm', 'a', 't',
                                 's', ' ', 'w', 'i', 't', 'h', ' ', 'm', 'o',
                                 'r', 'e', ' ', 't', 'h', 'a', 'n', ' ', '3',
                                 '2', ' ', 'b', 'i', 't', 's', ' ', 'p', 'e',
                                 'r', ' ', 's', 'a', 'm', 'p', 'l', 'e', '.' };
static mxArray * _mxarray168_;

static mxChar _array171_[30] = { 'E', 'r', 'r', 'o', 'r', ' ', 'r', 'e',
                                 'a', 'd', 'i', 'n', 'g', ' ', 'P', 'C',
                                 'M', ' ', 'f', 'i', 'l', 'e', ' ', 'f',
                                 'o', 'r', 'm', 'a', 't', '.' };
static mxArray * _mxarray170_;

static mxChar _array173_[41] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'l', 'i',
                                 'm', 'i', 't', ' ', 'v', 'e', 'c', 't', 'o',
                                 'r', ' ', 'm', 'u', 's', 't', ' ', 'h', 'a',
                                 'v', 'e', ' ', '2', ' ', 'e', 'l', 'e', 'm',
                                 'e', 'n', 't', 's', '.' };
static mxArray * _mxarray172_;

static mxChar _array175_[27] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'l', 'i',
                                 'm', 'i', 't', 's', ' ', 'o', 'u', 't', ' ',
                                 'o', 'f', ' ', 'r', 'a', 'n', 'g', 'e', '.' };
static mxArray * _mxarray174_;

static mxChar _array177_[47] = { 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'l',
                                 'i', 'm', 'i', 't', 's', ' ', 'm', 'u',
                                 's', 't', ' ', 'b', 'e', ' ', 'g', 'i',
                                 'v', 'e', 'n', ' ', 'i', 'n', ' ', 'a',
                                 's', 'c', 'e', 'n', 'd', 'i', 'n', 'g',
                                 ' ', 'o', 'r', 'd', 'e', 'r', '.' };
static mxArray * _mxarray176_;
static mxArray * _mxarray178_;
static mxArray * _mxarray179_;
static mxArray * _mxarray180_;

void InitializeModule_wavread(void) {
    _mxarray0_ = mclInitializeDouble(1.0);
    _mxarray1_ = mclInitializeDouble(2.0);
    _mxarray2_ = mclInitializeDoubleVector(0, 0, (double *)NULL);
    _mxarray3_ = mclInitializeString(62, _array4_);
    _mxarray5_ = mclInitializeString(4, _array6_);
    _mxarray7_ = mclInitializeDouble(0.0);
    _mxarray8_ = mclInitializeString(4, _array9_);
    _mxarray10_ = mclInitializeString(16, _array11_);
    _mxarray12_ = mclInitializeString(4, _array13_);
    _mxarray14_ = mclInitializeString(11, _array15_);
    _mxarray16_ = mclInitializeString(3, _array17_);
    _mxarray18_ = mclInitializeString(4, _array19_);
    _mxarray20_ = mclInitializeString(61, _array21_);
    _mxarray22_ = mclInitializeDouble(-1.0);
    _mxarray23_ = mclInitializeString(4, _array24_);
    _mxarray25_ = mclInitializeString(4, _array26_);
    _mxarray27_ = mclInitializeString(4, _array28_);
    _mxarray29_ = mclInitializeString(45, _array30_);
    _mxarray31_ = mclInitializeDouble(3.0);
    _mxarray32_ = mclInitializeDouble(8.0);
    _mxarray33_ = mclInitializeString(4, _array34_);
    _mxarray35_ = mclInitializeString(2, _array36_);
    _mxarray37_ = mclInitializeString(1, _array38_);
    _mxarray39_ = mclInitializeString(17, _array40_);
    _mxarray41_ = mclInitializeCharVector(0, 0, (mxChar *)NULL);
    _mxarray42_ = mclInitializeString(55, _array43_);
    _mxarray44_ = mclInitializeDouble(4.0);
    _mxarray45_ = mclInitializeString(4, _array46_);
    _mxarray47_ = mclInitializeString(5, _array48_);
    _mxarray49_ = mclInitializeString(1, _array50_);
    _mxarray51_ = mclInitializeString(31, _array52_);
    _mxarray53_ = mclInitializeString(32, _array54_);
    _mxarray55_ = mclInitializeString(13, _array56_);
    _mxarray57_ = mclInitializeString(30, _array58_);
    _mxarray59_ = mclInitializeString(5, _array60_);
    _mxarray61_ = mclInitializeDouble(5.0);
    _mxarray62_ = mclInitializeString(4, _array63_);
    _mxarray64_ = mclInitializeString(4, _array65_);
    _mxarray66_ = mclInitializeString(6, _array67_);
    _mxarray68_ = mclInitializeString(4, _array69_);
    _mxarray70_ = mclInitializeString(8, _array71_);
    _mxarray72_ = mclInitializeString(4, _array73_);
    _mxarray74_ = mclInitializeString(13, _array75_);
    _mxarray76_ = mclInitializeString(4, _array77_);
    _mxarray78_ = mclInitializeString(9, _array79_);
    _mxarray80_ = mclInitializeString(4, _array81_);
    _mxarray82_ = mclInitializeString(8, _array83_);
    _mxarray84_ = mclInitializeString(4, _array85_);
    _mxarray86_ = mclInitializeString(4, _array87_);
    _mxarray88_ = mclInitializeString(4, _array89_);
    _mxarray90_ = mclInitializeString(7, _array91_);
    _mxarray92_ = mclInitializeString(4, _array93_);
    _mxarray94_ = mclInitializeString(7, _array95_);
    _mxarray96_ = mclInitializeString(4, _array97_);
    _mxarray98_ = mclInitializeString(8, _array99_);
    _mxarray100_ = mclInitializeString(4, _array101_);
    _mxarray102_ = mclInitializeString(6, _array103_);
    _mxarray104_ = mclInitializeDoubleVector(4, 1, _array105_);
    _mxarray106_ = mclInitializeDouble(9.0);
    _mxarray107_ = mclInitializeDoubleVector(1, 2, _array108_);
    _mxarray109_ = mclInitializeString(3, _array110_);
    _mxarray111_ = mclInitializeString(30, _array112_);
    _mxarray113_ = mclInitializeDoubleVector(2, 1, _array114_);
    _mxarray115_ = mclInitializeString(11, _array116_);
    _mxarray117_ = mclInitializeString(30, _array118_);
    _mxarray119_ = mclInitializeDouble(14.0);
    _mxarray120_ = mclInitializeString(31, _array121_);
    _mxarray122_ = mclInitializeString(6, _array123_);
    _mxarray124_ = mclInitializeString(35, _array125_);
    _mxarray126_ = mclInitializeString(15, _array127_);
    _mxarray128_ = mclInitializeDouble(6.0);
    _mxarray129_ = mclInitializeString(11, _array130_);
    _mxarray131_ = mclInitializeDouble(7.0);
    _mxarray132_ = mclInitializeString(12, _array133_);
    _mxarray134_ = mclInitializeDouble(17.0);
    _mxarray135_ = mclInitializeString(9, _array136_);
    _mxarray137_ = mclInitializeDouble(34.0);
    _mxarray138_ = mclInitializeString(23, _array139_);
    _mxarray140_ = mclInitializeDouble(49.0);
    _mxarray141_ = mclInitializeString(8, _array142_);
    _mxarray143_ = mclInitializeDouble(50.0);
    _mxarray144_ = mclInitializeString(9, _array145_);
    _mxarray146_ = mclInitializeDouble(257.0);
    _mxarray147_ = mclInitializeString(10, _array148_);
    _mxarray149_ = mclInitializeDouble(258.0);
    _mxarray150_ = mclInitializeString(9, _array151_);
    _mxarray152_ = mclInitializeDouble(259.0);
    _mxarray153_ = mclInitializeString(29, _array154_);
    _mxarray155_ = mclInitializeString(8, _array156_);
    _mxarray157_ = mclInitializeString(25, _array158_);
    _mxarray159_ = mclInitializeString(19, _array160_);
    _mxarray161_ = mclInitializeString(5, _array162_);
    _mxarray163_ = mclInitializeString(5, _array164_);
    _mxarray165_ = mclInitializeString(5, _array166_);
    _mxarray167_ = mclInitializeDouble(24.0);
    _mxarray168_ = mclInitializeString(63, _array169_);
    _mxarray170_ = mclInitializeString(30, _array171_);
    _mxarray172_ = mclInitializeString(41, _array173_);
    _mxarray174_ = mclInitializeString(27, _array175_);
    _mxarray176_ = mclInitializeString(47, _array177_);
    _mxarray178_ = mclInitializeDouble(128.0);
    _mxarray179_ = mclInitializeDouble(32768.0);
    _mxarray180_ = mclInitializeDouble(8388608.0);
}

void TerminateModule_wavread(void) {
    mxDestroyArray(_mxarray180_);
    mxDestroyArray(_mxarray179_);
    mxDestroyArray(_mxarray178_);
    mxDestroyArray(_mxarray176_);
    mxDestroyArray(_mxarray174_);
    mxDestroyArray(_mxarray172_);
    mxDestroyArray(_mxarray170_);
    mxDestroyArray(_mxarray168_);
    mxDestroyArray(_mxarray167_);
    mxDestroyArray(_mxarray165_);
    mxDestroyArray(_mxarray163_);
    mxDestroyArray(_mxarray161_);
    mxDestroyArray(_mxarray159_);
    mxDestroyArray(_mxarray157_);
    mxDestroyArray(_mxarray155_);
    mxDestroyArray(_mxarray153_);
    mxDestroyArray(_mxarray152_);
    mxDestroyArray(_mxarray150_);
    mxDestroyArray(_mxarray149_);
    mxDestroyArray(_mxarray147_);
    mxDestroyArray(_mxarray146_);
    mxDestroyArray(_mxarray144_);
    mxDestroyArray(_mxarray143_);
    mxDestroyArray(_mxarray141_);
    mxDestroyArray(_mxarray140_);
    mxDestroyArray(_mxarray138_);
    mxDestroyArray(_mxarray137_);
    mxDestroyArray(_mxarray135_);
    mxDestroyArray(_mxarray134_);
    mxDestroyArray(_mxarray132_);
    mxDestroyArray(_mxarray131_);
    mxDestroyArray(_mxarray129_);
    mxDestroyArray(_mxarray128_);
    mxDestroyArray(_mxarray126_);
    mxDestroyArray(_mxarray124_);
    mxDestroyArray(_mxarray122_);
    mxDestroyArray(_mxarray120_);
    mxDestroyArray(_mxarray119_);
    mxDestroyArray(_mxarray117_);
    mxDestroyArray(_mxarray115_);
    mxDestroyArray(_mxarray113_);
    mxDestroyArray(_mxarray111_);
    mxDestroyArray(_mxarray109_);
    mxDestroyArray(_mxarray107_);
    mxDestroyArray(_mxarray106_);
    mxDestroyArray(_mxarray104_);
    mxDestroyArray(_mxarray102_);
    mxDestroyArray(_mxarray100_);
    mxDestroyArray(_mxarray98_);
    mxDestroyArray(_mxarray96_);
    mxDestroyArray(_mxarray94_);
    mxDestroyArray(_mxarray92_);
    mxDestroyArray(_mxarray90_);
    mxDestroyArray(_mxarray88_);
    mxDestroyArray(_mxarray86_);
    mxDestroyArray(_mxarray84_);
    mxDestroyArray(_mxarray82_);
    mxDestroyArray(_mxarray80_);
    mxDestroyArray(_mxarray78_);
    mxDestroyArray(_mxarray76_);
    mxDestroyArray(_mxarray74_);
    mxDestroyArray(_mxarray72_);
    mxDestroyArray(_mxarray70_);
    mxDestroyArray(_mxarray68_);
    mxDestroyArray(_mxarray66_);
    mxDestroyArray(_mxarray64_);
    mxDestroyArray(_mxarray62_);
    mxDestroyArray(_mxarray61_);
    mxDestroyArray(_mxarray59_);
    mxDestroyArray(_mxarray57_);
    mxDestroyArray(_mxarray55_);
    mxDestroyArray(_mxarray53_);
    mxDestroyArray(_mxarray51_);
    mxDestroyArray(_mxarray49_);
    mxDestroyArray(_mxarray47_);
    mxDestroyArray(_mxarray45_);
    mxDestroyArray(_mxarray44_);
    mxDestroyArray(_mxarray42_);
    mxDestroyArray(_mxarray41_);
    mxDestroyArray(_mxarray39_);
    mxDestroyArray(_mxarray37_);
    mxDestroyArray(_mxarray35_);
    mxDestroyArray(_mxarray33_);
    mxDestroyArray(_mxarray32_);
    mxDestroyArray(_mxarray31_);
    mxDestroyArray(_mxarray29_);
    mxDestroyArray(_mxarray27_);
    mxDestroyArray(_mxarray25_);
    mxDestroyArray(_mxarray23_);
    mxDestroyArray(_mxarray22_);
    mxDestroyArray(_mxarray20_);
    mxDestroyArray(_mxarray18_);
    mxDestroyArray(_mxarray16_);
    mxDestroyArray(_mxarray14_);
    mxDestroyArray(_mxarray12_);
    mxDestroyArray(_mxarray10_);
    mxDestroyArray(_mxarray8_);
    mxDestroyArray(_mxarray7_);
    mxDestroyArray(_mxarray5_);
    mxDestroyArray(_mxarray3_);
    mxDestroyArray(_mxarray2_);
    mxDestroyArray(_mxarray1_);
    mxDestroyArray(_mxarray0_);
}

static mxArray * mlfWavread_open_wav(mxArray * * msg, mxArray * file);
static void mlxWavread_open_wav(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]);
static mxArray * mlfWavread_read_ckinfo(mxArray * * msg, mxArray * fid);
static void mlxWavread_read_ckinfo(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfWavread_find_cktype(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ftype);
static void mlxWavread_find_cktype(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfWavread_check_rifftype(mxArray * fid, mxArray * ftype);
static void mlxWavread_check_rifftype(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]);
static mxArray * mlfWavread_read_listck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck);
static void mlxWavread_read_listck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfWavread_read_dispck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck);
static void mlxWavread_read_dispck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfWavread_read_factck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck);
static void mlxWavread_read_factck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]);
static mxArray * mlfWavread_read_wavefmt(mxArray * * msg,
                                         mxArray * fid,
                                         mxArray * ck,
                                         mxArray * orig_opt_ck);
static void mlxWavread_read_wavefmt(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]);
static mxArray * mlfWavread_read_fmt_pcm(mxArray * * msg,
                                         mxArray * fid,
                                         mxArray * ck,
                                         mxArray * fmt_in);
static void mlxWavread_read_fmt_pcm(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]);
static mxArray * mlfWavread_read_wavedat(mxArray * * msg,
                                         mxArray * datack,
                                         mxArray * wavefmt,
                                         mxArray * ext);
static void mlxWavread_read_wavedat(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]);
static mxArray * mlfWavread_read_dat_pcm(mxArray * * msg,
                                         mxArray * datack,
                                         mxArray * wavefmt,
                                         mxArray * ext);
static void mlxWavread_read_dat_pcm(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]);
static mxArray * Mwavread(mxArray * * Fs,
                          mxArray * * bits,
                          mxArray * * opt_ck,
                          int nargout_,
                          mxArray * file,
                          mxArray * ext);
static mxArray * Mwavread_open_wav(mxArray * * msg,
                                   int nargout_,
                                   mxArray * file);
static mxArray * Mwavread_read_ckinfo(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid);
static mxArray * Mwavread_find_cktype(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ftype);
static mxArray * Mwavread_check_rifftype(int nargout_,
                                         mxArray * fid,
                                         mxArray * ftype);
static mxArray * Mwavread_read_listck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck);
static mxArray * Mwavread_read_dispck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck);
static mxArray * Mwavread_read_factck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck);
static mxArray * Mwavread_read_wavefmt(mxArray * * msg,
                                       int nargout_,
                                       mxArray * fid,
                                       mxArray * ck,
                                       mxArray * orig_opt_ck);
static mxArray * Mwavread_read_fmt_pcm(mxArray * * msg,
                                       int nargout_,
                                       mxArray * fid,
                                       mxArray * ck,
                                       mxArray * fmt_in);
static mxArray * Mwavread_read_wavedat(mxArray * * msg,
                                       int nargout_,
                                       mxArray * datack,
                                       mxArray * wavefmt,
                                       mxArray * ext);
static mxArray * Mwavread_read_dat_pcm(mxArray * * msg,
                                       int nargout_,
                                       mxArray * datack,
                                       mxArray * wavefmt,
                                       mxArray * ext);

static mexFunctionTableEntry local_function_table_[11]
  = { { "open_wav", mlxWavread_open_wav, 1, 2, NULL },
      { "read_ckinfo", mlxWavread_read_ckinfo, 1, 2, NULL },
      { "find_cktype", mlxWavread_find_cktype, 2, 2, NULL },
      { "check_rifftype", mlxWavread_check_rifftype, 2, 1, NULL },
      { "read_listck", mlxWavread_read_listck, 3, 2, NULL },
      { "read_dispck", mlxWavread_read_dispck, 3, 2, NULL },
      { "read_factck", mlxWavread_read_factck, 3, 2, NULL },
      { "read_wavefmt", mlxWavread_read_wavefmt, 3, 2, NULL },
      { "read_fmt_pcm", mlxWavread_read_fmt_pcm, 3, 2, NULL },
      { "read_wavedat", mlxWavread_read_wavedat, 3, 2, NULL },
      { "read_dat_pcm", mlxWavread_read_dat_pcm, 3, 2, NULL } };

_mexLocalFunctionTable _local_function_table_wavread
  = { 11, local_function_table_ };

/*
 * The function "mlfWavread" contains the normal interface for the "wavread"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines
 * 1-162). This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
mxArray * mlfWavread(mxArray * * Fs,
                     mxArray * * bits,
                     mxArray * * opt_ck,
                     mxArray * file,
                     mxArray * ext) {
    int nargout = 1;
    mxArray * y = NULL;
    mxArray * Fs__ = NULL;
    mxArray * bits__ = NULL;
    mxArray * opt_ck__ = NULL;
    mlfEnterNewContext(3, 2, Fs, bits, opt_ck, file, ext);
    if (Fs != NULL) {
        ++nargout;
    }
    if (bits != NULL) {
        ++nargout;
    }
    if (opt_ck != NULL) {
        ++nargout;
    }
    y = Mwavread(&Fs__, &bits__, &opt_ck__, nargout, file, ext);
    mlfRestorePreviousContext(3, 2, Fs, bits, opt_ck, file, ext);
    if (Fs != NULL) {
        mclCopyOutputArg(Fs, Fs__);
    } else {
        mxDestroyArray(Fs__);
    }
    if (bits != NULL) {
        mclCopyOutputArg(bits, bits__);
    } else {
        mxDestroyArray(bits__);
    }
    if (opt_ck != NULL) {
        mclCopyOutputArg(opt_ck, opt_ck__);
    } else {
        mxDestroyArray(opt_ck__);
    }
    return mlfReturnValue(y);
}

/*
 * The function "mlxWavread" contains the feval interface for the "wavread"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines
 * 1-162). The feval function calls the implementation version of wavread
 * through this function. This function processes any input arguments and
 * passes them to the implementation version of the function, appearing above.
 */
void mlxWavread(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[4];
    int i;
    if (nlhs > 4) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread Line: 1 Column: "
            "1 The function \"wavread\" was called with mor"
            "e than the declared number of outputs (4)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread Line: 1 Column:"
            " 1 The function \"wavread\" was called with m"
            "ore than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 4; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0]
      = Mwavread(&mplhs[1], &mplhs[2], &mplhs[3], nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 4 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 4; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_open_wav" contains the normal interface for the
 * "wavread/open_wav" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 162-180). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_open_wav(mxArray * * msg, mxArray * file) {
    int nargout = 1;
    mxArray * fid = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 1, msg, file);
    if (msg != NULL) {
        ++nargout;
    }
    fid = Mwavread_open_wav(&msg__, nargout, file);
    mlfRestorePreviousContext(1, 1, msg, file);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(fid);
}

/*
 * The function "mlxWavread_open_wav" contains the feval interface for the
 * "wavread/open_wav" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 162-180). The feval
 * function calls the implementation version of wavread/open_wav through this
 * function. This function processes any input arguments and passes them to the
 * implementation version of the function, appearing above.
 */
static void mlxWavread_open_wav(int nlhs,
                                mxArray * plhs[],
                                int nrhs,
                                mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/open_wav Line: 162 Col"
            "umn: 1 The function \"wavread/open_wav\" was called "
            "with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/open_wav Line: 162 Col"
            "umn: 1 The function \"wavread/open_wav\" was called "
            "with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mwavread_open_wav(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_ckinfo" contains the normal interface for the
 * "wavread/read_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 180-219). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_ckinfo(mxArray * * msg, mxArray * fid) {
    int nargout = 1;
    mxArray * ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 1, msg, fid);
    if (msg != NULL) {
        ++nargout;
    }
    ck = Mwavread_read_ckinfo(&msg__, nargout, fid);
    mlfRestorePreviousContext(1, 1, msg, fid);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(ck);
}

/*
 * The function "mlxWavread_read_ckinfo" contains the feval interface for the
 * "wavread/read_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 180-219). The feval
 * function calls the implementation version of wavread/read_ckinfo through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_ckinfo(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[1];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_ckinfo Line: 180 Co"
            "lumn: 1 The function \"wavread/read_ckinfo\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_ckinfo Line: 180 Co"
            "lumn: 1 The function \"wavread/read_ckinfo\" was calle"
            "d with more than the declared number of inputs (1)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 1 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 1; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 1, mprhs[0]);
    mplhs[0] = Mwavread_read_ckinfo(&mplhs[1], nlhs, mprhs[0]);
    mlfRestorePreviousContext(0, 1, mprhs[0]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_find_cktype" contains the normal interface for the
 * "wavread/find_cktype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 219-239). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_find_cktype(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ftype) {
    int nargout = 1;
    mxArray * ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 2, msg, fid, ftype);
    if (msg != NULL) {
        ++nargout;
    }
    ck = Mwavread_find_cktype(&msg__, nargout, fid, ftype);
    mlfRestorePreviousContext(1, 2, msg, fid, ftype);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(ck);
}

/*
 * The function "mlxWavread_find_cktype" contains the feval interface for the
 * "wavread/find_cktype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 219-239). The feval
 * function calls the implementation version of wavread/find_cktype through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_find_cktype(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/find_cktype Line: 219 Co"
            "lumn: 1 The function \"wavread/find_cktype\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/find_cktype Line: 219 Co"
            "lumn: 1 The function \"wavread/find_cktype\" was calle"
            "d with more than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mwavread_find_cktype(&mplhs[1], nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_check_rifftype" contains the normal interface for
 * the "wavread/check_rifftype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 239-256). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_check_rifftype(mxArray * fid, mxArray * ftype) {
    int nargout = 1;
    mxArray * msg = NULL;
    mlfEnterNewContext(0, 2, fid, ftype);
    msg = Mwavread_check_rifftype(nargout, fid, ftype);
    mlfRestorePreviousContext(0, 2, fid, ftype);
    return mlfReturnValue(msg);
}

/*
 * The function "mlxWavread_check_rifftype" contains the feval interface for
 * the "wavread/check_rifftype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 239-256). The feval
 * function calls the implementation version of wavread/check_rifftype through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_check_rifftype(int nlhs,
                                      mxArray * plhs[],
                                      int nrhs,
                                      mxArray * prhs[]) {
    mxArray * mprhs[2];
    mxArray * mplhs[1];
    int i;
    if (nlhs > 1) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/check_rifftype Line: 239 C"
            "olumn: 1 The function \"wavread/check_rifftype\" was cal"
            "led with more than the declared number of outputs (1)."),
          NULL);
    }
    if (nrhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/check_rifftype Line: 239 C"
            "olumn: 1 The function \"wavread/check_rifftype\" was cal"
            "led with more than the declared number of inputs (2)."),
          NULL);
    }
    for (i = 0; i < 1; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 2 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 2; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 2, mprhs[0], mprhs[1]);
    mplhs[0] = Mwavread_check_rifftype(nlhs, mprhs[0], mprhs[1]);
    mlfRestorePreviousContext(0, 2, mprhs[0], mprhs[1]);
    plhs[0] = mplhs[0];
}

/*
 * The function "mlfWavread_read_listck" contains the normal interface for the
 * "wavread/read_listck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 256-345). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_listck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck) {
    int nargout = 1;
    mxArray * opt_ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        ++nargout;
    }
    opt_ck = Mwavread_read_listck(&msg__, nargout, fid, ck, orig_opt_ck);
    mlfRestorePreviousContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(opt_ck);
}

/*
 * The function "mlxWavread_read_listck" contains the feval interface for the
 * "wavread/read_listck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 256-345). The feval
 * function calls the implementation version of wavread/read_listck through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_listck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_listck Line: 256 Co"
            "lumn: 1 The function \"wavread/read_listck\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_listck Line: 256 Co"
            "lumn: 1 The function \"wavread/read_listck\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_listck(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_dispck" contains the normal interface for the
 * "wavread/read_dispck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 345-392). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_dispck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck) {
    int nargout = 1;
    mxArray * opt_ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        ++nargout;
    }
    opt_ck = Mwavread_read_dispck(&msg__, nargout, fid, ck, orig_opt_ck);
    mlfRestorePreviousContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(opt_ck);
}

/*
 * The function "mlxWavread_read_dispck" contains the feval interface for the
 * "wavread/read_dispck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 345-392). The feval
 * function calls the implementation version of wavread/read_dispck through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_dispck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_dispck Line: 345 Co"
            "lumn: 1 The function \"wavread/read_dispck\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_dispck Line: 345 Co"
            "lumn: 1 The function \"wavread/read_dispck\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_dispck(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_factck" contains the normal interface for the
 * "wavread/read_factck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 392-427). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_factck(mxArray * * msg,
                                        mxArray * fid,
                                        mxArray * ck,
                                        mxArray * orig_opt_ck) {
    int nargout = 1;
    mxArray * opt_ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        ++nargout;
    }
    opt_ck = Mwavread_read_factck(&msg__, nargout, fid, ck, orig_opt_ck);
    mlfRestorePreviousContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(opt_ck);
}

/*
 * The function "mlxWavread_read_factck" contains the feval interface for the
 * "wavread/read_factck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 392-427). The feval
 * function calls the implementation version of wavread/read_factck through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_factck(int nlhs,
                                   mxArray * plhs[],
                                   int nrhs,
                                   mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_factck Line: 392 Co"
            "lumn: 1 The function \"wavread/read_factck\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_factck Line: 392 Co"
            "lumn: 1 The function \"wavread/read_factck\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_factck(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_wavefmt" contains the normal interface for the
 * "wavread/read_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 427-471). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_wavefmt(mxArray * * msg,
                                         mxArray * fid,
                                         mxArray * ck,
                                         mxArray * orig_opt_ck) {
    int nargout = 1;
    mxArray * opt_ck = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        ++nargout;
    }
    opt_ck = Mwavread_read_wavefmt(&msg__, nargout, fid, ck, orig_opt_ck);
    mlfRestorePreviousContext(1, 3, msg, fid, ck, orig_opt_ck);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(opt_ck);
}

/*
 * The function "mlxWavread_read_wavefmt" contains the feval interface for the
 * "wavread/read_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 427-471). The feval
 * function calls the implementation version of wavread/read_wavefmt through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_wavefmt(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_wavefmt Line: 427 Co"
            "lumn: 1 The function \"wavread/read_wavefmt\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_wavefmt Line: 427 Co"
            "lumn: 1 The function \"wavread/read_wavefmt\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_wavefmt(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_fmt_pcm" contains the normal interface for the
 * "wavread/read_fmt_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 471-529). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_fmt_pcm(mxArray * * msg,
                                         mxArray * fid,
                                         mxArray * ck,
                                         mxArray * fmt_in) {
    int nargout = 1;
    mxArray * fmt = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, fid, ck, fmt_in);
    if (msg != NULL) {
        ++nargout;
    }
    fmt = Mwavread_read_fmt_pcm(&msg__, nargout, fid, ck, fmt_in);
    mlfRestorePreviousContext(1, 3, msg, fid, ck, fmt_in);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(fmt);
}

/*
 * The function "mlxWavread_read_fmt_pcm" contains the feval interface for the
 * "wavread/read_fmt_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 471-529). The feval
 * function calls the implementation version of wavread/read_fmt_pcm through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_fmt_pcm(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_fmt_pcm Line: 471 Co"
            "lumn: 1 The function \"wavread/read_fmt_pcm\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_fmt_pcm Line: 471 Co"
            "lumn: 1 The function \"wavread/read_fmt_pcm\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_fmt_pcm(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_wavedat" contains the normal interface for the
 * "wavread/read_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 529-582). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_wavedat(mxArray * * msg,
                                         mxArray * datack,
                                         mxArray * wavefmt,
                                         mxArray * ext) {
    int nargout = 1;
    mxArray * dat = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, datack, wavefmt, ext);
    if (msg != NULL) {
        ++nargout;
    }
    dat = Mwavread_read_wavedat(&msg__, nargout, datack, wavefmt, ext);
    mlfRestorePreviousContext(1, 3, msg, datack, wavefmt, ext);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(dat);
}

/*
 * The function "mlxWavread_read_wavedat" contains the feval interface for the
 * "wavread/read_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 529-582). The feval
 * function calls the implementation version of wavread/read_wavedat through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_wavedat(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_wavedat Line: 529 Co"
            "lumn: 1 The function \"wavread/read_wavedat\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_wavedat Line: 529 Co"
            "lumn: 1 The function \"wavread/read_wavedat\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_wavedat(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "mlfWavread_read_dat_pcm" contains the normal interface for the
 * "wavread/read_dat_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 582-703). This function
 * processes any input arguments and passes them to the implementation version
 * of the function, appearing above.
 */
static mxArray * mlfWavread_read_dat_pcm(mxArray * * msg,
                                         mxArray * datack,
                                         mxArray * wavefmt,
                                         mxArray * ext) {
    int nargout = 1;
    mxArray * dat = NULL;
    mxArray * msg__ = NULL;
    mlfEnterNewContext(1, 3, msg, datack, wavefmt, ext);
    if (msg != NULL) {
        ++nargout;
    }
    dat = Mwavread_read_dat_pcm(&msg__, nargout, datack, wavefmt, ext);
    mlfRestorePreviousContext(1, 3, msg, datack, wavefmt, ext);
    if (msg != NULL) {
        mclCopyOutputArg(msg, msg__);
    } else {
        mxDestroyArray(msg__);
    }
    return mlfReturnValue(dat);
}

/*
 * The function "mlxWavread_read_dat_pcm" contains the feval interface for the
 * "wavread/read_dat_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 582-703). The feval
 * function calls the implementation version of wavread/read_dat_pcm through
 * this function. This function processes any input arguments and passes them
 * to the implementation version of the function, appearing above.
 */
static void mlxWavread_read_dat_pcm(int nlhs,
                                    mxArray * plhs[],
                                    int nrhs,
                                    mxArray * prhs[]) {
    mxArray * mprhs[3];
    mxArray * mplhs[2];
    int i;
    if (nlhs > 2) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_dat_pcm Line: 582 Co"
            "lumn: 1 The function \"wavread/read_dat_pcm\" was calle"
            "d with more than the declared number of outputs (2)."),
          NULL);
    }
    if (nrhs > 3) {
        mlfError(
          mxCreateString(
            "Run-time Error: File: wavread/read_dat_pcm Line: 582 Co"
            "lumn: 1 The function \"wavread/read_dat_pcm\" was calle"
            "d with more than the declared number of inputs (3)."),
          NULL);
    }
    for (i = 0; i < 2; ++i) {
        mplhs[i] = NULL;
    }
    for (i = 0; i < 3 && i < nrhs; ++i) {
        mprhs[i] = prhs[i];
    }
    for (; i < 3; ++i) {
        mprhs[i] = NULL;
    }
    mlfEnterNewContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    mplhs[0]
      = Mwavread_read_dat_pcm(&mplhs[1], nlhs, mprhs[0], mprhs[1], mprhs[2]);
    mlfRestorePreviousContext(0, 3, mprhs[0], mprhs[1], mprhs[2]);
    plhs[0] = mplhs[0];
    for (i = 1; i < 2 && i < nlhs; ++i) {
        plhs[i] = mplhs[i];
    }
    for (; i < 2; ++i) {
        mxDestroyArray(mplhs[i]);
    }
}

/*
 * The function "Mwavread" is the implementation version of the "wavread"
 * M-function from file "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines
 * 1-162). It contains the actual compiled code for that M-function. It is a
 * static function and must only be called from one of the interface functions,
 * appearing below.
 */
/*
 * function [y,Fs,bits,opt_ck] = wavread(file,ext)
 */
static mxArray * Mwavread(mxArray * * Fs,
                          mxArray * * bits,
                          mxArray * * opt_ck,
                          int nargout_,
                          mxArray * file,
                          mxArray * ext) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    int nargin_ = mclNargin(2, file, ext, NULL);
    mxArray * y = NULL;
    mxArray * datack = NULL;
    mxArray * samples = NULL;
    mxArray * ck = NULL;
    mxArray * end_of_file = NULL;
    mxArray * found_data = NULL;
    mxArray * riffck = NULL;
    mxArray * msg = NULL;
    mxArray * fid = NULL;
    mxArray * exts = NULL;
    mxArray * ans = NULL;
    mclCopyArray(&file);
    mclCopyArray(&ext);
    /*
     * %WAVREAD Read Microsoft WAVE (".wav") sound file.
     * %   Y=WAVREAD(FILE) reads a WAVE file specified by the string FILE,
     * %   returning the sampled data in Y. The ".wav" extension is appended
     * %   if no extension is given.  Amplitude values are in the range [-1,+1].
     * %
     * %   [Y,FS,NBITS]=WAVREAD(FILE) returns the sample rate (FS) in Hertz
     * %   and the number of bits per sample (NBITS) used to encode the
     * %   data in the file.
     * %
     * %   [...]=WAVREAD(FILE,N) returns only the first N samples from each
     * %       channel in the file.
     * %   [...]=WAVREAD(FILE,[N1 N2]) returns only samples N1 through N2 from
     * %       each channel in the file.
     * %   SIZ=WAVREAD(FILE,'size') returns the size of the audio data contained
     * %       in the file in place of the actual audio data, returning the
     * %       vector SIZ=[samples channels].
     * %
     * %   [Y,FS,NBITS,OPTS]=WAVREAD(...) returns a structure OPTS of additional
     * %       information contained in the WAV file.  The content of this
     * %       structure differs from file to file.  Typical structure fields
     * %       include '.fmt' (audio format information) and '.info' (text
     * %       which may describe subject title, copy right, etc.)
     * %
     * %   Supports multi-channel data, with up to 32 bits per sample.
     * %
     * % NOTE: This file reader only supports Microsoft PCM data format.
     * %       It does not support wave-list data.
     * %
     * %   See also WAVWRITE, AUREAD, AUWRITE.
     * 
     * %   Author: D. Orofino
     * %   Copyright 1984-2002 The MathWorks, Inc. 
     * %   $Revision: 5.28 $  $Date: 2002/05/30 20:42:03 $
     * 
     * % Parse input arguments:
     * nargchk(1,2,nargin);
     */
    mclAssignAns(&ans, mlfNargchk(_mxarray0_, _mxarray1_, mlfScalar(nargin_)));
    /*
     * if nargin<2, ext=[]; end    % Default - read all samples
     */
    if (nargin_ < 2) {
        mlfAssign(&ext, _mxarray2_);
    }
    /*
     * exts = prod(size(ext));     % length of extent info
     */
    mlfAssign(
      &exts,
      mlfProd(mlfSize(mclValueVarargout(), mclVa(ext, "ext"), NULL), NULL));
    /*
     * if ~strncmpi(ext,'size',exts) & (exts > 2),
     */
    {
        mxArray * a_
          = mclInitialize(
              mclNot(
                mlfStrncmpi(
                  mclVa(ext, "ext"), _mxarray5_, mclVv(exts, "exts"))));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mclGt(mclVv(exts, "exts"), _mxarray1_)))) {
            mxDestroyArray(a_);
            /*
             * error('Index range must be specified as a scalar or 2-element vector.');
             */
            mlfError(_mxarray3_, NULL);
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * if ~ischar(ext) & exts==1,
     */
    {
        mxArray * a_ = mclInitialize(mclNot(mlfIschar(mclVa(ext, "ext"))));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mclEq(mclVv(exts, "exts"), _mxarray0_)))) {
            mxDestroyArray(a_);
            /*
             * if ext==0,
             */
            if (mclEqBool(mclVa(ext, "ext"), _mxarray7_)) {
                /*
                 * ext='size';           % synonym for size
                 */
                mlfAssign(&ext, _mxarray5_);
            /*
             * else
             */
            } else {
                /*
                 * ext=[1 ext];          % Prepend start sample index
                 */
                mlfAssign(
                  &ext, mlfHorzcat(_mxarray0_, mclVa(ext, "ext"), NULL));
            /*
             * end
             */
            }
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * % Open WAV file:
     * [fid,msg] = open_wav(file);
     */
    mlfAssign(&fid, mlfWavread_open_wav(&msg, mclVa(file, "file")));
    /*
     * error(msg);
     */
    mlfError(mclVv(msg, "msg"), NULL);
    /*
     * 
     * % Now the file is open - wrap remaining code in try/catch so we can 
     * % close the file if an error occurs
     * try
     */
    mlfTry {
        /*
         * 
         * % Find the first RIFF chunk:
         * [riffck,msg] = find_cktype(fid,'RIFF');
         */
        mlfAssign(
          &riffck, mlfWavread_find_cktype(&msg, mclVv(fid, "fid"), _mxarray8_));
        /*
         * %error(msg);
         * if ~isempty(msg),
         */
        if (mclNotBool(mlfIsempty(mclVv(msg, "msg")))) {
            /*
             * error('Not a WAVE file.');
             */
            mlfError(_mxarray10_, NULL);
        /*
         * end
         */
        }
        /*
         * 
         * % Verify that RIFF file is WAVE data type:
         * msg = check_rifftype(fid,'WAVE');
         */
        mlfAssign(
          &msg, mlfWavread_check_rifftype(mclVv(fid, "fid"), _mxarray12_));
        /*
         * error(msg);
         */
        mlfError(mclVv(msg, "msg"), NULL);
        /*
         * 
         * % Find optional chunks, and don't stop till <data-ck> found:
         * found_data  = 0;
         */
        mlfAssign(&found_data, _mxarray7_);
        /*
         * end_of_file = 0;
         */
        mlfAssign(&end_of_file, _mxarray7_);
        /*
         * opt_ck      = [];
         */
        mlfAssign(opt_ck, _mxarray2_);
        /*
         * 
         * while(~end_of_file),
         */
        while (mclNotBool(mclVv(end_of_file, "end_of_file"))) {
            /*
             * [ck,msg] = find_cktype(fid);
             */
            mlfAssign(
              &ck, mlfWavread_find_cktype(&msg, mclVv(fid, "fid"), NULL));
            /*
             * error(msg);
             */
            mlfError(mclVv(msg, "msg"), NULL);
            /*
             * 
             * switch lower(ck.ID)
             */
            {
                mxArray * v_
                  = mclInitialize(
                      mclFeval(
                        mclValueVarargout(),
                        mlxLower,
                        mlfIndexRef(mclVv(ck, "ck"), ".ID"),
                        NULL));
                if (mclSwitchCompare(v_, _mxarray14_)) {
                    /*
                     * 
                     * case 'end of file'
                     * end_of_file = 1;
                     */
                    mlfAssign(&end_of_file, _mxarray0_);
                /*
                 * 
                 * case 'fmt'
                 */
                } else if (mclSwitchCompare(v_, _mxarray16_)) {
                    /*
                     * % <fmt-ck> found      
                     * [opt_ck,msg] = read_wavefmt(fid,ck,opt_ck);
                     */
                    mlfAssign(
                      opt_ck,
                      mlfWavread_read_wavefmt(
                        &msg,
                        mclVv(fid, "fid"),
                        mclVv(ck, "ck"),
                        mclVv(*opt_ck, "opt_ck")));
                    /*
                     * error(msg);
                     */
                    mlfError(mclVv(msg, "msg"), NULL);
                /*
                 * 
                 * case 'data'
                 */
                } else if (mclSwitchCompare(v_, _mxarray18_)) {
                    /*
                     * % <data-ck> found:
                     * found_data = 1;
                     */
                    mlfAssign(&found_data, _mxarray0_);
                    /*
                     * if ~isfield(opt_ck,'fmt'),
                     */
                    if (mclNotBool(
                          mlfIsfield(mclVv(*opt_ck, "opt_ck"), _mxarray16_))) {
                        /*
                         * error('Corrupt WAV file: found audio data before format information.');
                         */
                        mlfError(_mxarray20_, NULL);
                    /*
                     * end
                     */
                    }
                    /*
                     * 
                     * if strncmpi(ext,'size',exts) | ...
                     */
                    {
                        mxArray * a_
                          = mclInitialize(
                              mlfStrncmpi(
                                mclVa(ext, "ext"),
                                _mxarray5_,
                                mclVv(exts, "exts")));
                        if (mlfTobool(a_)) {
                        } else {
                            /*
                             * (~isempty(ext) & all(ext==0)),
                             */
                            mxArray * b_
                              = mclInitialize(
                                  mclNot(mlfIsempty(mclVa(ext, "ext"))));
                            if (mlfTobool(b_)) {
                                mlfAssign(
                                  &b_,
                                  mclAnd(
                                    b_,
                                    mlfAll(
                                      mclEq(mclVa(ext, "ext"), _mxarray7_),
                                      NULL)));
                            } else {
                                mlfAssign(&b_, mlfScalar(0));
                            }
                            {
                                mxLogical c_0 = mlfTobool(mclOr(a_, b_));
                                mxDestroyArray(b_);
                                if (c_0) {
                                } else {
                                    goto l0_;
                                }
                            }
                        }
                        mxDestroyArray(a_);
                        /*
                         * % Caller doesn't want data - just data size:
                         * [samples,msg] = read_wavedat(ck, opt_ck.fmt, -1);
                         */
                        mclFeval(
                          mlfVarargout(&samples, &msg, NULL),
                          mlxWavread_read_wavedat,
                          mclVv(ck, "ck"),
                          mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt"),
                          _mxarray22_,
                          NULL);
                        /*
                         * error(msg);
                         */
                        mlfError(mclVv(msg, "msg"), NULL);
                        /*
                         * y = [samples opt_ck.fmt.nChannels];
                         */
                        mlfAssign(
                          &y,
                          mlfHorzcat(
                            mclVv(samples, "samples"),
                            mlfIndexRef(
                              mclVv(*opt_ck, "opt_ck"), ".fmt.nChannels"),
                            NULL));
                        goto done_;
                        l0_:
                        mxDestroyArray(a_);
                        /*
                         * 
                         * else
                         * % Read <wave-data>:
                         * [datack,msg] = read_wavedat(ck, opt_ck.fmt, ext);
                         */
                        mclFeval(
                          mlfVarargout(&datack, &msg, NULL),
                          mlxWavread_read_wavedat,
                          mclVv(ck, "ck"),
                          mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt"),
                          mclVa(ext, "ext"),
                          NULL);
                        /*
                         * error(msg);
                         */
                        mlfError(mclVv(msg, "msg"), NULL);
                        /*
                         * y = datack.Data;
                         */
                        mlfAssign(
                          &y, mlfIndexRef(mclVv(datack, "datack"), ".Data"));
                        /*
                         * 
                         * end
                         */
                        done_:;
                    }
                /*
                 * 
                 * case 'fact'
                 */
                } else if (mclSwitchCompare(v_, _mxarray23_)) {
                    /*
                     * % Optional <fact-ck> found:
                     * [opt_ck,msg] = read_factck(fid, ck, opt_ck);
                     */
                    mlfAssign(
                      opt_ck,
                      mlfWavread_read_factck(
                        &msg,
                        mclVv(fid, "fid"),
                        mclVv(ck, "ck"),
                        mclVv(*opt_ck, "opt_ck")));
                    /*
                     * error(msg);
                     */
                    mlfError(mclVv(msg, "msg"), NULL);
                /*
                 * 
                 * case 'disp'
                 */
                } else if (mclSwitchCompare(v_, _mxarray25_)) {
                    /*
                     * % Optional <disp-ck> found:
                     * [opt_ck,msg] = read_dispck(fid, ck, opt_ck);
                     */
                    mlfAssign(
                      opt_ck,
                      mlfWavread_read_dispck(
                        &msg,
                        mclVv(fid, "fid"),
                        mclVv(ck, "ck"),
                        mclVv(*opt_ck, "opt_ck")));
                    /*
                     * error(msg);
                     */
                    mlfError(mclVv(msg, "msg"), NULL);
                /*
                 * 
                 * case 'list'
                 */
                } else if (mclSwitchCompare(v_, _mxarray27_)) {
                    /*
                     * % Optional <list-ck> found:
                     * [opt_ck, msg] = read_listck(fid, ck, opt_ck);
                     */
                    mlfAssign(
                      opt_ck,
                      mlfWavread_read_listck(
                        &msg,
                        mclVv(fid, "fid"),
                        mclVv(ck, "ck"),
                        mclVv(*opt_ck, "opt_ck")));
                    /*
                     * error(msg);
                     */
                    mlfError(mclVv(msg, "msg"), NULL);
                /*
                 * 
                 * otherwise
                 */
                } else {
                    /*
                     * % Skip over data in unprocessed chunks:
                     * if rem(ck.Size,2), ck.Size=ck.Size+1; end
                     */
                    if (mlfTobool(
                          mclFeval(
                            mclValueVarargout(),
                            mlxRem,
                            mlfIndexRef(mclVv(ck, "ck"), ".Size"),
                            _mxarray1_,
                            NULL))) {
                        mlfIndexAssign(
                          &ck,
                          ".Size",
                          mclFeval(
                            mclValueVarargout(),
                            mlxPlus,
                            mlfIndexRef(mclVv(ck, "ck"), ".Size"),
                            _mxarray0_,
                            NULL));
                    }
                    /*
                     * if(fseek(fid,ck.Size,0)==-1),
                     */
                    if (mclEqBool(
                          mclFeval(
                            mclValueVarargout(),
                            mlxFseek,
                            mclVv(fid, "fid"),
                            mlfIndexRef(mclVv(ck, "ck"), ".Size"),
                            _mxarray7_,
                            NULL),
                          _mxarray22_)) {
                        /*
                         * error('Incorrect chunk size information in WAV file.');
                         */
                        mlfError(_mxarray29_, NULL);
                    /*
                     * end
                     */
                    }
                /*
                 * end
                 */
                }
                mxDestroyArray(v_);
            }
        /*
         * end
         */
        }
    /*
     * 
     * catch
     */
    } mlfCatch {
        /*
         * fclose(fid);
         */
        mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
        /*
         * error(lasterr);
         */
        mlfError(mlfLasterr(NULL, NULL, NULL), NULL);
    /*
     * end
     */
    } mlfEndCatch
    /*
     * 
     * fclose(fid);
     */
    mclAssignAns(&ans, mlfFclose(mclVv(fid, "fid")));
    /*
     * 
     * % Parse structure info for return to user:
     * Fs = opt_ck.fmt.nSamplesPerSec;
     */
    mlfAssign(Fs, mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt.nSamplesPerSec"));
    /*
     * if opt_ck.fmt.wFormatTag == 1 | opt_ck.fmt.wFormatTag == 3,
     */
    {
        mxArray * a_
          = mclInitialize(
              mclFeval(
                mclValueVarargout(),
                mlxEq,
                mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt.wFormatTag"),
                _mxarray0_,
                NULL));
        if (mlfTobool(a_)
            || mlfTobool(
                 mclOr(
                   a_,
                   mclFeval(
                     mclValueVarargout(),
                     mlxEq,
                     mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt.wFormatTag"),
                     _mxarray31_,
                     NULL)))) {
            mxDestroyArray(a_);
            /*
             * %   Type 3 floating point has no nBitsPerSample field, so use 
             * %   nBlockAlign to figure out number of bits
             * bits = (opt_ck.fmt.nBlockAlign / opt_ck.fmt.nChannels) * 8;
             */
            mlfAssign(
              bits,
              mclMtimes(
                mclFeval(
                  mclValueVarargout(),
                  mlxMrdivide,
                  mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt.nBlockAlign"),
                  mlfIndexRef(mclVv(*opt_ck, "opt_ck"), ".fmt.nChannels"),
                  NULL),
                _mxarray32_));
        /*
         * else
         */
        } else {
            mxDestroyArray(a_);
            /*
             * bits = [];  % Unknown
             */
            mlfAssign(bits, _mxarray2_);
        }
    /*
     * end
     */
    }
    mclValidateOutput(y, 1, nargout_, "y", "wavread");
    mclValidateOutput(*Fs, 2, nargout_, "Fs", "wavread");
    mclValidateOutput(*bits, 3, nargout_, "bits", "wavread");
    mclValidateOutput(*opt_ck, 4, nargout_, "opt_ck", "wavread");
    mxDestroyArray(ans);
    mxDestroyArray(exts);
    mxDestroyArray(fid);
    mxDestroyArray(msg);
    mxDestroyArray(riffck);
    mxDestroyArray(found_data);
    mxDestroyArray(end_of_file);
    mxDestroyArray(ck);
    mxDestroyArray(samples);
    mxDestroyArray(datack);
    mxDestroyArray(ext);
    mxDestroyArray(file);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return y;
    /*
     * 
     * % end of wavread()
     * 
     * 
     * % ------------------------------------------------------------------------
     * % Local functions:
     * % ------------------------------------------------------------------------
     * 
     * % ---------------------------------------------
     * % OPEN_WAV: Open a WAV file for reading
     * % ---------------------------------------------
     */
}

/*
 * The function "Mwavread_open_wav" is the implementation version of the
 * "wavread/open_wav" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 162-180). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [fid,msg] = open_wav(file)
 */
static mxArray * Mwavread_open_wav(mxArray * * msg,
                                   int nargout_,
                                   mxArray * file) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * fid = NULL;
    mxArray * ext = NULL;
    mxArray * nam = NULL;
    mxArray * pat = NULL;
    mclCopyArray(&file);
    /*
     * % Append .wav extension if it's missing:
     * [pat,nam,ext] = fileparts(file);
     */
    mlfAssign(&pat, mlfFileparts(&nam, &ext, NULL, mclVa(file, "file")));
    /*
     * if isempty(ext),
     */
    if (mlfTobool(mlfIsempty(mclVv(ext, "ext")))) {
        /*
         * file = [file '.wav'];
         */
        mlfAssign(&file, mlfHorzcat(mclVa(file, "file"), _mxarray33_, NULL));
    /*
     * end
     */
    }
    /*
     * [fid,msg] = fopen(file,'rb','l');   % Little-endian
     */
    mlfAssign(
      &fid, mlfFopen(msg, NULL, mclVa(file, "file"), _mxarray35_, _mxarray37_));
    /*
     * if fid == -1,
     */
    if (mclEqBool(mclVv(fid, "fid"), _mxarray22_)) {
        /*
         * msg = 'Cannot open file.';
         */
        mlfAssign(msg, _mxarray39_);
    /*
     * end
     */
    }
    mclValidateOutput(fid, 1, nargout_, "fid", "wavread/open_wav");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/open_wav");
    mxDestroyArray(pat);
    mxDestroyArray(nam);
    mxDestroyArray(ext);
    mxDestroyArray(file);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return fid;
    /*
     * return
     * 
     * % ---------------------------------------------
     * % READ_CKINFO: Reads next RIFF chunk, but not the chunk data.
     * %   If optional sflg is set to nonzero, reads SUBchunk info instead.
     * %   Expects an open FID pointing to first byte of chunk header.
     * %   Returns a new chunk structure.
     * % ---------------------------------------------
     */
}

/*
 * The function "Mwavread_read_ckinfo" is the implementation version of the
 * "wavread/read_ckinfo" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 180-219). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [ck,msg] = read_ckinfo(fid)
 */
static mxArray * Mwavread_read_ckinfo(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * ck = NULL;
    mxArray * sz = NULL;
    mxArray * cnt = NULL;
    mxArray * s = NULL;
    mxArray * err_msg = NULL;
    mclCopyArray(&fid);
    /*
     * 
     * msg     = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * ck.fid  = fid;
     */
    mlfIndexAssign(&ck, ".fid", mclVa(fid, "fid"));
    /*
     * ck.Data = [];
     */
    mlfIndexAssign(&ck, ".Data", _mxarray2_);
    /*
     * err_msg = 'Truncated chunk header found - possibly not a WAV file.';
     */
    mlfAssign(&err_msg, _mxarray42_);
    /*
     * 
     * [s,cnt] = fread(fid,4,'char');
     */
    mlfAssign(
      &s, mlfFread(&cnt, mclVa(fid, "fid"), _mxarray44_, _mxarray45_, NULL));
    /*
     * 
     * % Do not error-out if a few (<4) trailing chars are in file
     * % Just return quickly:
     * if (cnt~=4),
     */
    if (mclNeBool(mclVv(cnt, "cnt"), _mxarray44_)) {
        /*
         * if feof(fid),
         */
        if (mlfTobool(mlfFeof(mclVa(fid, "fid")))) {
            /*
             * % End of the file (not an error)
             * ck.ID = 'end of file';  % unambiguous chunk ID (>4 chars)
             */
            mlfIndexAssign(&ck, ".ID", _mxarray14_);
            /*
             * ck.Size = 0;
             */
            mlfIndexAssign(&ck, ".Size", _mxarray7_);
        /*
         * else
         */
        } else {
            /*
             * msg = err_msg;
             */
            mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * end
         */
        }
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * ck.ID = deblank(setstr(s'));
     */
    mlfIndexAssign(
      &ck, ".ID", mlfDeblank(mlfSetstr(mlfCtranspose(mclVv(s, "s")))));
    /*
     * 
     * % Read chunk size (skip if subchunk):
     * [sz,cnt] = fread(fid,1,'ulong');
     */
    mlfAssign(
      &sz, mlfFread(&cnt, mclVa(fid, "fid"), _mxarray0_, _mxarray47_, NULL));
    /*
     * if cnt~=1,
     */
    if (mclNeBool(mclVv(cnt, "cnt"), _mxarray0_)) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * ck.Size = sz;
     */
    mlfIndexAssign(&ck, ".Size", mclVv(sz, "sz"));
    /*
     * return
     * 
     * % ---------------------------------------------
     * % FIND_CKTYPE: Finds a chunk with appropriate type.
     * %   Searches from current file position specified by fid.
     * %   Leaves file positions to data of desired chunk.
     * %   If optional sflg is set to nonzero, finds a SUBchunk instead.
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(ck, 1, nargout_, "ck", "wavread/read_ckinfo");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_ckinfo");
    mxDestroyArray(err_msg);
    mxDestroyArray(s);
    mxDestroyArray(cnt);
    mxDestroyArray(sz);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ck;
}

/*
 * The function "Mwavread_find_cktype" is the implementation version of the
 * "wavread/find_cktype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 219-239). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [ck,msg] = find_cktype(fid,ftype)
 */
static mxArray * Mwavread_find_cktype(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ftype) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    int nargin_ = mclNargin(2, fid, ftype, NULL);
    mxArray * ck = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ftype);
    /*
     * 
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * if nargin<2, ftype = ''; end
     */
    if (nargin_ < 2) {
        mlfAssign(&ftype, _mxarray41_);
    }
    /*
     * 
     * [ck,msg] = read_ckinfo(fid);
     */
    mlfAssign(&ck, mlfWavread_read_ckinfo(msg, mclVa(fid, "fid")));
    /*
     * if ~isempty(msg), return; end
     */
    if (mclNotBool(mlfIsempty(mclVv(*msg, "msg")))) {
        goto return_;
    }
    /*
     * 
     * % Was a required chunk type specified?
     * if ~isempty(ftype) & ~strcmpi(ck.ID,ftype),
     */
    {
        mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(ftype, "ftype"))));
        if (mlfTobool(a_)
            && mlfTobool(
                 mclAnd(
                   a_,
                   mclNot(
                     mclFeval(
                       mclValueVarargout(),
                       mlxStrcmpi,
                       mlfIndexRef(mclVv(ck, "ck"), ".ID"),
                       mclVa(ftype, "ftype"),
                       NULL))))) {
            mxDestroyArray(a_);
            /*
             * msg = ['<' ftype '-ck> did not appear as expected'];
             */
            mlfAssign(
              msg,
              mlfHorzcat(
                _mxarray49_, mclVa(ftype, "ftype"), _mxarray51_, NULL));
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % CHECK_RIFFTYPE: Finds the RIFF data type.
     * %   Searches from current file position specified by fid.
     * %   Leaves file positions to data of desired chunk.
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(ck, 1, nargout_, "ck", "wavread/find_cktype");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/find_cktype");
    mxDestroyArray(ftype);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return ck;
}

/*
 * The function "Mwavread_check_rifftype" is the implementation version of the
 * "wavread/check_rifftype" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 239-256). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function msg = check_rifftype(fid,ftype)
 */
static mxArray * Mwavread_check_rifftype(int nargout_,
                                         mxArray * fid,
                                         mxArray * ftype) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * msg = NULL;
    mxArray * cnt = NULL;
    mxArray * rifftype = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ftype);
    /*
     * msg = '';
     */
    mlfAssign(&msg, _mxarray41_);
    /*
     * [rifftype,cnt] = fread(fid,4,'char');
     */
    mlfAssign(
      &rifftype,
      mlfFread(&cnt, mclVa(fid, "fid"), _mxarray44_, _mxarray45_, NULL));
    /*
     * rifftype = setstr(rifftype)';
     */
    mlfAssign(&rifftype, mlfCtranspose(mlfSetstr(mclVv(rifftype, "rifftype"))));
    /*
     * 
     * if cnt~=4,
     */
    if (mclNeBool(mclVv(cnt, "cnt"), _mxarray44_)) {
        /*
         * msg = 'Not a WAVE file.';
         */
        mlfAssign(&msg, _mxarray10_);
    /*
     * elseif ~strcmpi(rifftype,ftype),
     */
    } else if (mclNotBool(
                 mlfStrcmpi(
                   mclVv(rifftype, "rifftype"), mclVa(ftype, "ftype")))) {
        /*
         * msg = ['File does not contain required ''' ftype ''' data chunk.'];
         */
        mlfAssign(
          &msg,
          mlfHorzcat(_mxarray53_, mclVa(ftype, "ftype"), _mxarray55_, NULL));
    /*
     * end
     */
    }
    mclValidateOutput(msg, 1, nargout_, "msg", "wavread/check_rifftype");
    mxDestroyArray(rifftype);
    mxDestroyArray(cnt);
    mxDestroyArray(ftype);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return msg;
    /*
     * 
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_LISTCK: Read the FLIST chunk:
     * % ---------------------------------------------
     */
}

/*
 * The function "Mwavread_read_listck" is the implementation version of the
 * "wavread/read_listck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 256-345). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [opt_ck,msg] = read_listck(fid,ck, orig_opt_ck)
 */
static mxArray * Mwavread_read_listck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * opt_ck = NULL;
    mxArray * rbytes = NULL;
    mxArray * idx = NULL;
    mxArray * txt = NULL;
    mxArray * len = NULL;
    mxArray * name = NULL;
    mxArray * id = NULL;
    mxArray * listtype = NULL;
    mxArray * listdata = NULL;
    mxArray * err_msg = NULL;
    mxArray * nbytes = NULL;
    mxArray * total_bytes = NULL;
    mxArray * orig_pos = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ck);
    mclCopyArray(&orig_opt_ck);
    /*
     * 
     * opt_ck = orig_opt_ck;
     */
    mlfAssign(&opt_ck, mclVa(orig_opt_ck, "orig_opt_ck"));
    /*
     * 
     * orig_pos    = ftell(fid);
     */
    mlfAssign(&orig_pos, mlfFtell(mclVa(fid, "fid")));
    /*
     * total_bytes = ck.Size; % # bytes in subchunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(ck, "ck"), ".Size"));
    /*
     * nbytes      = 4;       % # of required bytes in <list-ck> header
     */
    mlfAssign(&nbytes, _mxarray44_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * err_msg = 'Error reading <list-ck> chunk.';
     */
    mlfAssign(&err_msg, _mxarray57_);
    /*
     * 
     * if total_bytes < nbytes,
     */
    if (mclLtBool(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes"))) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * % Read standard <list-ck> data:
     * listdata = setstr(fread(fid,total_bytes,'uchar')');
     */
    mlfAssign(
      &listdata,
      mlfSetstr(
        mlfCtranspose(
          mlfFread(
            NULL,
            mclVa(fid, "fid"),
            mclVv(total_bytes, "total_bytes"),
            _mxarray59_,
            NULL))));
    /*
     * 
     * listtype = lower(listdata(1:4)); % Get LIST type
     */
    mlfAssign(
      &listtype,
      mlfLower(
        mclArrayRef1(
          mclVv(listdata, "listdata"),
          mlfColon(_mxarray0_, _mxarray44_, NULL))));
    /*
     * listdata = listdata(5:end);      % Move past INFO
     */
    mlfAssign(
      &listdata,
      mclArrayRef1(
        mclVv(listdata, "listdata"),
        mlfColon(
          _mxarray61_,
          mlfEnd(mclVv(listdata, "listdata"), _mxarray0_, _mxarray0_),
          NULL)));
    /*
     * 
     * if strcmp(listtype,'info'),
     */
    if (mlfTobool(mlfStrcmp(mclVv(listtype, "listtype"), _mxarray62_))) {
        /*
         * % Information:
         * while(~isempty(listdata)),
         */
        while (mclNotBool(mlfIsempty(mclVv(listdata, "listdata")))) {
            /*
             * id = listdata(1:4);
             */
            mlfAssign(
              &id,
              mclArrayRef1(
                mclVv(listdata, "listdata"),
                mlfColon(_mxarray0_, _mxarray44_, NULL)));
            /*
             * switch lower(id)
             */
            {
                mxArray * v_ = mclInitialize(mlfLower(mclVv(id, "id")));
                if (mclSwitchCompare(v_, _mxarray64_)) {
                    /*
                     * case 'iart'
                     * name = 'Artist';
                     */
                    mlfAssign(&name, _mxarray66_);
                /*
                 * case 'icmt'
                 */
                } else if (mclSwitchCompare(v_, _mxarray68_)) {
                    /*
                     * name = 'Comments';
                     */
                    mlfAssign(&name, _mxarray70_);
                /*
                 * case 'icrd'
                 */
                } else if (mclSwitchCompare(v_, _mxarray72_)) {
                    /*
                     * name = 'Creation date';
                     */
                    mlfAssign(&name, _mxarray74_);
                /*
                 * case 'icop'
                 */
                } else if (mclSwitchCompare(v_, _mxarray76_)) {
                    /*
                     * name = ['Copy' 'right'];
                     */
                    mlfAssign(&name, _mxarray78_);
                /*
                 * case 'ieng'
                 */
                } else if (mclSwitchCompare(v_, _mxarray80_)) {
                    /*
                     * name = 'Engineer';
                     */
                    mlfAssign(&name, _mxarray82_);
                /*
                 * case 'inam'
                 */
                } else if (mclSwitchCompare(v_, _mxarray84_)) {
                    /*
                     * name = 'Name';
                     */
                    mlfAssign(&name, _mxarray86_);
                /*
                 * case 'iprd'
                 */
                } else if (mclSwitchCompare(v_, _mxarray88_)) {
                    /*
                     * name = 'Product';
                     */
                    mlfAssign(&name, _mxarray90_);
                /*
                 * case 'isbj'
                 */
                } else if (mclSwitchCompare(v_, _mxarray92_)) {
                    /*
                     * name = 'Subject';
                     */
                    mlfAssign(&name, _mxarray94_);
                /*
                 * case 'isft'
                 */
                } else if (mclSwitchCompare(v_, _mxarray96_)) {
                    /*
                     * name = 'Software';
                     */
                    mlfAssign(&name, _mxarray98_);
                /*
                 * case 'isrc'
                 */
                } else if (mclSwitchCompare(v_, _mxarray100_)) {
                    /*
                     * name = 'Source';
                     */
                    mlfAssign(&name, _mxarray102_);
                /*
                 * otherwise
                 */
                } else {
                    /*
                     * name = id;
                     */
                    mlfAssign(&name, mclVv(id, "id"));
                /*
                 * end
                 */
                }
                mxDestroyArray(v_);
            }
            /*
             * 
             * if ~isfield(opt_ck,'info'),
             */
            if (mclNotBool(mlfIsfield(mclVv(opt_ck, "opt_ck"), _mxarray62_))) {
                /*
                 * opt_ck.info = [];
                 */
                mlfIndexAssign(&opt_ck, ".info", _mxarray2_);
            /*
             * end
             */
            }
            /*
             * len = listdata(5:8) * 2.^[0 8 16 24]';
             */
            mlfAssign(
              &len,
              mclMtimes(
                mclArrayRef1(
                  mclVv(listdata, "listdata"),
                  mlfColon(_mxarray61_, _mxarray32_, NULL)),
                _mxarray104_));
            /*
             * txt = listdata(9:9+len-1);
             */
            mlfAssign(
              &txt,
              mclArrayRef1(
                mclVv(listdata, "listdata"),
                mlfColon(
                  _mxarray106_,
                  mclMinus(
                    mclPlus(_mxarray106_, mclVv(len, "len")), _mxarray0_),
                  NULL)));
            /*
             * 
             * % Fix up text: deblank, and replace CR/LR with LF
             * txt = deblank(txt);
             */
            mlfAssign(&txt, mlfDeblank(mclVv(txt, "txt")));
            /*
             * idx=findstr(txt,setstr([13 10]));
             */
            mlfAssign(
              &idx, mlfFindstr(mclVv(txt, "txt"), mlfSetstr(_mxarray107_)));
            /*
             * txt(idx) = '';
             */
            mlfIndexDelete(&txt, "(?)", mclVv(idx, "idx"));
            /*
             * 
             * % Store - don't include the "name" info
             * opt_ck.info.(lower(id)) =  txt;
             */
            mlfIndexAssign(
              &opt_ck,
              ".info.(?)",
              mlfLower(mclVv(id, "id")),
              mclVv(txt, "txt"));
            /*
             * 
             * if rem(len,2), len=len+1; end
             */
            if (mlfTobool(mlfRem(mclVv(len, "len"), _mxarray1_))) {
                mlfAssign(&len, mclPlus(mclVv(len, "len"), _mxarray0_));
            }
            /*
             * listdata = listdata(9+len:end);
             */
            mlfAssign(
              &listdata,
              mclArrayRef1(
                mclVv(listdata, "listdata"),
                mlfColon(
                  mclPlus(_mxarray106_, mclVv(len, "len")),
                  mlfEnd(mclVv(listdata, "listdata"), _mxarray0_, _mxarray0_),
                  NULL)));
        /*
         * end
         */
        }
    /*
     * 
     * else
     */
    } else {
        /*
         * if ~isfield(opt_ck,'list'),
         */
        if (mclNotBool(mlfIsfield(mclVv(opt_ck, "opt_ck"), _mxarray27_))) {
            /*
             * opt_ck.list = [];
             */
            mlfIndexAssign(&opt_ck, ".list", _mxarray2_);
        /*
         * end
         */
        }
        /*
         * opt_ck.list.(listtype) = listdata;
         */
        mlfIndexAssign(
          &opt_ck,
          ".list.(?)",
          mclVv(listtype, "listtype"),
          mclVv(listdata, "listdata"));
    /*
     * end
     */
    }
    /*
     * 
     * % Skip over any unprocessed data:
     * if rem(total_bytes,2), total_bytes=total_bytes+1; end
     */
    if (mlfTobool(mlfRem(mclVv(total_bytes, "total_bytes"), _mxarray1_))) {
        mlfAssign(
          &total_bytes, mclPlus(mclVv(total_bytes, "total_bytes"), _mxarray0_));
    }
    /*
     * rbytes = total_bytes - (ftell(fid) - orig_pos);
     */
    mlfAssign(
      &rbytes,
      mclMinus(
        mclVv(total_bytes, "total_bytes"),
        mclMinus(mlfFtell(mclVa(fid, "fid")), mclVv(orig_pos, "orig_pos"))));
    /*
     * if rbytes~=0,
     */
    if (mclNeBool(mclVv(rbytes, "rbytes"), _mxarray7_)) {
        /*
         * if (fseek(fid,rbytes,'cof')==-1),
         */
        if (mclEqBool(
              mlfFseek(
                mclVa(fid, "fid"), mclVv(rbytes, "rbytes"), _mxarray109_),
              _mxarray22_)) {
            /*
             * msg = err_msg;
             */
            mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_DISPCK: Read the DISP chunk:
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(opt_ck, 1, nargout_, "opt_ck", "wavread/read_listck");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_listck");
    mxDestroyArray(orig_pos);
    mxDestroyArray(total_bytes);
    mxDestroyArray(nbytes);
    mxDestroyArray(err_msg);
    mxDestroyArray(listdata);
    mxDestroyArray(listtype);
    mxDestroyArray(id);
    mxDestroyArray(name);
    mxDestroyArray(len);
    mxDestroyArray(txt);
    mxDestroyArray(idx);
    mxDestroyArray(rbytes);
    mxDestroyArray(orig_opt_ck);
    mxDestroyArray(ck);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return opt_ck;
}

/*
 * The function "Mwavread_read_dispck" is the implementation version of the
 * "wavread/read_dispck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 345-392). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [opt_ck, msg] = read_dispck(fid,ck,orig_opt_ck)
 */
static mxArray * Mwavread_read_dispck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * opt_ck = NULL;
    mxArray * rbytes = NULL;
    mxArray * txt = NULL;
    mxArray * is_icon = NULL;
    mxArray * siz_info = NULL;
    mxArray * icon_data = NULL;
    mxArray * data = NULL;
    mxArray * err_msg = NULL;
    mxArray * nbytes = NULL;
    mxArray * total_bytes = NULL;
    mxArray * orig_pos = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ck);
    mclCopyArray(&orig_opt_ck);
    /*
     * 
     * opt_ck = orig_opt_ck;
     */
    mlfAssign(&opt_ck, mclVa(orig_opt_ck, "orig_opt_ck"));
    /*
     * 
     * orig_pos    = ftell(fid);
     */
    mlfAssign(&orig_pos, mlfFtell(mclVa(fid, "fid")));
    /*
     * total_bytes = ck.Size; % # bytes in subchunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(ck, "ck"), ".Size"));
    /*
     * nbytes      = 4;       % # of required bytes in <disp-ck> header
     */
    mlfAssign(&nbytes, _mxarray44_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * err_msg = 'Error reading <disp-ck> chunk.';
     */
    mlfAssign(&err_msg, _mxarray111_);
    /*
     * 
     * if total_bytes < nbytes,
     */
    if (mclLtBool(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes"))) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * % Read standard <disp-ck> data:
     * data = fread(fid,total_bytes,'uchar');
     */
    mlfAssign(
      &data,
      mlfFread(
        NULL,
        mclVa(fid, "fid"),
        mclVv(total_bytes, "total_bytes"),
        _mxarray59_,
        NULL));
    /*
     * 
     * % Process data:
     * 
     * % First few entries are size info:
     * icon_data = data;
     */
    mlfAssign(&icon_data, mclVv(data, "data"));
    /*
     * siz_info = reshape(icon_data(1:2*4),4,2)';
     */
    mlfAssign(
      &siz_info,
      mlfCtranspose(
        mlfReshape(
          mclArrayRef1(
            mclVv(icon_data, "icon_data"),
            mlfColon(_mxarray0_, _mxarray32_, NULL)),
          _mxarray44_, _mxarray1_, NULL)));
    /*
     * siz_info = siz_info*(2.^[0 8 16 24]');
     */
    mlfAssign(&siz_info, mclMtimes(mclVv(siz_info, "siz_info"), _mxarray104_));
    /*
     * is_icon = isequal(siz_info,[8;40]);
     */
    mlfAssign(
      &is_icon, mlfIsequal(mclVv(siz_info, "siz_info"), _mxarray113_, NULL));
    /*
     * 
     * if ~is_icon,
     */
    if (mclNotBool(mclVv(is_icon, "is_icon"))) {
        /*
         * % Not the icon:
         * opt_ck.disp.name = 'DisplayName';
         */
        mlfIndexAssign(&opt_ck, ".disp.name", _mxarray115_);
        /*
         * txt = deblank(setstr(data(5:end)'));
         */
        mlfAssign(
          &txt,
          mlfDeblank(
            mlfSetstr(
              mlfCtranspose(
                mclArrayRef1(
                  mclVv(data, "data"),
                  mlfColon(
                    _mxarray61_,
                    mlfEnd(mclVv(data, "data"), _mxarray0_, _mxarray0_),
                    NULL))))));
        /*
         * opt_ck.disp.text = txt;
         */
        mlfIndexAssign(&opt_ck, ".disp.text", mclVv(txt, "txt"));
    /*
     * end
     */
    }
    /*
     * 
     * % Skip over any unprocessed data:
     * if rem(total_bytes,2), total_bytes=total_bytes+1; end
     */
    if (mlfTobool(mlfRem(mclVv(total_bytes, "total_bytes"), _mxarray1_))) {
        mlfAssign(
          &total_bytes, mclPlus(mclVv(total_bytes, "total_bytes"), _mxarray0_));
    }
    /*
     * rbytes = total_bytes - (ftell(fid) - orig_pos);
     */
    mlfAssign(
      &rbytes,
      mclMinus(
        mclVv(total_bytes, "total_bytes"),
        mclMinus(mlfFtell(mclVa(fid, "fid")), mclVv(orig_pos, "orig_pos"))));
    /*
     * if rbytes~=0,
     */
    if (mclNeBool(mclVv(rbytes, "rbytes"), _mxarray7_)) {
        /*
         * if(fseek(fid,rbytes,'cof')==-1),
         */
        if (mclEqBool(
              mlfFseek(
                mclVa(fid, "fid"), mclVv(rbytes, "rbytes"), _mxarray109_),
              _mxarray22_)) {
            /*
             * msg = err_msg;
             */
            mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_FACTCK: Read the FACT chunk:
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(opt_ck, 1, nargout_, "opt_ck", "wavread/read_dispck");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_dispck");
    mxDestroyArray(orig_pos);
    mxDestroyArray(total_bytes);
    mxDestroyArray(nbytes);
    mxDestroyArray(err_msg);
    mxDestroyArray(data);
    mxDestroyArray(icon_data);
    mxDestroyArray(siz_info);
    mxDestroyArray(is_icon);
    mxDestroyArray(txt);
    mxDestroyArray(rbytes);
    mxDestroyArray(orig_opt_ck);
    mxDestroyArray(ck);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return opt_ck;
}

/*
 * The function "Mwavread_read_factck" is the implementation version of the
 * "wavread/read_factck" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 392-427). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [opt_ck,msg] = read_factck(fid,ck,orig_opt_ck)
 */
static mxArray * Mwavread_read_factck(mxArray * * msg,
                                      int nargout_,
                                      mxArray * fid,
                                      mxArray * ck,
                                      mxArray * orig_opt_ck) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * opt_ck = NULL;
    mxArray * rbytes = NULL;
    mxArray * err_msg = NULL;
    mxArray * nbytes = NULL;
    mxArray * total_bytes = NULL;
    mxArray * orig_pos = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ck);
    mclCopyArray(&orig_opt_ck);
    /*
     * 
     * opt_ck      = orig_opt_ck;
     */
    mlfAssign(&opt_ck, mclVa(orig_opt_ck, "orig_opt_ck"));
    /*
     * orig_pos    = ftell(fid);
     */
    mlfAssign(&orig_pos, mlfFtell(mclVa(fid, "fid")));
    /*
     * total_bytes = ck.Size; % # bytes in subchunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(ck, "ck"), ".Size"));
    /*
     * nbytes      = 4;       % # of required bytes in <fact-ck> header
     */
    mlfAssign(&nbytes, _mxarray44_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * err_msg = 'Error reading <fact-ck> chunk.';
     */
    mlfAssign(&err_msg, _mxarray117_);
    /*
     * 
     * if total_bytes < nbytes,
     */
    if (mclLtBool(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes"))) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * % Read standard <fact-ck> data:
     * opt_ck.fact = setstr(fread(fid,total_bytes,'uchar')');
     */
    mlfIndexAssign(
      &opt_ck,
      ".fact",
      mlfSetstr(
        mlfCtranspose(
          mlfFread(
            NULL,
            mclVa(fid, "fid"),
            mclVv(total_bytes, "total_bytes"),
            _mxarray59_,
            NULL))));
    /*
     * 
     * % Skip over any unprocessed data:
     * if rem(total_bytes,2), total_bytes=total_bytes+1; end
     */
    if (mlfTobool(mlfRem(mclVv(total_bytes, "total_bytes"), _mxarray1_))) {
        mlfAssign(
          &total_bytes, mclPlus(mclVv(total_bytes, "total_bytes"), _mxarray0_));
    }
    /*
     * rbytes = total_bytes - (ftell(fid) - orig_pos);
     */
    mlfAssign(
      &rbytes,
      mclMinus(
        mclVv(total_bytes, "total_bytes"),
        mclMinus(mlfFtell(mclVa(fid, "fid")), mclVv(orig_pos, "orig_pos"))));
    /*
     * if rbytes~=0,
     */
    if (mclNeBool(mclVv(rbytes, "rbytes"), _mxarray7_)) {
        /*
         * if(fseek(fid,rbytes,'cof')==-1),
         */
        if (mclEqBool(
              mlfFseek(
                mclVa(fid, "fid"), mclVv(rbytes, "rbytes"), _mxarray109_),
              _mxarray22_)) {
            /*
             * msg = err_msg;
             */
            mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_WAVEFMT: Read WAVE format chunk.
     * %   Assumes fid points to the <wave-fmt> subchunk.
     * %   Requires chunk structure to be passed, indicating
     * %   the length of the chunk in case we don't recognize
     * %   the format tag.
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(opt_ck, 1, nargout_, "opt_ck", "wavread/read_factck");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_factck");
    mxDestroyArray(orig_pos);
    mxDestroyArray(total_bytes);
    mxDestroyArray(nbytes);
    mxDestroyArray(err_msg);
    mxDestroyArray(rbytes);
    mxDestroyArray(orig_opt_ck);
    mxDestroyArray(ck);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return opt_ck;
}

/*
 * The function "Mwavread_read_wavefmt" is the implementation version of the
 * "wavread/read_wavefmt" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 427-471). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [opt_ck,msg] = read_wavefmt(fid,ck,orig_opt_ck)
 */
static mxArray * Mwavread_read_wavefmt(mxArray * * msg,
                                       int nargout_,
                                       mxArray * fid,
                                       mxArray * ck,
                                       mxArray * orig_opt_ck) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * opt_ck = NULL;
    mxArray * rbytes = NULL;
    mxArray * err_msg = NULL;
    mxArray * nbytes = NULL;
    mxArray * total_bytes = NULL;
    mxArray * orig_pos = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ck);
    mclCopyArray(&orig_opt_ck);
    /*
     * 
     * opt_ck = orig_opt_ck;
     */
    mlfAssign(&opt_ck, mclVa(orig_opt_ck, "orig_opt_ck"));
    /*
     * 
     * orig_pos    = ftell(fid);
     */
    mlfAssign(&orig_pos, mlfFtell(mclVa(fid, "fid")));
    /*
     * total_bytes = ck.Size; % # bytes in subchunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(ck, "ck"), ".Size"));
    /*
     * nbytes      = 14;  % # of required bytes in <wave-format> header
     */
    mlfAssign(&nbytes, _mxarray119_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * err_msg = 'Error reading <wave-fmt> chunk.';
     */
    mlfAssign(&err_msg, _mxarray120_);
    /*
     * 
     * if total_bytes < nbytes,
     */
    if (mclLtBool(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes"))) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * % Read standard <wave-format> data:
     * opt_ck.fmt.wFormatTag      = fread(fid,1,'ushort'); % Data encoding format
     */
    mlfIndexAssign(
      &opt_ck,
      ".fmt.wFormatTag",
      mlfFread(NULL, mclVa(fid, "fid"), _mxarray0_, _mxarray122_, NULL));
    /*
     * opt_ck.fmt.nChannels       = fread(fid,1,'ushort'); % Number of channels
     */
    mlfIndexAssign(
      &opt_ck,
      ".fmt.nChannels",
      mlfFread(NULL, mclVa(fid, "fid"), _mxarray0_, _mxarray122_, NULL));
    /*
     * opt_ck.fmt.nSamplesPerSec  = fread(fid,1,'ulong');  % Samples per second
     */
    mlfIndexAssign(
      &opt_ck,
      ".fmt.nSamplesPerSec",
      mlfFread(NULL, mclVa(fid, "fid"), _mxarray0_, _mxarray47_, NULL));
    /*
     * opt_ck.fmt.nAvgBytesPerSec = fread(fid,1,'ulong');  % Avg transfer rate
     */
    mlfIndexAssign(
      &opt_ck,
      ".fmt.nAvgBytesPerSec",
      mlfFread(NULL, mclVa(fid, "fid"), _mxarray0_, _mxarray47_, NULL));
    /*
     * opt_ck.fmt.nBlockAlign     = fread(fid,1,'ushort'); % Block alignment
     */
    mlfIndexAssign(
      &opt_ck,
      ".fmt.nBlockAlign",
      mlfFread(NULL, mclVa(fid, "fid"), _mxarray0_, _mxarray122_, NULL));
    /*
     * 
     * % Read format-specific info:
     * switch opt_ck.fmt.wFormatTag
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVv(opt_ck, "opt_ck"), ".fmt.wFormatTag"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 1
             * % PCM Format:
             * [opt_ck.fmt, msg] = read_fmt_pcm(fid, ck, opt_ck.fmt);
             */
            mclFeval(
              mlfIndexVarargout(&opt_ck, ".fmt", msg, "", NULL),
              mlxWavread_read_fmt_pcm,
              mclVa(fid, "fid"),
              mclVa(ck, "ck"),
              mlfIndexRef(mclVv(opt_ck, "opt_ck"), ".fmt"),
              NULL);
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * 
     * % Skip over any unprocessed fmt-specific data:
     * if rem(total_bytes,2), total_bytes=total_bytes+1; end
     */
    if (mlfTobool(mlfRem(mclVv(total_bytes, "total_bytes"), _mxarray1_))) {
        mlfAssign(
          &total_bytes, mclPlus(mclVv(total_bytes, "total_bytes"), _mxarray0_));
    }
    /*
     * rbytes = total_bytes - (ftell(fid) - orig_pos);
     */
    mlfAssign(
      &rbytes,
      mclMinus(
        mclVv(total_bytes, "total_bytes"),
        mclMinus(mlfFtell(mclVa(fid, "fid")), mclVv(orig_pos, "orig_pos"))));
    /*
     * if rbytes~=0,
     */
    if (mclNeBool(mclVv(rbytes, "rbytes"), _mxarray7_)) {
        /*
         * if(fseek(fid,rbytes,'cof')==-1),
         */
        if (mclEqBool(
              mlfFseek(
                mclVa(fid, "fid"), mclVv(rbytes, "rbytes"), _mxarray109_),
              _mxarray22_)) {
            /*
             * msg = err_msg;
             */
            mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * 
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_FMT_PCM: Read <PCM-format-specific> info
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(opt_ck, 1, nargout_, "opt_ck", "wavread/read_wavefmt");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_wavefmt");
    mxDestroyArray(orig_pos);
    mxDestroyArray(total_bytes);
    mxDestroyArray(nbytes);
    mxDestroyArray(err_msg);
    mxDestroyArray(rbytes);
    mxDestroyArray(orig_opt_ck);
    mxDestroyArray(ck);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return opt_ck;
}

/*
 * The function "Mwavread_read_fmt_pcm" is the implementation version of the
 * "wavread/read_fmt_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 471-529). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [fmt,msg] = read_fmt_pcm(fid, ck, fmt)
 */
static mxArray * Mwavread_read_fmt_pcm(mxArray * * msg,
                                       int nargout_,
                                       mxArray * fid,
                                       mxArray * ck,
                                       mxArray * fmt_in) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * fmt = NULL;
    mxArray * rbytes = NULL;
    mxArray * cbSize = NULL;
    mxArray * cnt = NULL;
    mxArray * bits = NULL;
    mxArray * err_msg = NULL;
    mxArray * nbytes = NULL;
    mxArray * total_bytes = NULL;
    mclCopyArray(&fid);
    mclCopyArray(&ck);
    mclCopyInputArg(&fmt, fmt_in);
    /*
     * 
     * % There had better be a bits/sample field:
     * total_bytes = ck.Size; % # bytes in subchunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(ck, "ck"), ".Size"));
    /*
     * nbytes      = 14;  % # of bytes already read in <wave-format> header
     */
    mlfAssign(&nbytes, _mxarray119_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * err_msg = 'Error reading PCM <wave-fmt> chunk.';
     */
    mlfAssign(&err_msg, _mxarray124_);
    /*
     * 
     * if (total_bytes < nbytes+2),
     */
    if (mclLtBool(
          mclVv(total_bytes, "total_bytes"),
          mclPlus(mclVv(nbytes, "nbytes"), _mxarray1_))) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * [bits,cnt] = fread(fid,1,'ushort');
     */
    mlfAssign(
      &bits, mlfFread(&cnt, mclVa(fid, "fid"), _mxarray0_, _mxarray122_, NULL));
    /*
     * nbytes=nbytes+2;
     */
    mlfAssign(&nbytes, mclPlus(mclVv(nbytes, "nbytes"), _mxarray1_));
    /*
     * if (cnt~=1),
     */
    if (mclNeBool(mclVv(cnt, "cnt"), _mxarray0_)) {
        /*
         * msg = err_msg;
         */
        mlfAssign(msg, mclVv(err_msg, "err_msg"));
        /*
         * return
         */
        goto return_;
    /*
     * end 
     */
    }
    /*
     * fmt.nBitsPerSample=bits;
     */
    mlfIndexAssign(&fmt, ".nBitsPerSample", mclVv(bits, "bits"));
    /*
     * 
     * % Are there any additional fields present?
     * if (total_bytes > nbytes),
     */
    if (mclGtBool(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes"))) {
        /*
         * % See if the "cbSize" field is present.  If so, grab the data:
         * if (total_bytes >= nbytes+2),
         */
        if (mclGeBool(
              mclVv(total_bytes, "total_bytes"),
              mclPlus(mclVv(nbytes, "nbytes"), _mxarray1_))) {
            /*
             * % we have the cbSize ushort in the file:
             * [cbSize,cnt]=fread(fid,1,'ushort');
             */
            mlfAssign(
              &cbSize,
              mlfFread(
                &cnt, mclVa(fid, "fid"), _mxarray0_, _mxarray122_, NULL));
            /*
             * nbytes=nbytes+2;
             */
            mlfAssign(&nbytes, mclPlus(mclVv(nbytes, "nbytes"), _mxarray1_));
            /*
             * if (cnt~=1),
             */
            if (mclNeBool(mclVv(cnt, "cnt"), _mxarray0_)) {
                /*
                 * msg = err_msg;
                 */
                mlfAssign(msg, mclVv(err_msg, "err_msg"));
                /*
                 * return
                 */
                goto return_;
            /*
             * end
             */
            }
            /*
             * fmt.cbSize = cbSize;
             */
            mlfIndexAssign(&fmt, ".cbSize", mclVv(cbSize, "cbSize"));
        /*
         * end
         */
        }
        /*
         * 
         * % Simply skip any remaining stuff - we don't know what it is:
         * if rem(total_bytes,2), total_bytes=total_bytes+1; end
         */
        if (mlfTobool(mlfRem(mclVv(total_bytes, "total_bytes"), _mxarray1_))) {
            mlfAssign(
              &total_bytes,
              mclPlus(mclVv(total_bytes, "total_bytes"), _mxarray0_));
        }
        /*
         * rbytes = total_bytes - nbytes;
         */
        mlfAssign(
          &rbytes,
          mclMinus(mclVv(total_bytes, "total_bytes"), mclVv(nbytes, "nbytes")));
        /*
         * if rbytes~=0,
         */
        if (mclNeBool(mclVv(rbytes, "rbytes"), _mxarray7_)) {
            /*
             * if (fseek(fid,rbytes,'cof') == -1);
             */
            if (mclEqBool(
                  mlfFseek(
                    mclVa(fid, "fid"), mclVv(rbytes, "rbytes"), _mxarray109_),
                  _mxarray22_)) {
                /*
                 * msg = err_msg;
                 */
                mlfAssign(msg, mclVv(err_msg, "err_msg"));
            /*
             * end
             */
            }
        /*
         * end    
         */
        }
    /*
     * end
     */
    }
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_WAVEDAT: Read WAVE data chunk
     * %   Assumes fid points to the wave-data chunk
     * %   Requires <data-ck> and <wave-format> structures to be passed.
     * %   Requires extraction range to be specified.
     * %   Setting ext=[] forces ALL samples to be read.  Otherwise,
     * %       ext should be a 2-element vector specifying the first
     * %       and last samples (per channel) to be extracted.
     * %   Setting ext=-1 returns the number of samples per channel,
     * %       skipping over the sample data.
     * % ---------------------------------------------
     */
    return_:
    mclValidateOutput(fmt, 1, nargout_, "fmt", "wavread/read_fmt_pcm");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_fmt_pcm");
    mxDestroyArray(total_bytes);
    mxDestroyArray(nbytes);
    mxDestroyArray(err_msg);
    mxDestroyArray(bits);
    mxDestroyArray(cnt);
    mxDestroyArray(cbSize);
    mxDestroyArray(rbytes);
    mxDestroyArray(ck);
    mxDestroyArray(fid);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return fmt;
}

/*
 * The function "Mwavread_read_wavedat" is the implementation version of the
 * "wavread/read_wavedat" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 529-582). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [dat,msg] = read_wavedat(datack,wavefmt,ext)
 */
static mxArray * Mwavread_read_wavedat(mxArray * * msg,
                                       int nargout_,
                                       mxArray * datack,
                                       mxArray * wavefmt,
                                       mxArray * ext) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * dat = NULL;
    mxArray * fmt_msg = NULL;
    mclCopyArray(&datack);
    mclCopyArray(&wavefmt);
    mclCopyArray(&ext);
    /*
     * 
     * % In case of unsupported data compression format:
     * dat     = [];
     */
    mlfAssign(&dat, _mxarray2_);
    /*
     * fmt_msg = '';
     */
    mlfAssign(&fmt_msg, _mxarray41_);
    /*
     * 
     * switch wavefmt.wFormatTag
     */
    {
        mxArray * v_
          = mclInitialize(
              mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".wFormatTag"));
        if (mclSwitchCompare(v_, _mxarray0_)) {
            /*
             * case 1
             * % PCM Format:
             * [dat,msg] = read_dat_pcm(datack,wavefmt,ext);
             */
            mlfAssign(
              &dat,
              mlfWavread_read_dat_pcm(
                msg,
                mclVa(datack, "datack"),
                mclVa(wavefmt, "wavefmt"),
                mclVa(ext, "ext")));
        /*
         * case 2
         */
        } else if (mclSwitchCompare(v_, _mxarray1_)) {
            /*
             * fmt_msg = 'Microsoft ADPCM';
             */
            mlfAssign(&fmt_msg, _mxarray126_);
        /*
         * case 3
         */
        } else if (mclSwitchCompare(v_, _mxarray31_)) {
            /*
             * % normalized floating-point
             * [dat,msg] = read_dat_pcm(datack,wavefmt,ext);
             */
            mlfAssign(
              &dat,
              mlfWavread_read_dat_pcm(
                msg,
                mclVa(datack, "datack"),
                mclVa(wavefmt, "wavefmt"),
                mclVa(ext, "ext")));
        /*
         * case 6
         */
        } else if (mclSwitchCompare(v_, _mxarray128_)) {
            /*
             * fmt_msg = 'CCITT a-law';
             */
            mlfAssign(&fmt_msg, _mxarray129_);
        /*
         * case 7
         */
        } else if (mclSwitchCompare(v_, _mxarray131_)) {
            /*
             * fmt_msg = 'CCITT mu-law';
             */
            mlfAssign(&fmt_msg, _mxarray132_);
        /*
         * case 17
         */
        } else if (mclSwitchCompare(v_, _mxarray134_)) {
            /*
             * fmt_msg = 'IMA ADPCM';   
             */
            mlfAssign(&fmt_msg, _mxarray135_);
        /*
         * case 34
         */
        } else if (mclSwitchCompare(v_, _mxarray137_)) {
            /*
             * fmt_msg = 'DSP Group TrueSpeech TM';
             */
            mlfAssign(&fmt_msg, _mxarray138_);
        /*
         * case 49
         */
        } else if (mclSwitchCompare(v_, _mxarray140_)) {
            /*
             * fmt_msg = 'GSM 6.10';
             */
            mlfAssign(&fmt_msg, _mxarray141_);
        /*
         * case 50
         */
        } else if (mclSwitchCompare(v_, _mxarray143_)) {
            /*
             * fmt_msg = 'MSN Audio';
             */
            mlfAssign(&fmt_msg, _mxarray144_);
        /*
         * case 257
         */
        } else if (mclSwitchCompare(v_, _mxarray146_)) {
            /*
             * fmt_msg = 'IBM Mu-law';
             */
            mlfAssign(&fmt_msg, _mxarray147_);
        /*
         * case 258
         */
        } else if (mclSwitchCompare(v_, _mxarray149_)) {
            /*
             * fmt_msg = 'IBM A-law';
             */
            mlfAssign(&fmt_msg, _mxarray150_);
        /*
         * case 259
         */
        } else if (mclSwitchCompare(v_, _mxarray152_)) {
            /*
             * fmt_msg = 'IBM AVC Adaptive Differential';
             */
            mlfAssign(&fmt_msg, _mxarray153_);
        /*
         * otherwise
         */
        } else {
            /*
             * fmt_msg = ['Format #' num2str(wavefmt.wFormatTag)];
             */
            mlfAssign(
              &fmt_msg,
              mlfHorzcat(
                _mxarray155_,
                mclFeval(
                  mclValueVarargout(),
                  mlxNum2str,
                  mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".wFormatTag"),
                  NULL),
                NULL));
        /*
         * end
         */
        }
        mxDestroyArray(v_);
    }
    /*
     * if ~isempty(fmt_msg),
     */
    if (mclNotBool(mlfIsempty(mclVv(fmt_msg, "fmt_msg")))) {
        /*
         * msg = ['Data compression format (' fmt_msg ') is not supported.'];
         */
        mlfAssign(
          msg,
          mlfHorzcat(
            _mxarray157_, mclVv(fmt_msg, "fmt_msg"), _mxarray159_, NULL));
    /*
     * end
     */
    }
    mclValidateOutput(dat, 1, nargout_, "dat", "wavread/read_wavedat");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_wavedat");
    mxDestroyArray(fmt_msg);
    mxDestroyArray(ext);
    mxDestroyArray(wavefmt);
    mxDestroyArray(datack);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return dat;
    /*
     * return
     * 
     * 
     * % ---------------------------------------------
     * % READ_DAT_PCM: Read PCM format data from <wave-data> chunk.
     * %   Assumes fid points to the wave-data chunk
     * %   Requires <data-ck> and <wave-format> structures to be passed.
     * %   Requires extraction range to be specified.
     * %   Setting ext=[] forces ALL samples to be read.  Otherwise,
     * %       ext should be a 2-element vector specifying the first
     * %       and last samples (per channel) to be extracted.
     * %   Setting ext=-1 returns the number of samples per channel,
     * %       skipping over the sample data.
     * % ---------------------------------------------
     */
}

/*
 * The function "Mwavread_read_dat_pcm" is the implementation version of the
 * "wavread/read_dat_pcm" M-function from file
 * "c:\matlab6p5\toolbox\matlab\audio\wavread.m" (lines 582-703). It contains
 * the actual compiled code for that M-function. It is a static function and
 * must only be called from one of the interface functions, appearing below.
 */
/*
 * function [dat,msg] = read_dat_pcm(datack,wavefmt,ext)
 */
static mxArray * Mwavread_read_dat_pcm(mxArray * * msg,
                                       int nargout_,
                                       mxArray * datack,
                                       mxArray * wavefmt,
                                       mxArray * ext) {
    mexLocalFunctionTable save_local_function_table_
      = mclSetCurrentLocalFunctionTable(&_local_function_table_wavread);
    mxArray * dat = NULL;
    mxArray * ans = NULL;
    mxArray * extSamples = NULL;
    mxArray * nSPCext = NULL;
    mxArray * skipcnt = NULL;
    mxArray * bytes_remaining = NULL;
    mxArray * SamplesPerChannel = NULL;
    mxArray * total_samples = NULL;
    mxArray * total_bytes = NULL;
    mxArray * dtype = NULL;
    mxArray * BytesPerSample = NULL;
    mclCopyArray(&datack);
    mclCopyArray(&wavefmt);
    mclCopyArray(&ext);
    /*
     * 
     * dat = [];
     */
    mlfAssign(&dat, _mxarray2_);
    /*
     * msg = '';
     */
    mlfAssign(msg, _mxarray41_);
    /*
     * 
     * % Determine # bytes/sample - format requires rounding
     * %  to next integer number of bytes: 
     * BytesPerSample = ceil(wavefmt.nBlockAlign / wavefmt.nChannels);
     */
    mlfAssign(
      &BytesPerSample,
      mlfCeil(
        mclFeval(
          mclValueVarargout(),
          mlxMrdivide,
          mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nBlockAlign"),
          mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
          NULL)));
    /*
     * if (BytesPerSample == 1),
     */
    if (mclEqBool(mclVv(BytesPerSample, "BytesPerSample"), _mxarray0_)) {
        /*
         * dtype='uchar'; % unsigned 8-bit
         */
        mlfAssign(&dtype, _mxarray59_);
    /*
     * elseif (BytesPerSample == 2),
     */
    } else if (mclEqBool(mclVv(BytesPerSample, "BytesPerSample"), _mxarray1_)) {
        /*
         * dtype='short'; % signed 16-bit
         */
        mlfAssign(&dtype, _mxarray161_);
    /*
     * elseif (BytesPerSample == 3)
     */
    } else if (mclEqBool(
                 mclVv(BytesPerSample, "BytesPerSample"), _mxarray31_)) {
        /*
         * dtype='bit24'; % signed 24-bit
         */
        mlfAssign(&dtype, _mxarray163_);
    /*
     * elseif (BytesPerSample == 4),
     */
    } else if (mclEqBool(
                 mclVv(BytesPerSample, "BytesPerSample"), _mxarray44_)) {
        /*
         * % 32-bit 16.8 float (type 1 - 32-bit)
         * % 32-bit normalized floating point
         * dtype = 'float';    
         */
        mlfAssign(&dtype, _mxarray165_);
        /*
         * % 32-bit 24.0 float (type 1 - 24-bit)
         * if wavefmt.wFormatTag ~= 3 & wavefmt.nBitsPerSample == 24,
         */
        {
            mxArray * a_
              = mclInitialize(
                  mclFeval(
                    mclValueVarargout(),
                    mlxNe,
                    mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".wFormatTag"),
                    _mxarray31_,
                    NULL));
            if (mlfTobool(a_)
                && mlfTobool(
                     mclAnd(
                       a_,
                       mclFeval(
                         mclValueVarargout(),
                         mlxEq,
                         mlfIndexRef(
                           mclVa(wavefmt, "wavefmt"), ".nBitsPerSample"),
                         _mxarray167_,
                         NULL)))) {
                mxDestroyArray(a_);
                /*
                 * BytesPerSample = 3;
                 */
                mlfAssign(&BytesPerSample, _mxarray31_);
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         */
        }
    /*
     * else
     */
    } else {
        /*
         * msg = 'Cannot read PCM file formats with more than 32 bits per sample.';
         */
        mlfAssign(msg, _mxarray168_);
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * 
     * total_bytes       = datack.Size; % # bytes in this chunk
     */
    mlfAssign(&total_bytes, mlfIndexRef(mclVa(datack, "datack"), ".Size"));
    /*
     * total_samples     = total_bytes / BytesPerSample;
     */
    mlfAssign(
      &total_samples,
      mclMrdivide(
        mclVv(total_bytes, "total_bytes"),
        mclVv(BytesPerSample, "BytesPerSample")));
    /*
     * SamplesPerChannel = total_samples / wavefmt.nChannels;
     */
    mlfAssign(
      &SamplesPerChannel,
      mclFeval(
        mclValueVarargout(),
        mlxMrdivide,
        mclVv(total_samples, "total_samples"),
        mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
        NULL));
    /*
     * if ~isempty(ext) & ext==-1,
     */
    {
        mxArray * a_ = mclInitialize(mclNot(mlfIsempty(mclVa(ext, "ext"))));
        if (mlfTobool(a_)
            && mlfTobool(mclAnd(a_, mclEq(mclVa(ext, "ext"), _mxarray22_)))) {
            mxDestroyArray(a_);
            /*
             * % Just return the samples per channel, and fseek past data:
             * dat = SamplesPerChannel;
             */
            mlfAssign(&dat, mclVv(SamplesPerChannel, "SamplesPerChannel"));
            /*
             * 
             * % Add in a pad-byte, if required:
             * total_bytes = total_bytes + rem(datack.Size,2);
             */
            mlfAssign(
              &total_bytes,
              mclPlus(
                mclVv(total_bytes, "total_bytes"),
                mclFeval(
                  mclValueVarargout(),
                  mlxRem,
                  mlfIndexRef(mclVa(datack, "datack"), ".Size"),
                  _mxarray1_,
                  NULL)));
            /*
             * 
             * if(fseek(datack.fid,total_bytes,'cof')==-1),
             */
            if (mclEqBool(
                  mclFeval(
                    mclValueVarargout(),
                    mlxFseek,
                    mlfIndexRef(mclVa(datack, "datack"), ".fid"),
                    mclVv(total_bytes, "total_bytes"),
                    _mxarray109_,
                    NULL),
                  _mxarray22_)) {
                /*
                 * msg = 'Error reading PCM file format.';
                 */
                mlfAssign(msg, _mxarray170_);
            /*
             * end
             */
            }
            /*
             * 
             * return
             */
            goto return_;
        } else {
            mxDestroyArray(a_);
        }
    /*
     * end
     */
    }
    /*
     * 
     * % Determine sample range to read:
     * if isempty(ext),
     */
    if (mlfTobool(mlfIsempty(mclVa(ext, "ext")))) {
        /*
         * ext = [1 SamplesPerChannel];    % Return all samples
         */
        mlfAssign(
          &ext,
          mlfHorzcat(
            _mxarray0_, mclVv(SamplesPerChannel, "SamplesPerChannel"), NULL));
    /*
     * else
     */
    } else {
        /*
         * if prod(size(ext))~=2,
         */
        if (mclNeBool(
              mlfProd(
                mlfSize(mclValueVarargout(), mclVa(ext, "ext"), NULL), NULL),
              _mxarray1_)) {
            /*
             * msg = 'Sample limit vector must have 2 elements.';
             */
            mlfAssign(msg, _mxarray172_);
            /*
             * return
             */
            goto return_;
        /*
         * end
         */
        }
        /*
         * if ext(1)<1 | ext(2)>SamplesPerChannel,
         */
        {
            mxArray * a_
              = mclInitialize(
                  mclLt(mclIntArrayRef1(mclVa(ext, "ext"), 1), _mxarray0_));
            if (mlfTobool(a_)
                || mlfTobool(
                     mclOr(
                       a_,
                       mclGt(
                         mclIntArrayRef1(mclVa(ext, "ext"), 2),
                         mclVv(SamplesPerChannel, "SamplesPerChannel"))))) {
                mxDestroyArray(a_);
                /*
                 * msg = 'Sample limits out of range.';
                 */
                mlfAssign(msg, _mxarray174_);
                /*
                 * return
                 */
                goto return_;
            } else {
                mxDestroyArray(a_);
            }
        /*
         * end
         */
        }
        /*
         * if ext(1)>ext(2),
         */
        if (mclGtBool(
              mclIntArrayRef1(mclVa(ext, "ext"), 1),
              mclIntArrayRef1(mclVa(ext, "ext"), 2))) {
            /*
             * msg = 'Sample limits must be given in ascending order.';
             */
            mlfAssign(msg, _mxarray176_);
            /*
             * return
             */
            goto return_;
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * 
     * bytes_remaining = total_bytes;  % Preset byte counter
     */
    mlfAssign(&bytes_remaining, mclVv(total_bytes, "total_bytes"));
    /*
     * 
     * % Skip over leading samples:
     * if ext(1)>1,
     */
    if (mclGtBool(mclIntArrayRef1(mclVa(ext, "ext"), 1), _mxarray0_)) {
        /*
         * % Skip over leading samples, if specified:
         * skipcnt = BytesPerSample * (ext(1)-1) * wavefmt.nChannels;
         */
        mlfAssign(
          &skipcnt,
          mclFeval(
            mclValueVarargout(),
            mlxMtimes,
            mclMtimes(
              mclVv(BytesPerSample, "BytesPerSample"),
              mclMinus(mclIntArrayRef1(mclVa(ext, "ext"), 1), _mxarray0_)),
            mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
            NULL));
        /*
         * if(fseek(datack.fid, skipcnt,'cof') == -1),
         */
        if (mclEqBool(
              mclFeval(
                mclValueVarargout(),
                mlxFseek,
                mlfIndexRef(mclVa(datack, "datack"), ".fid"),
                mclVv(skipcnt, "skipcnt"),
                _mxarray109_,
                NULL),
              _mxarray22_)) {
            /*
             * msg = 'Error reading PCM file format.';
             */
            mlfAssign(msg, _mxarray170_);
            /*
             * return
             */
            goto return_;
        /*
         * end
         */
        }
        /*
         * %
         * % Update count of bytes remaining:
         * bytes_remaining = bytes_remaining - skipcnt;
         */
        mlfAssign(
          &bytes_remaining,
          mclMinus(
            mclVv(bytes_remaining, "bytes_remaining"),
            mclVv(skipcnt, "skipcnt")));
    /*
     * end
     */
    }
    /*
     * 
     * % Read desired data:
     * nSPCext    = ext(2)-ext(1)+1; % # samples per channel in extraction range
     */
    mlfAssign(
      &nSPCext,
      mclPlus(
        mclMinus(
          mclIntArrayRef1(mclVa(ext, "ext"), 2),
          mclIntArrayRef1(mclVa(ext, "ext"), 1)),
        _mxarray0_));
    /*
     * dat        = datack;  % Copy input structure to output
     */
    mlfAssign(&dat, mclVa(datack, "datack"));
    /*
     * extSamples = wavefmt.nChannels*nSPCext;
     */
    mlfAssign(
      &extSamples,
      mclFeval(
        mclValueVarargout(),
        mlxMtimes,
        mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
        mclVv(nSPCext, "nSPCext"),
        NULL));
    /*
     * dat.Data   = fread(datack.fid, [wavefmt.nChannels nSPCext], dtype);
     */
    mlfIndexAssign(
      &dat,
      ".Data",
      mclFeval(
        mclValueVarargout(),
        mlxFread,
        mlfIndexRef(mclVa(datack, "datack"), ".fid"),
        mlfHorzcat(
          mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
          mclVv(nSPCext, "nSPCext"),
          NULL),
        mclVv(dtype, "dtype"),
        NULL));
    /*
     * %
     * % Update count of bytes remaining:
     * skipcnt = BytesPerSample*nSPCext*wavefmt.nChannels;
     */
    mlfAssign(
      &skipcnt,
      mclFeval(
        mclValueVarargout(),
        mlxMtimes,
        mclMtimes(
          mclVv(BytesPerSample, "BytesPerSample"), mclVv(nSPCext, "nSPCext")),
        mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
        NULL));
    /*
     * bytes_remaining = bytes_remaining - skipcnt;
     */
    mlfAssign(
      &bytes_remaining,
      mclMinus(
        mclVv(bytes_remaining, "bytes_remaining"), mclVv(skipcnt, "skipcnt")));
    /*
     * 
     * % if cnt~=extSamples, dat='Error reading file.'; return; end
     * % Skip over trailing samples:
     * if(fseek(datack.fid, BytesPerSample * ...
     */
    if (mclEqBool(
          mclFeval(
            mclValueVarargout(),
            mlxFseek,
            mlfIndexRef(mclVa(datack, "datack"), ".fid"),
            mclFeval(
              mclValueVarargout(),
              mlxMtimes,
              mclMtimes(
                mclVv(BytesPerSample, "BytesPerSample"),
                mclMinus(
                  mclVv(SamplesPerChannel, "SamplesPerChannel"),
                  mclIntArrayRef1(mclVa(ext, "ext"), 2))),
              mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
              NULL),
            _mxarray109_,
            NULL),
          _mxarray22_)) {
        /*
         * (SamplesPerChannel-ext(2))*wavefmt.nChannels, 'cof')==-1),
         * msg = 'Error reading PCM file format.';
         */
        mlfAssign(msg, _mxarray170_);
        /*
         * return
         */
        goto return_;
    /*
     * end
     */
    }
    /*
     * % Update count of bytes remaining:
     * skipcnt = BytesPerSample*(SamplesPerChannel-ext(2))*wavefmt.nChannels;
     */
    mlfAssign(
      &skipcnt,
      mclFeval(
        mclValueVarargout(),
        mlxMtimes,
        mclMtimes(
          mclVv(BytesPerSample, "BytesPerSample"),
          mclMinus(
            mclVv(SamplesPerChannel, "SamplesPerChannel"),
            mclIntArrayRef1(mclVa(ext, "ext"), 2))),
        mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".nChannels"),
        NULL));
    /*
     * bytes_remaining = bytes_remaining - skipcnt;
     */
    mlfAssign(
      &bytes_remaining,
      mclMinus(
        mclVv(bytes_remaining, "bytes_remaining"), mclVv(skipcnt, "skipcnt")));
    /*
     * 
     * % Determine if a pad-byte is appended to data chunk,
     * %   skipping over it if present:
     * if rem(datack.Size,2),
     */
    if (mlfTobool(
          mclFeval(
            mclValueVarargout(),
            mlxRem,
            mlfIndexRef(mclVa(datack, "datack"), ".Size"),
            _mxarray1_,
            NULL))) {
        /*
         * fseek(datack.fid, 1, 'cof');
         */
        mclAssignAns(
          &ans,
          mclFeval(
            mclAnsVarargout(),
            mlxFseek,
            mlfIndexRef(mclVa(datack, "datack"), ".fid"),
            _mxarray0_,
            _mxarray109_,
            NULL));
    /*
     * end
     */
    }
    /*
     * % Rearrange data into a matrix with one channel per column:
     * dat.Data = dat.Data';
     */
    mlfIndexAssign(
      &dat,
      ".Data",
      mclFeval(
        mclValueVarargout(),
        mlxCtranspose,
        mlfIndexRef(mclVv(dat, "dat"), ".Data"),
        NULL));
    /*
     * % Normalize data range: min will hit -1, max will not quite hit +1.
     * if BytesPerSample==1,
     */
    if (mclEqBool(mclVv(BytesPerSample, "BytesPerSample"), _mxarray0_)) {
        /*
         * dat.Data = (dat.Data-128)/128;  % [-1,1)
         */
        mlfIndexAssign(
          &dat,
          ".Data",
          mclMrdivide(
            mclFeval(
              mclValueVarargout(),
              mlxMinus,
              mlfIndexRef(mclVv(dat, "dat"), ".Data"),
              _mxarray178_,
              NULL),
            _mxarray178_));
    /*
     * elseif BytesPerSample==2,
     */
    } else if (mclEqBool(mclVv(BytesPerSample, "BytesPerSample"), _mxarray1_)) {
        /*
         * dat.Data = dat.Data/32768;      % [-1,1)
         */
        mlfIndexAssign(
          &dat,
          ".Data",
          mclFeval(
            mclValueVarargout(),
            mlxMrdivide,
            mlfIndexRef(mclVv(dat, "dat"), ".Data"),
            _mxarray179_,
            NULL));
    /*
     * elseif BytesPerSample==3,
     */
    } else if (mclEqBool(
                 mclVv(BytesPerSample, "BytesPerSample"), _mxarray31_)) {
        /*
         * dat.Data = dat.Data/(2^23);     % [-1,1)
         */
        mlfIndexAssign(
          &dat,
          ".Data",
          mclFeval(
            mclValueVarargout(),
            mlxMrdivide,
            mlfIndexRef(mclVv(dat, "dat"), ".Data"),
            _mxarray180_,
            NULL));
    /*
     * elseif BytesPerSample==4,
     */
    } else if (mclEqBool(
                 mclVv(BytesPerSample, "BytesPerSample"), _mxarray44_)) {
        /*
         * if wavefmt.wFormatTag ~= 3,    % Type 3 32-bit is already normalized
         */
        if (mlfTobool(
              mclFeval(
                mclValueVarargout(),
                mlxNe,
                mlfIndexRef(mclVa(wavefmt, "wavefmt"), ".wFormatTag"),
                _mxarray31_,
                NULL))) {
            /*
             * dat.Data = dat.Data/32768; % [-1,1)
             */
            mlfIndexAssign(
              &dat,
              ".Data",
              mclFeval(
                mclValueVarargout(),
                mlxMrdivide,
                mlfIndexRef(mclVv(dat, "dat"), ".Data"),
                _mxarray179_,
                NULL));
        /*
         * end
         */
        }
    /*
     * end
     */
    }
    /*
     * 
     * return
     * 
     * % end of wavread.m
     */
    return_:
    mclValidateOutput(dat, 1, nargout_, "dat", "wavread/read_dat_pcm");
    mclValidateOutput(*msg, 2, nargout_, "msg", "wavread/read_dat_pcm");
    mxDestroyArray(BytesPerSample);
    mxDestroyArray(dtype);
    mxDestroyArray(total_bytes);
    mxDestroyArray(total_samples);
    mxDestroyArray(SamplesPerChannel);
    mxDestroyArray(bytes_remaining);
    mxDestroyArray(skipcnt);
    mxDestroyArray(nSPCext);
    mxDestroyArray(extSamples);
    mxDestroyArray(ans);
    mxDestroyArray(ext);
    mxDestroyArray(wavefmt);
    mxDestroyArray(datack);
    mclSetCurrentLocalFunctionTable(save_local_function_table_);
    return dat;
}
