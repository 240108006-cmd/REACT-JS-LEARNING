let form = document.querySelector("form")
let button = document.querySelector(".button")
button.addEventListener("click",function(e){
    e.preventDefault()
    let height = parseFloat(document.querySelector("#height").value)
    let weight = parseFloat(document.querySelector("#weight").value)
    if (height==""|| height<0 || isNaN(height))
    {
        let resultsection = document.querySelector("#results")
        resultsection.innerHTML= "ENTER VALID HEIGHT"
    }
      if (weight==""|| weight<0 || isNaN(weight))
    {
        let resultsection = document.querySelector("#results")
        resultsection.innerHTML= "ENTER VALID WEIGHT"
    }
    let bmi = (weight/(height*height)).toFixed(2)
    document.querySelector("#results").innerHTML = bmi
})