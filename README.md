# RG-Stats [Asmodaeus]

ist ein kleines Projekt rund um das Spiel "Resources Game" für Android.
Eine Wirtschaftssimulation, gekreuzt mit Outdoor Spiel Spaß.

[Resources Game - Homepage](http://www.resources-game.ch/de/)

[Google Play](https://play.google.com/store/apps/details?id=ch.pala.resources&hl=de)

[G+ Communitie](https://plus.google.com/communities/112958899113930417808)

Dieses Projekt erfasst eine Statistik und wertet diese übersichtlich aus,
Sie hilft dem Anwender Entscheidung über Einkauf, Verkauf und Produktion zu 
treffen.
Es bietet eine Übersicht über Kursverlauf und Wirtschaftszahlen über Produkte.
So lassen sich z.b. der Gewinn von einem Produkt auswerten wobei mehrere Szenarien
beachtet werde. 

    - Kommen alle Rohstoffe aus Eigenproduktion
    - werden Rohstoffe eingekauft
    - ist der verkauf lukrativer als der Gewinn durch das Endprodukt
    - Kosten Übersicht beim Bau von Spezial Gebäuden
    - und vieles mehr.
    
Derzeit sieht das ganze Projekt noch relativ chaotisch aus. Da ich längere Zeit kein C++
mehr genutzt habe und auch noch einiges lernen muss, ist der Quelltext vorerst rein funktional,
mit der Zeit werde ich alle Komponenten verbessern und effizienter gestalten.

Kurz um dieses Projekt ist ein Lern und weiterbildungs Projekt.
Daher nutze ich auch wie unten aufgeführt einige ThirdParty Projekte, wobei einige sicherlich
denken man kann es einfacher oder „ganz“ anderes bewerkstelligen. 

Im Vordergrund steht vor allem das TNTNET Framework, da ich mich auf dieses als Entwickler 
Spezialisieren möchte. Es ist sehr mächtig und lässt keine Wünsche offen.
Besonders die Verschmelzung von C++ und Webentwicklung/Design ist das was es für
mich so interessant macht.

RG-Stats ist in zwei Projekte aufgeteilt! 
Der Statistik Server dessen Aufgabe lediglich das Sammeln der Markt Daten ist und diese in eine Postgresql Datenbank
einpflegt. Hierbei werden die Daten als JSON Format vom RG Server geholt und ausgewertet.

Der Zweite teil ist das eigentliche Projekt, ein Kommandozeilen Tool sowie eine übersichtliche Webseite, auf der
alle Wichtigen Daten ausgewertet und Angezeigt werden.

Dieses System arbeitet mit keinerlei Eingaben oder aufwendigen Algorithmen. Da es keinen Vorteil gegenüber anderen
Spielern verschaffen soll es ist einfach eine Entscheidungshilfe.

Einige Spieler bewerkstelligen dies bereits mit einfachen bis sehr Komplexen Excel Tabellen.


Weitere Information erhaltet hier in den README's der einzelnen unter Projekten:

[Stats Server](../stats_server/README.md)
[wpage](../wpage/README.md)
[ThirdParty](../thirdparty/README.md)
    
[Fundobjekte/loot](../loot/README.md)
[Produkte/products](../products/README.md)
[Einheiten/troops](../troops/README.md)
[Ressourcen/resources](../resources/README.md)
        
[Alle Screenshots](../Screenshots/README.md)
        
        
## Screenshots: 

...coming soon!

## System Environment:

### TntNet
-----------------------
* http://www.tntnet.org/
    * https://github.com/maekitalo/cxxtools.git
    * https://github.com/maekitalo/tntnet.git
    * https://github.com/maekitalo/tntdb.git

### Curlpp
-----------------------
* http://www.curlpp.org/
    * https://github.com/jpbarrette/curlpp.git


### ThirdParty (includes):
-----------------------
> use BigINT
* https://github.com/sercantutar/infint.git

> SMTP Class 
* http://www.codeproject.com/Articles/28806/SMTP-Client
* http://www.codeproject.com/Articles/98355/SMTP-Client-with-SSL-TLS


### Web of Interest

    *https://www.hakkalabs.co/
-------------------------------------------------------------------------------------------
Donate / Financial Support

    * Bitcoin:  1PyNZgbyNAatVnjNy2JSVFTktRbAind8h5
    * Litecoin: LMrcgbMx1uEaziFcXHNgBjjYzEoCcaoQKA
    * Dogecoin: D6QgmxRjSxVgcw6ZsVr5XwBpSawAfqHv6z
    * or InApp Credits ;D = "Lockdown"