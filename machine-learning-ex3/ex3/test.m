close all;
nums=5;
 rand_indices = randperm(m);
 displayData(X(rand_indices(1:nums),1:end))
tmp=sigmoid(all_theta*([ones(nums,1) X(rand_indices(1:nums),1:end)]'));
lbl=1:10;
ind=(tmp==max(tmp,[],1));
mod(find(ind),10)