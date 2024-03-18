"use strict";

function _typeof(obj) { if (typeof Symbol === "function" && typeof Symbol.iterator === "symbol") { _typeof = function _typeof(obj) { return typeof obj; }; } else { _typeof = function _typeof(obj) { return obj && typeof Symbol === "function" && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }; } return _typeof(obj); }

var chunk = require('./index');

test('function chunk exists', function () {
  expect(_typeof(chunk)).toEqual('function');
});
test('chunk divides an array of 10 elements with chunk size 2', function () {
  var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  var chunked = chunk(arr, 2);
  expect(chunked).toEqual([[1, 2], [3, 4], [5, 6], [7, 8], [9, 10]]);
});
test('chunk divides an array of 3 elements with chunk size 1', function () {
  var arr = [1, 2, 3];
  var chunked = chunk(arr, 1);
  expect(chunked).toEqual([[1], [2], [3]]);
});
test('chunk divides an array of 5 elements with chunk size 3', function () {
  var arr = [1, 2, 3, 4, 5];
  var chunked = chunk(arr, 3);
  expect(chunked).toEqual([[1, 2, 3], [4, 5]]);
});
test('chunk divides an array of 13 elements with chunk size 5', function () {
  var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13];
  var chunked = chunk(arr, 5);
  expect(chunked).toEqual([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13]]);
});