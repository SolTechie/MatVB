function y=myprowav(opn,sav,spd,awg)
[y fs]=wavread(opn);
y=y+awgn(y,awg);
wavwrite(y,spd*fs,sav);
