var numbers = [1, 5, 6, 23, 78, 4, 7, 45, 8, 44];

// find the bigest number from this array
//   get the sum of the array
// just showing even number from this array
for(let i=0; i<numbers.length; i++){
    if(numbers[i]>numbers[i+1]){
        var temp=numbers[i];
        numbers[i]=numbers[i+1];
        numbers[i+1]=temp;
    }
    if(i==numbers.length-1){
        console.log("The biggest number is:"+numbers[i]);
    }
}
var sum=0;
for(let i=0; i<numbers.length; i++){
    sum+=numbers[i];
}
console.log("The Sum of the array is: "+sum);
for(let i=0;i<numbers.length; i++){
    if(numbers[i]%2==0){
        console.log("Even Numbers are:"+numbers[i]);
    }
}