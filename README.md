# light based information anchoring with visual markers
Software created by undergraduate students enrolled in ECE 597SD at UMass Amherst. The software is for a project about light based information anchoring with visual markers. 


Team Members|Roles:
Tom Horner|Research    Jared Malone|Hardware     Orion McLain|Writing     Rohan Singhvi|Software


Background (Given):
Light based anchors (LEDs) for information overlaying are robust to background visual
noise (unlike active IR), not obtrusive, and resilient to partial occlusions unlike other visual markers.
These tags can work directly with devices using computer vision techniques (phone/tablet cameras,
headsets). Prominently, these tags are also capable of transmitting data at a rate that depends
upon the receiver camera’s frame rate. The LED tag communicates its identity by blinking a unique
visual pattern in time and can be identified over longer distances that is particularly useful for data
communication and localization. A major challenge in LED based communication is that the pattern
decoding requires both sender device and receiver device to be synchronized in time. Any timing
offset will spread the signal across multiple frames and induce errors in decoding.


Motivation:


Design Goals:
Create a light-based anchor to precisely overlay content on iphone screen


Deliverables:
- Implement software for LED encoding
- Receive LED encoded patterns on iphone camera and decode the pattern (encoded ID)
- Precisely overlay ID on iphone screen


System Blocks: 


Hardware Requirements:
- microcontroller (BLEs, LEDs)
- Iphone


Software Requirements:


Project Timeline:


References:
https://movitherm.com/knowledgebase/thermal-infrared-imaging-explained/

