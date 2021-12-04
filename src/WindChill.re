// Write a program that calculates wind chill. 
// Given an air temperature T in degrees Celsius and a wind velocity V in kilometers per hour
let temperature = 5;
let windSpeed = 20;

// hard way
// let vPower = Js.Math.pow_float(~base=float_of_int(windSpeed), ~exp=0.16);

// easy way
let vPower = float_of_int(20) ** 0.16;

let windChill = 
  13.12 
  +. (0.6215 *. float_of_int(temperature)) 
  -. (11.37 *. vPower)
  +. (0.3965 *. float_of_int(temperature) *. vPower);
Js.log({j|
  At temperature $temperature degrees C and wind speed $windSpeed km/hr,
  the wind chill temperature is $windChill.
|j});