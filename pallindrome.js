const x = -121
const arr = x.toString().split("").map(Number)
let ptr = 0
let flag = 0
for (let i = (arr.length-1); i >= 0; i--) {
    if (arr[ptr] == arr[i]) {
        ptr++
        continue        
    }
    else{
        flag = 1
        console.log('not a pallindrome');
        break;
    }
}
if (flag != 1) {
    console.log('is is a pllindrome');
}


