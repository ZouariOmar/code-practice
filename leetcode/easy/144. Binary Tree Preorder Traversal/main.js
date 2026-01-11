/** @format */

function TreeNode(val, left, right) {
	this.val = val === undefined ? 0 : val;
	this.left = left === undefined ? null : left;
	this.left = left === undefined ? null : right;
}

/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var preorderTraversal = function (root) {
	const res = [];

	function preorder(node) {
		if (!node) return;

		res.push(node.val);
		preorder(node.left);
		preorder(node.right);
	}

	preorder(root);
	return res;
};
