https://github.com/kubawolanin/drum-tuner

http://hyperphysics.phy-astr.gsu.edu/hbase/Music/cirmem.html

https://tune-bot.com/tuning-guide/
https://tune-bot.com/tunebottuningguide.pdf

https://patents.google.com/patent/US8283544B2/en

https://leftyfretz.com/roadie-3-tuner-review/

https://github.com/meerzafarnoohani/KISS_FFT

https://forum.arduino.cc/t/esp32-pitch-detection-for-musical-instruments-tuner/1409600

https://github.com/Latemas/DIY-Arduino-Guitar-Tuner

https://www.instructables.com/Automatic-Guitar-Tuner-Arduino/

servomoteur à couple élevé (ex: MG996R ou équivalent, avec un couple >10 kg.cm).
prévoir une limite de courant ou un capteur de fin de course pour éviter de foirer les filets ou d'abîmer le fût.

Capteur de force résistif (FSR) : Un composant fin et flexible dont la résistance diminue quand on appuie dessus. C'est simple à utiliser avec un Arduino. La calibration se fait en appliquant des poids connus et en relevant la tension de sortie.

Capteur à effet Hall : Cette approche, utilisée dans un projet de l'Université de l'Illinois, est très ingénieuse. Elle mesure la déflexion d'une petite poutre en métal (qui se déforme sous la tension du fût) grâce à un capteur magnétique (UGN3503U). C'est plus complexe à mettre en œuvre mais potentiellement très précis.

microphone à électret connecté à l'ADC de l'Arduino 

Algorithmes : La FFT (Transformée de Fourier Rapide) est la méthode classique, mais elle est limitée par la mémoire de l'Arduino et peut être moins précise sur les signaux inharmoniques.

La meilleure piste : De nombreux projets et discussions sur les forums recommandent l'algorithme YIN (ou des variantes comme l'autocorrélation). Il est reconnu pour être beaucoup plus robuste que la FFT pour trouver la fréquence fondamentale, même lorsque les harmoniques sont fortes. Il existe des implémentations en C/C++ prêtes à être portées sur Arduino.

Li-ion 18650 (3.7V) 

module de charge USB-C et un convertisseur DC-DC (boost) pour fournir les 5V ou 6V nécessaires au servomoteur et à l'Arduino.

Test de l'algorithme Audio : Fais tourner le code de détection de fréquence (YIN) sur l'Arduino sans aucun moteur. Compare les fréquences détectées avec une application d'accordage sur ton téléphone. C'est une étape cruciale pour valider ta "vision" du son.

Microcontrôleur : Arduino Uno ou Nano.



Actionneur : Un servomoteur à fort couple (ex: MG996R, >10 kg.cm).

Capteur de Tension : Un ou deux capteurs de force résistifs (FSR) de taille moyenne pour tes premiers tests.

Audio : Un module microphone à électret (ex: MAX4466 ou MAX9814, qui inclut un ampli).

Alimentation : Une batterie Li-ion 18650, un support, un module de charge TP4056 (USB-C) et un convertisseur boost réglable (ex: MT3608).

Divers : Plaque de test, fils Dupont, un multimètre.