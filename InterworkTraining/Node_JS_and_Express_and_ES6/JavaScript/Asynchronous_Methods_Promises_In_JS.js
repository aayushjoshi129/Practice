// Promises can be resolve(promise is completed) , reject(promise is broken) , pending(in pending state)

function func1() {
    return new Promise(function (resolve, reject) {
        setTimeout(() => {
            const error = true;
            if (!error) {
                console.log("Function : Your Promise has been resolved");
                resolve();
            }else{
                reject('Function : Sorry Cannot fulfil your promise');
            }
        }, 2000)
    })
}

func1().then(()=>{
    console.log("Joshi Function Resolve Called Successfully");
}).catch((error)=>{
    console.log("Joshi Could Not Resolve .\nReason : "+error);
})