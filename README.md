# light based information anchoring with visual markers
Software created by undergraduate students enrolled in ECE 597SD at UMass Amherst. The software is for a project about light based information anchoring with visual markers. 


Team Members | Roles:
- Tom Horner    | Research
- Jared Malone  | Hardware       
- Orion McLain  | Writing       
- Rohan Singhvi | Software


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
Screen based sensing is a very promising field in technology for the future. With screens more prevelant than ever, being able to analyze information relayed from these light based sources is a useful way to communicate. Working with LEDs is a good entry point into the space of light-based information anchoring, and will provide the necessary experience to move forward in this field in the future. 


Design Goals:
- Create a light-based anchor to precisely overlay content on iPhone screen precise synchronization in time
- Support data rates of at least 0.1 Kbps
- Accurate data decoding


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
- Oct 21: Have first project meeting and start working
- Nov 4 : Microcontroller configured: LED and BLE
- Nov 18: Have iPhone code prototype functional
- Dec 2 : Have research paper rough draft
- Dec 9 : Project complete


References:
1. https://movitherm.com/knowledgebase/thermal-infrared-imaging-explained/
2. https://labs.mozilla.org/projects/webxr-viewer/
3. https://www.freepatentsonline.com/y2020/0357182.html
4. https://arxiv.org/pdf/2105.05092.pdf
5. https://users.ece.cmu.edu/~vsekar/assets/pdf/ipsn20_glitter.pdf
