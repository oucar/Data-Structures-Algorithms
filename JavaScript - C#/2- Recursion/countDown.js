function countDown(num) {
  // base case
  if (num <= 0) {
    console.log("All done!!");
    return;
  }
  console.log(num);
  num--;
  countDown(num);
}

countDown(5);
