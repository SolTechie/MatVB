function y=fzone(x)
y=wavread(x);
y=fft(y);
plot(abs(y));