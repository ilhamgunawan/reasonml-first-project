// We can also interpolate variables into a string by using the {j|...|j} 
// notation with a $ before variable names to be interpolated:
let total = 1000;
let afterDiscount = 990;
Js.log({j|Total price: $total €|j});
Js.log({j|After discount: $afterDiscount €|j})