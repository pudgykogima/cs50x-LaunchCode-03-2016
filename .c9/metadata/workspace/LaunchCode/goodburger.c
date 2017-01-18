{"filter":false,"title":"goodburger.c","tooltip":"/LaunchCode/goodburger.c","undoManager":{"mark":44,"position":44,"stack":[[{"start":{"row":10,"column":0},"end":{"row":11,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":11,"column":0},"end":{"row":11,"column":1},"action":"insert","lines":["/"],"id":3}],[{"start":{"row":11,"column":1},"end":{"row":11,"column":2},"action":"insert","lines":["/"],"id":4}],[{"start":{"row":11,"column":2},"end":{"row":11,"column":3},"action":"insert","lines":["u"],"id":5}],[{"start":{"row":11,"column":2},"end":{"row":11,"column":3},"action":"remove","lines":["u"],"id":6}],[{"start":{"row":11,"column":2},"end":{"row":11,"column":3},"action":"insert","lines":[" "],"id":7}],[{"start":{"row":11,"column":3},"end":{"row":11,"column":4},"action":"insert","lines":["u"],"id":8}],[{"start":{"row":11,"column":4},"end":{"row":11,"column":5},"action":"insert","lines":["s"],"id":9}],[{"start":{"row":11,"column":5},"end":{"row":11,"column":6},"action":"insert","lines":["i"],"id":10}],[{"start":{"row":11,"column":6},"end":{"row":11,"column":7},"action":"insert","lines":["n"],"id":11}],[{"start":{"row":11,"column":7},"end":{"row":11,"column":8},"action":"insert","lines":["g"],"id":12}],[{"start":{"row":11,"column":8},"end":{"row":11,"column":9},"action":"insert","lines":[" "],"id":13}],[{"start":{"row":11,"column":9},"end":{"row":11,"column":10},"action":"insert","lines":["f"],"id":14}],[{"start":{"row":11,"column":10},"end":{"row":11,"column":11},"action":"insert","lines":["u"],"id":15}],[{"start":{"row":11,"column":10},"end":{"row":11,"column":11},"action":"remove","lines":["u"],"id":16}],[{"start":{"row":11,"column":10},"end":{"row":11,"column":11},"action":"insert","lines":["p"],"id":17}],[{"start":{"row":11,"column":11},"end":{"row":11,"column":12},"action":"insert","lines":["u"],"id":18}],[{"start":{"row":11,"column":12},"end":{"row":11,"column":13},"action":"insert","lines":["t"],"id":19}],[{"start":{"row":11,"column":13},"end":{"row":11,"column":14},"action":"insert","lines":["s"],"id":20}],[{"start":{"row":10,"column":0},"end":{"row":11,"column":0},"action":"insert","lines":["",""],"id":21}],[{"start":{"row":11,"column":0},"end":{"row":12,"column":0},"action":"insert","lines":["",""],"id":22}],[{"start":{"row":11,"column":0},"end":{"row":54,"column":1},"action":"insert","lines":["int main(void)","{","  string menuItems[] = {\"Water\", \"Soda\", \"Cheeseburger\", \"Fries\"};","","  // Display menu:","  printf(\"Welcome to Good Burger! Can I take your order?\\n\");","  printf(\"MENU:\\n\");","  for (int i = 0; i < 4; i++)","  {","    printf(\"Item %i: %s\\n\", i, menuItems[i]);","  }","  printf(\"\\nHow many items?\\n\");","","  int numItems = GetInt();","","  // PUT YOUR CODE HERE: open a file to write","  FILE* orderf = fopen(\"orders.txt\", \"w\");","","  // PUT YOUR CODE HERE: before continuing, make sure the file pointer is not NULL","  // if it is NULL, then quit the program (return 1) instead of continuing","  if (orderf == NULL)","  {","    exit(1);","  }","","  for (int i = 0; i < numItems; i++)","  {","    printf(\"Which menu item would you like (0, 1, 2, or 3)?\\n\");","    int orderNum = GetInt();","    ","    if (orderNum < 0 || orderNum > 3)","    {","      printf(\"Invalid selection.\\n\");","      fputs(\"Invalid selection.\\n\", orderf);","    }","","    fputs(menuItems[orderNum], orderf);","    fputs(\"\\n\", orderf);","  }","","  // PUT YOUR CODE HERE: close the file","  fclose(orderf);","  return 0;","}"],"id":23}],[{"start":{"row":10,"column":0},"end":{"row":11,"column":0},"action":"insert","lines":["",""],"id":24}],[{"start":{"row":11,"column":0},"end":{"row":11,"column":1},"action":"insert","lines":["/"],"id":25}],[{"start":{"row":11,"column":1},"end":{"row":11,"column":2},"action":"insert","lines":["/"],"id":26}],[{"start":{"row":11,"column":2},"end":{"row":11,"column":3},"action":"insert","lines":[" "],"id":27}],[{"start":{"row":11,"column":3},"end":{"row":11,"column":4},"action":"insert","lines":["u"],"id":28}],[{"start":{"row":11,"column":4},"end":{"row":11,"column":5},"action":"insert","lines":["s"],"id":29}],[{"start":{"row":11,"column":5},"end":{"row":11,"column":6},"action":"insert","lines":["i"],"id":30}],[{"start":{"row":11,"column":6},"end":{"row":11,"column":7},"action":"insert","lines":["n"],"id":31}],[{"start":{"row":11,"column":7},"end":{"row":11,"column":8},"action":"insert","lines":["g"],"id":32}],[{"start":{"row":11,"column":8},"end":{"row":11,"column":9},"action":"insert","lines":[" "],"id":33}],[{"start":{"row":11,"column":9},"end":{"row":11,"column":10},"action":"insert","lines":["f"],"id":34}],[{"start":{"row":11,"column":10},"end":{"row":11,"column":11},"action":"insert","lines":["w"],"id":35}],[{"start":{"row":11,"column":11},"end":{"row":11,"column":12},"action":"insert","lines":["r"],"id":36}],[{"start":{"row":11,"column":12},"end":{"row":11,"column":13},"action":"insert","lines":["i"],"id":37}],[{"start":{"row":11,"column":13},"end":{"row":11,"column":14},"action":"insert","lines":["t"],"id":38}],[{"start":{"row":11,"column":14},"end":{"row":11,"column":15},"action":"insert","lines":["e"],"id":39}],[{"start":{"row":58,"column":0},"end":{"row":58,"column":3},"action":"insert","lines":["// "],"id":40},{"start":{"row":59,"column":0},"end":{"row":59,"column":3},"action":"insert","lines":["// "]},{"start":{"row":60,"column":0},"end":{"row":60,"column":3},"action":"insert","lines":["// "]},{"start":{"row":62,"column":0},"end":{"row":62,"column":3},"action":"insert","lines":["// "]},{"start":{"row":63,"column":0},"end":{"row":63,"column":3},"action":"insert","lines":["// "]},{"start":{"row":64,"column":0},"end":{"row":64,"column":3},"action":"insert","lines":["// "]},{"start":{"row":65,"column":0},"end":{"row":65,"column":3},"action":"insert","lines":["// "]},{"start":{"row":66,"column":0},"end":{"row":66,"column":3},"action":"insert","lines":["// "]},{"start":{"row":67,"column":0},"end":{"row":67,"column":3},"action":"insert","lines":["// "]},{"start":{"row":68,"column":0},"end":{"row":68,"column":3},"action":"insert","lines":["// "]},{"start":{"row":69,"column":0},"end":{"row":69,"column":3},"action":"insert","lines":["// "]},{"start":{"row":71,"column":0},"end":{"row":71,"column":3},"action":"insert","lines":["// "]},{"start":{"row":73,"column":0},"end":{"row":73,"column":3},"action":"insert","lines":["// "]},{"start":{"row":74,"column":0},"end":{"row":74,"column":3},"action":"insert","lines":["// "]},{"start":{"row":76,"column":0},"end":{"row":76,"column":3},"action":"insert","lines":["// "]},{"start":{"row":77,"column":0},"end":{"row":77,"column":3},"action":"insert","lines":["// "]},{"start":{"row":78,"column":0},"end":{"row":78,"column":3},"action":"insert","lines":["// "]},{"start":{"row":79,"column":0},"end":{"row":79,"column":3},"action":"insert","lines":["// "]},{"start":{"row":80,"column":0},"end":{"row":80,"column":3},"action":"insert","lines":["// "]},{"start":{"row":81,"column":0},"end":{"row":81,"column":3},"action":"insert","lines":["// "]},{"start":{"row":83,"column":0},"end":{"row":83,"column":3},"action":"insert","lines":["// "]},{"start":{"row":84,"column":0},"end":{"row":84,"column":3},"action":"insert","lines":["// "]},{"start":{"row":85,"column":0},"end":{"row":85,"column":3},"action":"insert","lines":["// "]},{"start":{"row":86,"column":0},"end":{"row":86,"column":3},"action":"insert","lines":["// "]},{"start":{"row":88,"column":0},"end":{"row":88,"column":3},"action":"insert","lines":["// "]},{"start":{"row":89,"column":0},"end":{"row":89,"column":3},"action":"insert","lines":["// "]},{"start":{"row":90,"column":0},"end":{"row":90,"column":3},"action":"insert","lines":["// "]},{"start":{"row":91,"column":0},"end":{"row":91,"column":3},"action":"insert","lines":["// "]},{"start":{"row":92,"column":0},"end":{"row":92,"column":3},"action":"insert","lines":["// "]},{"start":{"row":94,"column":0},"end":{"row":94,"column":3},"action":"insert","lines":["// "]},{"start":{"row":95,"column":0},"end":{"row":95,"column":3},"action":"insert","lines":["// "]},{"start":{"row":96,"column":0},"end":{"row":96,"column":3},"action":"insert","lines":["// "]},{"start":{"row":98,"column":0},"end":{"row":98,"column":3},"action":"insert","lines":["// "]},{"start":{"row":99,"column":0},"end":{"row":99,"column":3},"action":"insert","lines":["// "]},{"start":{"row":100,"column":0},"end":{"row":100,"column":3},"action":"insert","lines":["// "]},{"start":{"row":101,"column":0},"end":{"row":101,"column":3},"action":"insert","lines":["// "]}],[{"start":{"row":48,"column":4},"end":{"row":48,"column":9},"action":"remove","lines":["fputs"],"id":41},{"start":{"row":48,"column":4},"end":{"row":48,"column":5},"action":"insert","lines":["f"]}],[{"start":{"row":48,"column":5},"end":{"row":48,"column":6},"action":"insert","lines":["w"],"id":42}],[{"start":{"row":48,"column":6},"end":{"row":48,"column":7},"action":"insert","lines":["r"],"id":43}],[{"start":{"row":48,"column":7},"end":{"row":48,"column":8},"action":"insert","lines":["i"],"id":44}],[{"start":{"row":48,"column":8},"end":{"row":48,"column":9},"action":"insert","lines":["t"],"id":45}],[{"start":{"row":48,"column":9},"end":{"row":48,"column":10},"action":"insert","lines":["e"],"id":46}]]},"ace":{"folds":[],"scrolltop":209,"scrollleft":0,"selection":{"start":{"row":36,"column":0},"end":{"row":36,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":13,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1458595643893,"hash":"a858dc3477d067db9947b62466569dabc95f84a5"}