## EasyScheduler

# **PL**
EasyScheduler to biblioteka służąca do łatwej imitacji wielozadaniowości na platformach takich jak Arduino czy STM32 (jeśli używasz STM32duino). Jest to doskonała alternatywa dla bardziej zaawansowanych bibliotek RTOS w przypadku prostych i średnio zaawansowanych aplikacji.

Aby dodać bibliotekę do projektu, wystarczy pobrać plik .zip i zaimportować ją w Arduino IDE. Ciesz się prostym i efektywnym zarządzaniem zadaniami w swoim projekcie!

Jak to działa?
Zadania w EasyScheduler są zarządzane za pomocą dwóch parametrów:

-  Czas uśpienia (sleep time) – czas po jakim zadanie powinno się "obudzić" i wykonać.
-  Priorytet – wyższy priorytet oznacza, że zadanie o wyższym priorytecie zostanie wybrane do wykonania, jeśli więcej niż jedno zadanie będzie gotowe do           uruchomienia.
Biblioteka umożliwia łatwe tworzenie prostych systemów wielozadaniowych bez potrzeby używania bardziej skomplikowanych systemów RTOS.

W katalogu Przykłady znajdziesz pełną implementację, która pomoże Ci szybko rozpocząć pracę z biblioteką.
---
# **EN**
EasyScheduler is a library for easily simulating multitasking on platforms like Arduino and STM32 (if using STM32duino). It is a great alternative to more complex RTOS libraries for simple and moderately complex applications.

To add the library to your project, simply download the .zip file and import it into the Arduino IDE. Enjoy simple and effective task management in your project!

How it works?
Tasks in EasyScheduler are managed using two parameters:

Sleep time – the time after which the task should "wake up" and execute.
Priority – a higher priority means that if multiple tasks are ready to run, the one with the higher priority will be selected.
This library allows you to easily create simple multitasking systems without the need for more complex RTOS solutions.

In the Examples folder, you’ll find a full implementation to get you started quickly with the library.
