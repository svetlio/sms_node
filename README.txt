Description
-----------
Модула е предназначен за публикуване на обяви, и маркирането им като вип.
Работи с услугата "Известяване за плащане" на http://mobio.bg. 
Допълително е необходимо да се инсталира модула job_scheduler

Инсталиране
Модула се поставя в директорията с допълнителни модули sites/all/modules.
Включва се от admin/build/modules
Инсталира се модула job_scheduler - http://drupal.org/project/job_scheduler.
Той не се нуждае от настройки.

Настройки на модула - admin/settings/sms_mobio/sms_node

1. Саздаваме нов вид съдържание обява, с Workflow /Опции за публикуване/
настройки Без отметка за Публикувано /Publish/ и Представен на първа страница
/promote/. Така потребителя ще може да създава обяви, но те все още
няма да се виждат на сайта.

2. Създаваме и настройваме услуга тип "Известяване за плащане" на
http://mobio.bg - за "Публикуване" на обява. За URL задаваме
http://вашият.сайт/check/sms/node. Създаваме втора услуга от същия вид
а ВИП на обява. Вип /като втора услуга/ е с друга ключова дума и същите
настройки.

3. Инсталираме и настройваме модула sms_node. Изисква инсталирането на модула
job_scheduler - за него няма настройки. В настройките на sms_node се задава
servID - номера на услугата от профила в mobio.bg. Задава се броя дни, в които
обявате ще се вижда на сайта. Периода е еднакъв за Публикуване и вип. Това е 
периода, който се добавя за Публикуване или Вип за всеки изпратен смс за обява.

За да стане обява Публикувана, потребителя изпраща смс на кратък номер със
съдържание ДУМА 12, като дума е ключовата дума от настройката на услугата в
mobio.bg, а 12 е id на записаната обява. Обявата трябва да е създадена преди да
се Публикува.
За да стане Вип обява се изпраща друг смс с ключовата дума от втората услуга и
id на нода.

***Изпращането на смс за Вип Не прави обявата Публикувана, но я прави вип.

Проверяваме в страницата admin/settings/sms_mobio/debug.

Задължително е да има правилно конфигуриран cron. За това може да се използва 
модула drupal.org/project/poormanscron.

Модула е несъвместим с модула domain.

Maintainers
-----------
The Sms node module was originally developped by:
Svetoslav Stoyanov - http://drupal.org/user/717122

GNU GENERAL PUBLIC LICENSE, Version 2, June 1991, see LICENSE.txt for details.