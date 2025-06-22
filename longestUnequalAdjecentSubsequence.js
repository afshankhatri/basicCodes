const words =['a', 'b', 'c', 'd', 'e','f', 'e','f']
const groups = [1,0,1,0,0,1,0,1]
const store = []
let change = []
let ptr=1
for (let i = 0; i < groups.length; i++) {
    
    if (groups[i] != groups[ptr]) {
        store.push(words[i])
        ptr++
        if ((groups.length - 1) ==i) {
            change.push([...store])
        }
    }
    else{

        // change +=store
        // store.splice(',')
        change.push([...store])
        store.length = 0 
        ptr++
    }

}
let longestSubsequence = change[0]

for (let i = 1; i < change.length; i++) {
    if (change[i].length > longestSubsequence.length) {
        longestSubsequence = change[i];
    }
}

console.log( change);
console.log(longestSubsequence);



// try 2


{
const words =['a', 'b', 'c', 'd', 'e','f', 'e','f']
const groups = [1,0,1,0,0,1,0,1]
const store = []
let ptr=1
for (let i = 0; i < groups.length; i++) {
    
    if (groups[i] != groups[ptr]) {
        store.push(words[i])
        ptr++
    }

}
console.log( store);


}

{
    const res = [words[0]]

    for (let i = 1; i < groups.length; i++) {
        if (groups[i] !== groups[i - 1]) {
            res.push(words[i])
        }
    }

    return res
}