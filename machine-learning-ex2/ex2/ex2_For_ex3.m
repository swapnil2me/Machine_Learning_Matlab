%% Machine Learning Online Class - Exercise 2: Logistic Regression
%
%  Instructions
%  ------------
%
%  This file contains code that helps you get started on the second part
%  of the exercise which covers regularization with logistic regression.
%
%  You will need to complete the following functions in this exericse:
%
%     sigmoid.m
%     costFunction.m
%     predict.m
%     costFunctionReg.m
%
%  For this exercise, you will not need to change any code in this file,
%  or any other files other than those mentioned above.
%

%% Initialization
clear ; clc

%% Load Data
%  The first two columns contains the X values and the third column
%  contains the label (y).

load('ex3data1.mat')

m = size(X, 1);
n = size(X, 2);
X = [ones(m, 1) X];
yt = double(y==10);
% Initialize fitting parameters
initial_theta = zeros(size(X, 2), 1);

% Set regularization parameter lambda to 1
lambda = 1;

% Compute and display initial cost and gradient for regularized logistic
% regression
[cost, grad] = costFunctionReg(initial_theta, X, yt, lambda);



% Compute and display cost and gradient
% with all-ones theta and lambda = 10

%% ============= Part 2: Regularization and Accuracies =============
%  Optional Exercise:
%  In this part, you will get to try different values of lambda and
%  see how regularization affects the decision coundart
%
%  Try the following values of lambda (0, 1, 10, 100).
%
%  How does the decision boundary change when you vary lambda? How does
%  the training set accuracy vary?
%

% Initialize fitting parameters
initial_theta = zeros(size(X, 2), 1);

% Set regularization parameter lambda to 1 (you should vary this)
lambda = 1;

% Set Options
options = optimset('GradObj', 'on', 'MaxIter', 400);

% Optimize
[theta, J, exit_flag] = ...
	fminunc(@(t)(costFunctionReg(t, X, yt, lambda)), initial_theta, options);

% % Plot Boundary
% plotDecisionBoundary(theta, X, yt);
% hold on;
% title(sprintf('lambda = %g', lambda))
% 
% % Labels and Legend
% xlabel('Microchip Test 1')
% ylabel('Microchip Test 2')
% 
% legend('y = 1', 'y = 0', 'Decision boundary')
% hold off;

% Compute accuracy on our training set
p = predict(theta, X);

fprintf('Train Accuracy: %f\n', mean(double(p == yt)) * 100);


