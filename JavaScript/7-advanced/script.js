// we have to basically fetch the selective data from a link by using 
// api request , we are given a link of api link of github of hitesh chaudhardy h
// from where i have to fetch the dta firsty , then have to print out the photo and 
// the ccount of followers in the browsers window 

// for this we would use the api request or new xmlhttprequest 
// we would open it , send it 
// then we would track the readystates (onreadystatechange)

// 0	UNSENT	Client has been created. open() not called yet.
// 1	OPENED	open() has been called.
// 2	HEADERS_RECEIVED	send() has been called, and headers and status are available.
// 3	LOADING	Downloading; responseText holds partial data.
// 4	DONE	The operation is complete.

// when the ready state become equal to 4 
// we would retrive the data from api by using (this.responsetext)


// the data fetch by this.responsetext is in the form of string 
// to convert the data into object we can use JSON.parse function
let xhr = new XMLHttpRequest()
xhr.open("GET",'https://api.github.com/users/hiteshchoudhary')
xhr.onreadystatechange = function(){
    if (xhr.readyState == 4){
        let data_in_string = this.responseText
        let data_in_object = JSON.parse(data_in_string)
        let photo = (data_in_object).avatar_url
        let followers = (data_in_object).followers
        let output = document.querySelector(".output")
        output.innerHTML=`<img src= ${photo} height="200px">
        <p> The followers are ${followers}`
        console.log(data_in_object)
        
    }
}
xhr.send()