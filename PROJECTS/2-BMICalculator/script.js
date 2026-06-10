let form = document.querySelector("form")
form.addEventListener("submit",function(e){
    e.preventDefault()
    let height = parseFloat(document.querySelector("#height").value)
    let weight = parseFloat(document.querySelector("#weight").value)
    if (height==""|| height<0 || isNaN(height))
    {
        let resultsection = document.querySelector(".result")
        resultsection.innerHTML= "ENTER VALID HEIGHT"
    }
      if (weight==""|| weight<0 || isNaN(weight))
    {
        let resultsection = document.querySelector(".result")
        resultsection.innerHTML= "ENTER VALID WEIGHT"
    }
    let bmi = (weight/(height*height)).toFixed(2)
    document.querySelector(".result").innerHTML = bmi
})