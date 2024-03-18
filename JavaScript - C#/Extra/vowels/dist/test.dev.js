"use strict";

function _typeof(obj) { if (typeof Symbol === "function" && typeof Symbol.iterator === "symbol") { _typeof = function _typeof(obj) { return typeof obj; }; } else { _typeof = function _typeof(obj) { return obj && typeof Symbol === "function" && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }; } return _typeof(obj); }

var vowels = require('./index');

test('Vowels is a function', function () {
  expect(_typeof(vowels)).toEqual('function');
});
test('returns the number of vowels used', function () {
  expect(vowels('aeiou')).toEqual(5);
});
test('returns the number of vowels used when they are capitalized', function () {
  expect(vowels('AEIOU')).toEqual(5);
});
test('returns the number of vowels used', function () {
  expect(vowels('abcdefghijklmnopqrstuvwxyz')).toEqual(5);
});
test('returns the number of vowels used', function () {
  expect(vowels('bcdfghjkl')).toEqual(0);
});