function h = my_Hypothesis(theta,x)
%% info
% theta == column vector
% x == column vector
 gt = theta'*x;
 
 h = 1/(1+exp(-gt));

end