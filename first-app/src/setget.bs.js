// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


var hero_friends = [""];

var hero_bg = null;

var hero = {
  name: "",
  friends: hero_friends,
  age: 0,
  bg: hero_bg
};

hero.name = "Tony Stark";

hero.friends = [
  "hulk",
  "thor"
];

hero.age = 52;

hero.bg = /* A */0;

console.log("\n Hero Details : \n");

console.log(hero.name);

console.log(hero.friends);

console.log(hero.age);

console.log(hero.bg);

var i32arr = new Int32Array(3);

i32arr[0] = 42;

console.log("\n New array creation and value\n");

console.log(i32arr[0]);

exports.hero = hero;
exports.i32arr = i32arr;
/*  Not a pure module */