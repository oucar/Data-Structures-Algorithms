"use strict";

function _typeof(obj) { if (typeof Symbol === "function" && typeof Symbol.iterator === "symbol") { _typeof = function _typeof(obj) { return typeof obj; }; } else { _typeof = function _typeof(obj) { return obj && typeof Symbol === "function" && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }; } return _typeof(obj); }

var anagrams = require('./index.js');

test('anagrams function exists', function () {
  expect(_typeof(anagrams)).toEqual('function');
});
test('"hello" is an anagram of "llohe"', function () {
  expect(anagrams('hello', 'llohe')).toBeTruthy();
});
test('"Whoa! Hi!" is an anagram of "Hi! Whoa!"', function () {
  expect(anagrams('Whoa! Hi!', 'Hi! Whoa!')).toBeTruthy();
});
test('"One One" is not an anagram of "Two two two"', function () {
  expect(anagrams('One One', 'Two two two')).toBeFalsy();
});
test('"One one" is not an anagram of "One one c"', function () {
  expect(anagrams('One one', 'One one c')).toBeFalsy();
});
test('"A tree, a life, a bench" is not an anagram of "A tree, a fence, a yard"', function () {
  expect(anagrams('A tree, a life, a bench', 'A tree, a fence, a yard')).toBeFalsy();
});