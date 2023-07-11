function infiniteLoop() {
// Thay đổi màu nền
document.body.style.backgroundColor = "#333333";

// Tìm tất cả các phần tử chữ
var elements = document.querySelectorAll("*");
for (var i = 0; i < elements.length; i++) {
  var element = elements[i];
  var computedStyle = getComputedStyle(element);
  var color = computedStyle.color;
  
  // Lấy giá trị màu chữ trong hệ RGB
  var rgbValues = color.match(/\d+/g);
  var r = parseInt(rgbValues[0]);
  var g = parseInt(rgbValues[1]);
  var b = parseInt(rgbValues[2]);
  
  // Kiểm tra nếu chữ là màu đậm và tối
  if (r < 100 && g < 100 && b < 100) {
    element.style.color = "#ffffff"; // Chuyển chữ thành màu trắng
  }
}

// Tìm tất cả các đối tượng dạng hộp như textarea, select, button
var elements = document.querySelectorAll("textarea, select, button, input[type='text'], input[type='password'], input[type='checkbox'], input[type='radio'], input[type='file']");
for (var i = 0; i < elements.length; i++) {
  var element = elements[i];
  
  element.style.backgroundColor = "#333333"; // Chuyển nền thành màu đen
  element.style.color = "#ffffff"; // Chuyển chữ thành màu trắng
}

// Tìm tất cả các thẻ <a></a>
var links = document.getElementsByTagName("ul");
for (var i = 0; i < links.length; i++) {
  var link = links[i];

  link.style.backgroundColor = "#333333"; // Chuyển nền thành màu đen
  link.style.color = "#ffffff"; // Chuyển chữ thành màu trắng

  // Xóa hiệu ứng underline mặc định
  link.style.textDecoration = "none";
}
var listItems = document.querySelectorAll("li");
for (var i = 0; i < listItems.length; i++) {
    listItems[i].style.backgroundColor = "#333333";
    var children = listItems[i].querySelectorAll("*");
    for (var j = 0; j < children.length; j++) {
        if (children[j].style.color === "black") {
            children[j].style.color = "white";
        }
    }
}

var ulElements = document.querySelectorAll("ul.border.border-top-0.text-end");
for (var i = 0; i < ulElements.length; i++) {
    ulElements[i].style.borderColor = "transparent";
}




  
  // Gọi lại chính hàm để tạo vòng lặp vô tận
  setTimeout(infiniteLoop, 100);
}

// Gọi hàm để bắt đầu vòng lặp vô tận
infiniteLoop();
