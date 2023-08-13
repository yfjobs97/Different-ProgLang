flight(toronto,madrid).
flight(madrid,barcelona).
flight(barcelona,valencia).
flight(madrid,valencia).
flight(paris,toulouse).

%route includes airline, total price(include ticket and taxes), and total duration(include flying time and security delay)
madridTorontoRoute([iberia,925,585],[united,1075,645],[airCanada,1025,585]).
madridBarcelonaRoute([airCanada,215,135],[iberia,235,140]).
madridValenciaRoute([iberia,155,115]).
barcelonaValenciaRoute([iberia,190,125]).
parisToulouseRoute([united,125,210]).

%minimum tax and security delay for each airport
madridAirport([75,45]).
torontoAirport([50,60]).
barcelonaAirport([40,30]).
valenciaAirport([40,20]).
parisAirport([50,60]).
toulouseAirport([40,30]).

