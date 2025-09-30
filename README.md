# CS3520 Domain Analysis Report

**Team Name:** Binary Cartel
**Project Title:** Health Monitoring System
**Date:** 21st September 2025
**Course:** CS3520 - Computer Organisation and Architecture I

---

## 1. Application Context

Mobile phones are the backbone of African technology due to their affordability and accessibility. However, healthcare services in many rural communities remain scarce, with facilities often focusing more on chronic illnesses. Our project proposes a low-cost, AI-enabled RISC-V processor embedded in mobile phones to support health monitoring. This domain addresses urgent challenges: limited access to clinics, absence of continuous health tracking, and delays in early detection of illness.

By enabling real-time monitoring of vital signs such as heart rate, body temperature, and physical activity, the system empowers individuals to stay updated on their health and receive timely alerts when anomalies occur. It also supports healthcare centres through continuous patient data logging, enabling proactive care. This application domain is highly relevant in Lesotho and Africa because it bridges healthcare gaps, leverages already widespread mobile adoption, and supports national digital transformation strategies aligned with the Fourth Industrial Revolution.

---

## 2. Representative Applications

| Application                | Short Description                                  | Key Computational Tasks                              | Notes (Relevance)                       |
| -------------------------- | -------------------------------------------------- | ---------------------------------------------------- | --------------------------------------- |
| **Vital Signs Monitoring** | Track heart rate, temperature, and activity levels | Sensor data acquisition, filtering, basic statistics | Essential for personal health awareness |
| **Anomaly Detection**      | Identify irregularities (e.g., fever, abnormal HR) | Lightweight ML inference, pattern recognition        | Supports early diagnosis & reduces risk |
| **Data Logging**           | Maintain daily health records                      | Storage, indexing, lightweight encryption            | Enables continuity of care for patients |
| **Emergency Alerts**       | Notify healthcare workers/family in emergencies    | Event handling, SMS/USSD, secure communication       | Life-saving in urgent cases             |
| **Health Tips & Feedback** | Provide lifestyle recommendations                  | Rule-based logic, simple message generation          | Promotes preventive healthcare          |

---

## 3. Workload Characteristics

The workloads are defined by continuous sensor-driven computation combined with lightweight AI inference. Data acquisition involves frequent reads from sensors (or simulated equivalents) that must be cleaned and filtered. Signal processing requires simple arithmetic for noise removal and data smoothing. AI inference applies small machine learning models to classify anomalies in vital signs, emphasizing low-latency matrix/vector operations. Communication workloads involve secure but lightweight protocols (SMS, USSD, or internet when available), requiring efficient data movement. User interaction is simple, limited to notifications and clear health feedback.

Overall, the processor must handle small but frequent arithmetic workloads, lightweight ML inference, and secure communication with minimal power consumption. Memory operations are also critical for continuous health data logging. These requirements reflect the realities of rural African contexts: intermittent connectivity, limited electricity, and the need for reliable, energy-efficient mobile health solutions.

---

## 4. Initial Insights for Processor Design

* Optimized for frequent small matrix/vector computations (AI inference).
* Low-power design suitable for battery-constrained devices.
* Support secure, lightweight communication protocols (SMS/USSD).
* Efficient memory management for continuous health data logging.
* Simple arithmetic instructions for filtering and averaging in signal processing.
* Compact, customizable ISA for targeted health monitoring workloads.

---

## 5. References

1. Abebe, R., Aruleba, K., Birhane, A., Kingsley, S., Obaido, G., Remy, S. & Sadagopan, S., 2021. *Narratives and Counternarratives on Data Sharing in Africa*. arXiv:2103.01168. [online] Available at: [https://arxiv.org/abs/2103.01168](https://arxiv.org/abs/2103.01168) [Accessed 23 September 2025].

2. World Health Organisation, 2021. *Global Strategy on Digital Health 2020-2025*. Geneva: WHO. [online] Available at: [https://www.who.int/docs/default-source/documents/gs4dhdaa2a9f352b0445bafbc79ca799dce4d.pdf](https://www.who.int/docs/default-source/documents/gs4dhdaa2a9f352b0445bafbc79ca799dce4d.pdf) [Accessed 23 September 2025].

3. Okolo, C.T., Aruleba, K. & Obaido, G., 2022. *Responsible AI in Africa—Challenges and Opportunities*. In: Social and Cultural Studies of Robots and AI (SOCUSRA). Singapore: Springer. Available at: [https://doi.org/10.1007/978-3-031-08215-3_3](https://doi.org/10.1007/978-3-031-08215-3_3) [Accessed 23 September 2025].

4. Tshimuila, J.M., Kalengayi, M., Makenga, D. et al., 2024. *Artificial Intelligence for Public Health Surveillance in Africa: Applications and Opportunities*. arXiv:2408.02575. [online] Available at: [https://arxiv.org/abs/2408.02575](https://arxiv.org/abs/2408.02575) [Accessed 23 September 2025].

5. GSMA Intelligence, 2023. *The Mobile Economy: Sub-Saharan Africa 2023*. London: GSMA. [online] Available at: [https://www.gsma.com/mobileeconomy/sub-saharan-africa/2023/](https://www.gsma.com/mobileeconomy/sub-saharan-africa/2023/) [Accessed 23 September 2025].

6. RISC-V International, 2019. *The RISC-V Instruction Set Manual, Volume I: User-Level ISA, Document Version 20191213*. [online] Available at: [https://riscv.org/technical/specifications/](https://riscv.org/technical/specifications/) [Accessed 23 September 2025].
