Description
-----------
Модула публикува нод линк от получен смс.

Инсталиране
--------------

Модула е субмодул на Sms node. 
Поставете го като поддиректория на директорията Sms_node.


Инсталиране

1. Инсталирайте модулите Automatic Nodetitles, Content, Views, Link, Sms_node, Sms_link 

2. Задаваме номера на услуга и вид съдържание на Sms Link модула.

Винаги проверявайте с тестов смс работи ли услугата! 

!!!
При вече инсталиран и използван Sms_node, са необходими следните 
промени по таблицата sms_node:

поле message да стане тип varchar с дължина 180 и 
поле item да стане тип varchar с дължина 160

Maintainers
-----------
The Sms Link module was originally developped by:
Svetoslav Stoyanov - http://drupal.org/user/717122

GNU GENERAL PUBLIC LICENSE, Version 2, June 1991, see LICENSE.txt for details.
