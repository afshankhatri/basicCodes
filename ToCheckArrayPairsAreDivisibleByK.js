// if(n%2 != 0 ){
//     return 
// }

let arr= [1,2,3,4,6]//make sure array is of even lenght (given in Q)

let k = 7 // 2 number ka addtn karne pe ans "k" ke jitna hona chahiye

let n = arr.length
let pair = 0


for (let i = 0; i < arr.length; i++) {
    for (let j = i; j < arr.length; j++) {
        if ((arr[i]+arr[j])% k == 0 && pair !=(n/2)) {
            pair ++
            console.log(arr[i],arr[j]);
            continue
        }
    }    
}