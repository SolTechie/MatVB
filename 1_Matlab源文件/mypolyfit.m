function z=mypolyfit(x,y,n)
z=polyfit(x,y,n);
a=min(x);
b=max(x);
xx=linspace(a,b);
yy=polyval(z,xx);
plot(xx,yy,'-',x,y,'o');
