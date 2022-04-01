let length = 24;
let breadth = 8;
let thickness = 0.6;
let no_bricks = Math.ceil( 0.85 * length * breadth * thickness * Math.pow(100,3)/2304) ;
console.log("Number of bricks needed to construct the wall is: ",no_bricks);



