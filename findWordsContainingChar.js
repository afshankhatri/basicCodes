// 2nd try.... final
{
const x="e"
const words = ["rtx","code"]
let res = []

for (let i = 0; i < words.length; i++) {
    if(words[i].split('').includes(x)) {
        res.push(i)
    }    
}
console.log(res);

}




//1st try
const x="e"
const words = ["leet","code"]
for (let i = 0; i <words.length; i++) {
    // for (const word of words) {
        var isMatch = words[i].match(x)
    // }
    console.log(isMatch);
}


