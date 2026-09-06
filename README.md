# Arduino Relay Control — Mains Safety Notice

This is a legacy Arduino relay-control experiment. The Arduino code demonstrates low-voltage control logic for a relay input; it is **not a mains-voltage wiring guide**.

## Electrical safety

120 VAC mains power can cause severe injury, electrocution, fire, or equipment damage. Do not connect an Arduino, breadboard, exposed relay board, or unapproved enclosure directly to building wiring based on this repository.

For any mains-voltage installation:

- use appropriately rated, listed/approved switching equipment and enclosures;
- maintain required isolation, grounding, overcurrent protection, conductor sizing, strain relief, and clearances;
- follow applicable electrical codes and manufacturer instructions;
- have the mains-voltage portion designed or installed by a qualified electrician when required.

The low-voltage Arduino/relay-control code remains here as a historical example. The former step-by-step mains wiring directions have been replaced with a safety notice because they were too incomplete to be relied on safely.

## Scope

The safe conceptual boundary is:

`Arduino low-voltage output → isolated/rated relay interface → professionally designed mains switching circuit`

Do not treat the relay module's low-voltage ground as protective earth, and do not assume an arbitrary relay board is suitable for switching mains loads simply because its relay contacts carry a voltage rating.
