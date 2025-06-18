




// NOT SUBMITTED NAI SAMAJH RAHA ....FOR WORST CASES ... FEW CASES ARE GETTING SOLVED








let nums = [-1,0,1,2,-1,-4]
let store = []
for (let i = 0; i < nums.length; i++) {
    for (let j = i; j < nums.length; j++) {
        for (let k = j; k < nums.length; k++) {
            if (i!=j && j!=k && i!=k && (nums[i]+nums[j]+nums[k]) == 0 ) {
                store.push([nums[i],nums[j],nums[k]])
            }
        }        
    }
}
store.filter()
console.log(store);




{

let arr=[1,2,3,4,5]
let sotre = []
for (let i = 0; i < arr.length; i++) {
    sotre.push([arr[i],arr[i],arr[i]])
    
}
console.log(sotre);
}