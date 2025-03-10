# آزمایش اول

## کنترل روشن و خاموش شدن $${\color{lightblue}LED \space BUILTIN}$$(LED در برد آردیونو) به صورت متناوب

### هدف آزمایش:
هدف از انجام این آزمایش، درک نحوه کنترل خروجی‌های دیجیتال در برد آردوینو و آشنایی با مفاهیم اولیه برنامه‌نویسی آردوینو مانند تعریف پین‌ها، تنظیم حالت پین‌ها و استفاده از توابع تاخیر (delay) است.

### وسایل مورد نیاز:
* برد آردوینو
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینو IDE

### شرح آزمایش:

در این آزمایش، سعی داریم $${\color{lightblue}LED \space BUILTIN}$$ روی برد آردیونو را با تاخیر دلخواه به صورت متناوب از طریق برنامه نوشته شده خاموش و روشن کنیم.

**کد نرم‌افزاری و توضیحات:**
```c++

void setup() {
  pinMode(LED_BUILTIN OUTPUT); // تنظیم پین LED_BUILTIN به عنوان خروجی
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // روشن کردن LED
  delay(1000);                      // مکث به مدت 1 ثانیه
  digitalWrite(LED_BUILTIN, LOW);   // خاموش کردن LED
  delay(1000);                      // مکث به مدت 1 ثانیه
}
```
* **تنظیم حالت پین:** در تابع `setup`، پین $${\color{lightblue}LED \space BUILTIN}$$ به عنوان خروجی تنظیم می‌شود تا بتوانیم به آن مقدار دهیم و آن را روشن یا خاموش کنیم.
* **حلقه اصلی:** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار، $${\color{lightblue}LED \space BUILTIN}$$ به مدت 1 ثانیه روشن و سپس به مدت 1 ثانیه خاموش می‌شود.


### نتیجه گیری:
در این آزمایش ساده، ما توانستیم با موفقیت $${\color{lightblue}LED \space BUILTIN}$$ را به صورت متناوب روشن و خاموش کنیم. این آزمایش به عنوان یک نقطه شروع عالی برای یادگیری برنامه‌نویسی آردوینو و کنترل سخت‌افزار با استفاده از نرم‌افزار است. با درک این مفاهیم پایه، می‌توانید پروژه‌های پیچیده‌تر و کاربردی‌تری را با استفاده از آردوینو پیاده‌سازی کنید.


# آزمایش دوم

## کنترل $${\color{lightblue}LED \space BUILTIN}$$ با $${\color{red}PUSH \space BUTTON}$$

### هدف آزمایش:
هدف از انجام این آزمایش، استفاده از ابزار های جدید برای اتصال به برد و تعریف آنها به برد برای انجام کار های جدید می باشد.

### وسایل مورد نیاز:
* برد آردوینو
* یک عدد $${\color{red}PUSH \space BUTTON}$$
* بردبورد
* سیم‌های جامپر
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینو IDE

### شرح آزمایش:

در این آزمایش، سعی داریم $${\color{lightblue}LED \space BUILTIN}$$ روی برد آردیونو را با $${\color{red}PUSH \space BUTTON}$$ از طریق برنامه نوشته شده خاموش یا روشن کنیم.

**کد نرم‌افزاری و توضیحات:**
```c++
int inPin = 7;                     // PUSH BUTTON متصل به پایه هفتم
int val = 0;                       // متغیر برای ذخیره مقدار خوانده شده
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);    // تنظیم پین LED_BUILTIN به عنوان خروجی
  pinMode(inPin, INPUT);           // تنظیم پین inPin به عنوان ورودی
}

void loop() {
  val = digitalRead(inPin);        // خواندن پین ورودی
  digitalWrite(LED_BUILTIN, val);  // تنظیم LED بر اساس مقدار PUSH BUTTON
}
```
* **تعریف پین $${\color{red}PUSH \space BUTTON}$$:** در ابتدای برنامه، پین $${\color{red}PUSH \space BUTTON}$$ به متغیر `inPin` اختصاص داده می‌شود که در این مثال پین 7 است.
* **متغیر val:** در ابتدای برنامه، متغیر `val` برای ذخیره مقدار $${\color{red}PUSH \space BUTTON}$$ تعریف می شود.
* **تنظیم حالت پین $${\color{lightblue}LED \space BUILTIN}$$:** در تابع `setup`، پین $${\color{lightblue}LED \space BUILTIN}$$ به عنوان خروجی تنظیم می‌شود تا بتوانیم به آن مقدار دهیم و آن را روشن یا خاموش کنیم.
* **تنظیم حالت پین $${\color{red}inPin}$$:** در تابع `setup`، پین $${\color{red}inPin}$$ به عنوان ورودی تنظیم می‌شود تا بتوانیم مقدار آن را خوانده و $${\color{lightblue}LED \space BUILTIN}$$ را خاموش یا روشن کنیم.
* **حلقه اصلی:** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار، متغیر `val` مقدار $${\color{red}inPin}$$ را خوانده و به $${\color{lightblue}LED \space BUILTIN}$$ می دهد.

**شماتیک مدار:**

![توضیح تصویر](https://github.com/mohammadalidehghanian/MicroProcessor/blob/main/Session%201/Schematic2.jpg)


**توضیحات شماتیک:**
* همانطور که در تصویر مشخص است پایه 7 برد آردیونو به پایه سمت چپ پایین $${\color{red}PUSH \space BUTTON}$$ متصل است. و پایه بالا راست $${\color{red}PUSH \space BUTTON}$$ به پایه `GND` برد آردیونو متصل شده است.

### نتیجه گیری:
در این آزمایش ساده، ما توانستیم ابزار جدید نیز به برد آردیونو خود اضافه و از آنها استفاده کنیم. این آزمایش قطعا به ما کمک خواهد کرد که در آینده از ابزار های مختلف برای کاربرد های مختلف استفاده کنیم.
