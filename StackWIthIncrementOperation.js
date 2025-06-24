//push
{
    let maxSize = 5
    let arr = []

    let i = 0
    if (arr.length != maxSize) {  
        arr.push(i)  
        i++
    }
    console.log(arr);
}

// pop
{
    let maxSize = 5
    let arr = [1,2,3,4,5]
    console.log(arr.length);

    let i = 0
    if (arr.length != 0) {
        arr.pop()
        console.log('popped',arr);
        
    }

}

//increment 
{
let maxSize = 5
let arr = [1,2,3,4,5]
let k =5
let val = 100

if (k <= arr.length) {
    for (let i = 0; i < k; i++) {
        arr[i] = arr[i]+val
    }
}
else{
    for (let i = 0; i < arr.length; i++) {
        arr[i] = arr[i]+val
    }
}    
}