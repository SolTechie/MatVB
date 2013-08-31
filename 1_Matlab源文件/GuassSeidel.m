function [x,cnt]=GuassSeidel(A,b,e)
n=length(A);
for i=1:n
    x(i)=0;
    x_new(i)=1;
end
cnt=0;
while(norm(x_new-x,inf)>=abs(e)) %无穷范数表示x_new-x中的最大项，迭代终止条件
    cnt=cnt+1;
    x=x_new;
    for i=1:n
        s=0;
        for j=1:n
            if(j~=i)
                s=s+A(i,j)*x_new(j);%用x_new(j)而不用x(j)，雅克比与GuassSeidel的区别        
            end
        end
        x_new(i)=(b(i)-s)/A(i,i);
    end
end
x=x_new';