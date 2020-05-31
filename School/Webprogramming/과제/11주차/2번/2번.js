function resultsum() {
    var price = 24000;
    var checkmenu = document.order.add;
    for (var i = 0; i < checkmenu.length; i++) {
        if (checkmenu[i].checked == true) {
            price += parseInt(checkmenu[i].value);
        }
    }
    var result = document.getElementById("result");
    result.innerHTML = price + "원";
}