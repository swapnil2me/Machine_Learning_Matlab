function [J, grad] = linearRegCostFunction(Xt, yt, thetat, lambdat)
%LINEARREGCOSTFUNCTION Compute cost and gradient for regularized linear 
%regression with multiple variables
%   [J, grad] = LINEARREGCOSTFUNCTION(X, y, theta, lambda) computes the 
%   cost of using theta as the parameter for linear regression to fit the 
%   data points in X and y. Returns the cost in J and the gradient in grad

% Initialize some useful values
mt = length(yt); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(thetat));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost and gradient of regularized linear 
%               regression for a particular choice of theta.
%
%               You should set J to the cost and grad to the gradient.
%
J = sum((Xt*thetat-yt).^2)/2/mt+(lambdat/2/mt).*sum(thetat(2:end).^2);

grad = sum(((Xt*thetat)-yt).*Xt,1)./mt;

grad(2:end) = grad(2:end) + (lambdat/mt)*thetat(2:end)';











% =========================================================================

grad = grad(:);

end
