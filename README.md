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
Screen based sensing is a very promising field in technology for the future. With screens more prevelant than ever being able to analyze information being relayed from these light based sources is a useful way to communicate. Working with LEDs 


Design Goals:
Create a light-based anchor to precisely overlay content on iPhone screen with precise synchronization in time


Deliverables:
- Implement software for LED encoding
- Receive LED encoded patterns on iphone camera and decode the pattern (encoded ID)
- Precisely overlay ID on iPhone screen


System Blocks: 
- Microcontroller (BLEs, LEDs)
- iPhone
- Bit encoder
- Bit decoder
- LED blinking extractor
- Error correction (checksum)


Hardware Requirements:
- microcontroller (BLEs, LEDs)
- iPhone


Software Requirements:
- UI (website or application)
- Bit encoder
- Bit decoder


Project Timeline:
- October 15th:
-
-


References:
https://movitherm.com/knowledgebase/thermal-infrared-imaging-explained/
https://labs.mozilla.org/projects/webxr-viewer/
https://www.freepatentsonline.com/y2020/0357182.html
https://arxiv.org/pdf/2105.05092.pdf
https://users.ece.cmu.edu/~vsekar/assets/pdf/ipsn20_glitter.pdf
