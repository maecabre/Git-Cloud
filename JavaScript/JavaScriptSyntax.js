// $("#target-id").append("Mario Cabrera");
// var newString = stringName.replace([old-string], [new-string])

// var awesomeThoughts = "I am Mario Cabrera and I am AWESOME!";
// var funThoughts = awesomeThoughts.replace("AWESOME", "FUN");
// console.log(awesomeThoughts);
// console.log(funThoughts);

// -------------------------------------------------------------------------------------------------
var myName = "Mario Cabrera";
var formattedName = HTMLheaderName.replace("%data%", myName);

var myRole = "Robotics Engineer";
var formattedRole = HTMLheaderRole.replace("%data%", myRole);

// $("#header").prepend(formattedRole);
// $("#header").prepend(formattedName);

// -------------------------------------------------------------------------------------------------
// var s = "audacity";
// var udacityizer = function(s){
// 	s = "U" + s.slice(2);
// 	return s;
// }
// console.log(udacityizer(s));

//-------------------------------------------------------------------------------------------------
// var name = "AlbERt EINstEiN";

// function nameChanger(oldName) {
//     var stringArray = oldName.split(" ");
//     var firstName = stringArray[0].toLowerCase();
//     var lastname = stringArray[1].toUpperCase();
//     var firstLetter = firstName.slice(0,1).toUpperCase();
//     firstName = firstLetter + firstName.slice(1);

//     var finalName = firstName + " " + lastname;

//     // Don't delete this line!
//     return finalName;
// };

// // Did your code work? The line below will tell you!
// console.log(nameChanger(name));

//-------------------------------------------------------------------------------------------------
// var myAge = 20;
// var myPicURL = "images/fry.jpg";
// var myWelcomeMessage = "Yo Ninjas, welcome to my dank Resume";
// var myContactInfo = {
// 	"mobile" : "323-496-0583",
// 	"email" : "maecabre.ucsc.edu",
// 	"github" : "maecabre",
// 	"twitter" : "@marioislife",
// 	"location" : "Los Angeles"
// }
// mySkills = ["awesomeness", "programming", "teaching", "JS"];


// var bio = {
// 	"name" : myName,
// 	"role" : myRole,
// 	"age" : myAge,
// 	"contactInfo" : myContactInfo,
// 	"picURL" : myPicURL,
// 	"welcomeMessage" : myWelcomeMessage,
// 	"skills" : mySkills
// };


// $("#main").append(bio.name);
// $("#main").append(bio.role);
// $("#main").append(bio.age);
// $("#main").append(bio.contactInfo.mobile);
// $("#main").append(bio.picURL);
// $("#main").append(bio.welcomeMessage);
// $("#main").append(bio.skills);

//-------------------------------------------------------------------------------------------------
// Objects
// var work = {};
// work.jobPostion = "Warehouse Inventory Assistant";
// work.employer = "Mark Choi";
// work.yearsWorked = 1;
// work.workCity = "Arcadia";

// $("#main").append(work["jobPostion"]);
// $("#main").append(work["employer"]);
// $("#main").append(work["yearsWorked"]);
// $("#main").append(work["workCity"]);


// var education = {};
// education["school"] = "UCSC";
// education["yearsStudied"] = "3";
// education["schoolCity"] = "Santa Cruz";

// $("#main").append(education.school);
// $("#main").append(education.yearsStudied);
// $("#main").append(education.schoolCity);

//-------------------------------------------------------------------------------------------------
// JSON
// use a JSON linter to validate JSON objects
var education = {
	
	"schools" : [
		{
			"name" : "Wilson High School",
			"city" : "Los Angeles, CA",
			"degree" : "High School Diploma",
			"majors" : "[Law]",
			"dates" : 2014,
			"url" : "http://example.com"
		},
		{
			"name" : "University of California, Santa Cruz",
			"city" : "Santa Cruz, CA",
			"degree" : "BS",
			"majors" : "[Robotics Engineering]",
			"dates" : 2018,
			"url" : "http://example.com"
		}
	],

	"online courses" : [
		{
			"title" : "JavaScript Syntax",
			"school" : "Udacity",
			"dates" : 2017,
			"url" : "https://classroom.udacity.com/courses/ud804"
		}
	]
}

//-------------------------------------------------------------------------------------------------
// Returns array of work locations
// function locationizer(work_obj) {

// 	var locationArray = [];
// 	for(job in work_obj.jobs){
// 		locationArray.push(work_obj.jobs[job].location);
// 	}
// 	return locationArray;
// }

// console.log(locationizer(work));