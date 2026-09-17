زينة الحراير — Zaina Al-Haraer

Smart AI-powered pesticide detection station for Tunisian agricultural women محطة ذكية للحماية من المبيدات الزراعية للمرأة العاملة في الحقول التونسية


The Problem — المشكلة

Over 500,000 women work in Tunisian agriculture, exposed daily to pesticides that are banned in Europe due to their lethal effects. A woman's body is more vulnerable to these chemicals due to hormonal cycles, pregnancy, and breastfeeding. The result: cancers, birth defects, and mothers who don't come home.

No smartphone. No internet. No one to warn them. Until now.



The Solution — الحل

Zaina Al-Haraer is a solar-powered IoT station installed at the entrance of agricultural fields. It detects organophosphate pesticide vapors in real time, calculates cumulative 8-hour exposure (TWA), respects the 24-hour safe re-entry interval (REI), detects human presence via PIR sensor, and speaks to women in Tunisian Darija — no phone, no literacy required.

🟢 Safe      → "المنطقة آمنة، يمكنك الدخول"
🟡 Protect   → "لبسي الكمامة والقفازات قبل ما تدخلي"
🔴 Danger    → "خطر! ما تدخليش، الهواء فيه مبيدات"
How It Works — كيف تعمل
MQ-135 + MQ-3 sensors (every 60s, 24/7)
         ↓
RandomForest AI model (offline, model.h)
         ↓
TWA 8h calculation (NIOSH standard)
         ↓
REI 24h counter (safe re-entry interval)
         ↓
PIR detects human presence
         ↓
DFPlayer plays Darija voice alert
Hardware Components — المكونات
Component	Role	Cost
ESP32 WROOM-DA	Controller + AI model	15 TND
MQ-135	Organophosphate detection	8 TND
MQ-3	Paraquat detection	7 TND
PIR HC-SR501	Presence detection	5 TND
DFPlayer Mini	Darija MP3 alerts	8 TND
Speaker 3W	Audio output	6 TND
Solar panel 10W	Power source	30 TND
LiPo battery 6000mAh	5-7 days autonomy	15 TND
TP4056	Solar charge controller	3 TND
IP67 enclosure	Weather protection	25 TND
TOTAL		~164 TND (~52 USD)
AI Model — نموذج الذكاء الاصطناعي
Algorithm: RandomForestClassifier (scikit-learn)
Features: MQ135_raw, MQ3_raw
Classes: safe / wear-protection / danger
Training samples: ~700 labeled samples
Deployment: Converted to C++ via micromlgen → model.h (runs fully offline on ESP32)
Standards: NIOSH 8-hour TWA, EPA re-entry intervals
GPIO Pin Mapping
GPIO35 → MQ-135 AOUT (via voltage divider 10kΩ + 20kΩ)
GPIO33 → MQ-3 AOUT (via voltage divider)
GPIO13 → PIR OUT
GPIO17 → DFPlayer RX (Serial2)
GPIO16 → DFPlayer TX (Serial2)
VIN    → MQ sensors VCC (5V)
Project Structure
zaina-alharaer/
├── firmware/
│   ├── sketch.ino          # Arduino code (TWA + REI + PIR + DFPlayer)
│   └── model.h             # AI model (RandomForest → C++)
├── ai_model/
│   ├── train_model.py      # Training script
│   ├── convert_model.py    # micromlgen conversion
│   └── donnees_capteurs.csv
├── hardware/
│   ├── circuit_wokwi.json  # Wokwi circuit
│   └── components_list.md
├── docs/
│   ├── concept_note.pdf
│   ├── prototype.pdf
│   └── workflow.pdf
└── media/
    └── station_field.png
Scalability Vision — رؤية التوسع
Phase	Scope	Cost
Phase 1 (NOW)	Entry station — 20-50 women/day	164 TND
Phase 2	Internal LoRa sensor nodes	+80 TND/node
Phase 3	Regional network + health center dashboard	~324 TND/field
Phase 4	Commercial production	22-50 TND/unit
Economic Impact

One station (164 TND) protects 20-50 women daily. One pesticide poisoning treatment costs 500-2,000 TND. Cost per woman protected per year: less than 10 TND.

Built With

Hardware: ESP32, MQ-135, MQ-3, PIR HC-SR501, DFPlayer Mini
Firmware: Arduino IDE, C++
AI: Python, scikit-learn, micromlgen
Simulation: Wokwi
Standards: NIOSH TWA, EPA REI

Future Vision

Link station data to governmental organizations defending women's rights
SMS notification service to field supervisors (not individual workers — to avoid digital inequality)
First documented pesticide exposure dataset in Tunisian agricultural zones
Optional mobile app for supervisors and health officials (v3)

License

This project is source-available. It is **NOT** open-source. 

You may view and modify the code for personal, non-commercial use. However, **deployment, distribution, or any commercial use is strictly prohibited**.

See the LICENSE file for the full terms.

Links

-  Email: zyntalhrayr@gmail.com
- facebook : https://www.facebook.com/profile.php?id=61593436598421
- Instagram: https://www.instagram.com/zyntalhrayr/
- YouTubr : www.youtube.com/@zyntalhrayer





Built for the women who feed Tunisia and deserve to come home safe every evening.

لأن كل  امرأة  تُطعم تونس تستحق  كرامة مهنية