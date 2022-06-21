 const menuE1 = document.querySelector(".menu");
// const menuTextE1 = document.querySelector(".menu p");
const socialListsE1 = document.querySelector(".socialLists");

const liEls = document.querySelectorAll(".social-Lists li");
menuE1.addEventListener("click",() => {
    socialListsE1.classList.toggle("hide");
    menuE1.classList.toggle("rotate");
});

liEls.forEach(liEls => {
    liEls.addEventListener("click",() => {
        menuTextE1.innerHTML = liEls.innerHTML;
        socialListsE1.classList.add("hide");
        menuE1.classList.toggle("rotate");
    }); 
});