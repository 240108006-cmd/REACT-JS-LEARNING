const quizData = [
  {
    question: "What is the capital of India?",
    option1: "Mumbai",
    option2: "Kolkata",
    option3: "New Delhi",
    option4: "Chennai",
    correctOption: "New Delhi"
  },
  {
    question: "Which language is used for styling web pages?",
    option1: "HTML",
    option2: "CSS",
    option3: "Java",
    option4: "Python",
    correctOption: "CSS"
  },
  {
    question: "What does DOM stand for?",
    option1: "Document Object Model",
    option2: "Data Object Model",
    option3: "Digital Object Method",
    option4: "Document Oriented Module",
    correctOption: "Document Object Model"
  },
  {
    question: "Which company developed JavaScript?",
    option1: "Microsoft",
    option2: "Google",
    option3: "Netscape",
    option4: "Oracle",
    correctOption: "Netscape"
  },
  {
    question: "Which keyword is used to declare a constant in JavaScript?",
    option1: "var",
    option2: "let",
    option3: "constant",
    option4: "const",
    correctOption: "const"
  },
  {
    question: "Which tag is used to create a hyperlink in HTML?",
    option1: "<p>",
    option2: "<a>",
    option3: "<link>",
    option4: "<h1>",
    correctOption: "<a>"
  },
  {
    question: "Which CSS property changes text color?",
    option1: "background-color",
    option2: "font-color",
    option3: "color",
    option4: "text-style",
    correctOption: "color"
  },
  {
    question: "Which symbol is used for comments in JavaScript?",
    option1: "//",
    option2: "##",
    option3: "<!-- -->",
    option4: "**",
    correctOption: "//"
  },
  {
    question: "Which method prints data in the browser console?",
    option1: "console.log()",
    option2: "print()",
    option3: "display()",
    option4: "write()",
    correctOption: "console.log()"
  },
  {
    question: "Which company developed React?",
    option1: "Google",
    option2: "Microsoft",
    option3: "Facebook",
    option4: "Amazon",
    correctOption: "Facebook"
  },
  {
    question: "Which keyword declares a block-scoped variable?",
    option1: "var",
    option2: "let",
    option3: "define",
    option4: "new",
    correctOption: "let"
  },
  {
    question: "What does CSS stand for?",
    option1: "Computer Style Sheets",
    option2: "Creative Style Sheets",
    option3: "Cascading Style Sheets",
    option4: "Colorful Style Sheets",
    correctOption: "Cascading Style Sheets"
  },
  {
    question: "Which HTML tag is used for the largest heading?",
    option1: "<h6>",
    option2: "<head>",
    option3: "<h1>",
    option4: "<header>",
    correctOption: "<h1>"
  },
  {
    question: "Which operator is used for strict equality in JavaScript?",
    option1: "=",
    option2: "==",
    option3: "===",
    option4: "!=",
    correctOption: "==="
  },
  {
    question: "Which array method adds an element at the end?",
    option1: "push()",
    option2: "pop()",
    option3: "shift()",
    option4: "unshift()",
    correctOption: "push()"
  },
  {
    question: "Which method converts JSON into a JavaScript object?",
    option1: "JSON.stringify()",
    option2: "JSON.parse()",
    option3: "JSON.convert()",
    option4: "JSON.object()",
    correctOption: "JSON.parse()"
  },
  {
    question: "Which keyword is used to create a function in JavaScript?",
    option1: "method",
    option2: "define",
    option3: "function",
    option4: "fun",
    correctOption: "function"
  },
  {
    question: "Which property is used to change the background color in CSS?",
    option1: "color",
    option2: "bgcolor",
    option3: "background-color",
    option4: "background",
    correctOption: "background-color"
  },
  {
    question: "Which loop executes at least once?",
    option1: "for",
    option2: "while",
    option3: "do...while",
    option4: "foreach",
    correctOption: "do...while"
  },
  {
    question: "Which HTML element is used to insert an image?",
    option1: "<picture>",
    option2: "<img>",
    option3: "<image>",
    option4: "<src>",
    correctOption: "<img>"
  }
];


let quesindex=0
let totalcorrectans = 0
let ques=document.querySelector(".question")
let submit = document.querySelector(".next")




function qosetter(quesindex){
    if(quesindex<quizData.length-1){
       submit.innerHTML= "CHECK & NEXT"
    }
    else{
       submit.innerHTML= "CHECK "
    }
    ques.innerHTML= `Q${quesindex+1} =>   ${quizData[quesindex].question}`
    let options = document.querySelectorAll("label")
    let optionindex =0
    options.forEach(function(option){
        option.textContent= quizData[quesindex][`option${optionindex+1}`]
        optionindex++
    })
}
submit.addEventListener("click", function () {

    if (quesindex <= quizData.length - 1) {
        let op = document.querySelectorAll("input");
        op.forEach(function (option) {
            let opdata = option.nextElementSibling.textContent
            if (option.checked == true) {
                if (opdata == quizData[quesindex].correctOption) {
                    totalcorrectans++;
                    document.querySelector(".scoring").textContent =
                        `${totalcorrectans}/${quizData.length}`;
                    document.querySelector(".rightwrong").innerHTML =
                        "Correct";
                } else {
                    document.querySelector(".rightwrong").innerHTML =
                        "Wrong";
                }
                setTimeout(function () {
                    option.checked = false;
                    document.querySelector(".rightwrong").innerHTML = "";
                    quesindex++;
                    qosetter(quesindex);
                }, 1000);
            }
        });
        if (quesindex == quizData.length - 1) {
            document.querySelector(".retest").innerHTML = "RETEST";
            document.querySelector(".retest").style.backgroundColor ="red"
            document.querySelector(".retest").style.border ="2px solid black"

        }
    } 
});
document.querySelector(".retest").addEventListener("click",function(){
    quesindex=0
    totalcorrectans = 0
    document.querySelector(".scoring").textContent =
                        `0/${quizData.length}`;
    document.querySelector(".retest").style.backgroundColor ="transparent"
    document.querySelector(".retest").style.border ="0px solid black"
    document.querySelector(".retest").innerHTML=""

    qosetter(quesindex)
})
document.addEventListener("keydown",function(e){
    if(e.key=="Enter"){
        submit.click()
    }
})
qosetter(quesindex)