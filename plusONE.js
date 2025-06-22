const digits = [1,2,3,4]
let store = ''
let change = []
for (let i = 0; i < digits.length; i++) {
    // console.log(digits[i]);
    store+=(digits[i])
}
change =Number(store)+1;
let arr = Array.from(String(change), Number)
console.log(arr);


//same as above but in function ... leetcode is not accepting this ... giving run time error
{
    var plusOne = function(digits) {
        let store = ''
        let change = []
        for (let i = 0; i < digits.length; i++) {
            // console.log(digits[i]);
            store+=(digits[i])
        }
        change =Number(store)+1;
        let arr = Array.from(String(change), Number)
        return arr 
        };

        console.log(plusOne([9]));
         
}