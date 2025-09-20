# CS3520 Project – Week 5 Deliverable

**Team Name:** [Insert Team Name]  
**Project Title:** Health Monitoring System  
**Course:** CS3520 – Computer Organisation and Architecture I  
**Date:** September 20, 2025

---

## 1. Introduction

Our project focuses on the design of a **Health Monitoring System** that continuously tracks a patient's vital signs, issues timely warnings when abnormalities are detected, and provides personalized health improvement tips using AI techniques. This system addresses the urgent healthcare challenges in Africa, particularly in rural areas where medical facilities are scarce and healthcare services are often prohibitively expensive.

### Relevance to Mobile AI Telephony

The integration of mobile AI telephony is crucial for healthcare accessibility in developing regions, particularly in Africa and Lesotho. Low-cost mobile devices with built-in AI capabilities can:

- **Bridge the healthcare gap** in rural areas with limited medical infrastructure
- **Provide real-time health monitoring** without requiring expensive medical equipment
- **Enable offline functionality** crucial for areas with unreliable internet connectivity
- **Offer energy-efficient solutions** suitable for regions with limited power infrastructure
- **Deliver cost-effective healthcare** making basic health monitoring accessible to low-income populations

### Project Goal

The ultimate goal of this project is to **design and simulate a RISC-V–based processor** with built-in AI capabilities tailored specifically to the workloads of health monitoring applications. This custom processor will enable efficient handling of:
- Sensor data acquisition
- Lightweight AI inference
- Signal processing
- Secure communication
- Energy-efficient operation for deployment in resource-constrained environments

---

## 2. Domain Analysis (Application Context & Workload Requirements)

### 2.1 Application Context

Mobile AI telephony can revolutionize healthcare delivery in underserved communities by providing:

**Real-world Applications:**
- **Wearable Health Devices:** Continuous monitoring of vital signs through smartwatches and fitness trackers
- **Mobile Health Applications:** Smartphone-based health monitoring with AI-powered analysis
- **Emergency Alert Systems:** Automatic detection and notification of health emergencies
- **Telemedicine Support:** Remote consultation capabilities with AI-assisted diagnostics

**Local Relevance for Africa/Lesotho:**
- **Low-cost Implementation:** Affordable solutions that don't require expensive infrastructure
- **Offline Capability:** Systems that function without constant internet connectivity
- **Energy Efficiency:** Battery-powered devices suitable for areas with unreliable electricity
- **Cultural Sensitivity:** User interfaces adapted to local languages and healthcare practices
- **Scalability:** Solutions that can be deployed across rural and urban environments

### 2.2 Representative Applications

Our health monitoring system encompasses several key application areas:

#### Vital Signs Monitoring
- **Heart Rate Monitoring:** Continuous tracking of cardiac rhythm and rate
- **Body Temperature Monitoring:** Detection of fever and hypothermia
- **Oxygen Saturation (SpO2):** Monitoring blood oxygen levels
- **Blood Pressure Tracking:** Regular measurement and trend analysis

#### Early Detection of Anomalies
- **Arrhythmia Detection:** Identification of irregular heart rhythms
- **Fever Detection:** Early warning system for elevated body temperature
- **Hypoxia Detection:** Monitoring for dangerous drops in blood oxygen
- **Trend Analysis:** Long-term health pattern recognition

#### Data Logging and Reporting
- **Health Record Management:** Secure storage of patient health data
- **Healthcare Worker Communication:** Automated reports to medical professionals
- **Emergency Notifications:** Instant alerts for critical health events
- **Health Analytics:** Pattern recognition for preventive care

### 2.3 Workload Requirements

The health monitoring system requires efficient handling of diverse computational workloads:

#### Data Acquisition
- **Continuous Sensor Sampling:** Real-time collection from multiple sensors (heart rate, temperature, accelerometer)
- **Data Synchronization:** Coordinating inputs from various sensor sources
- **Quality Control:** Ensuring data integrity and handling sensor errors
- **Buffering:** Managing data flow during high-frequency sampling

#### Signal Processing
- **Noise Filtering:** Removing environmental interference from sensor readings
- **Feature Extraction:** Identifying relevant patterns in physiological signals
- **Trend Analysis:** Computing moving averages and statistical measures
- **Data Compression:** Reducing data size for efficient storage and transmission

#### AI/ML Inference
- **Lightweight Classification:** Real-time categorization of health states (normal/abnormal)
- **Threshold-based Detection:** Automated alerts based on predefined health parameters
- **Anomaly Detection:** Identifying unusual patterns that may indicate health issues
- **Predictive Analysis:** Early warning systems based on trend analysis

#### Communication
- **Data Transmission:** Secure sending of health data to servers or cloud platforms
- **Alert Systems:** Immediate notification to healthcare providers and emergency contacts
- **Synchronization:** Coordinating with mobile applications and external devices
- **Protocol Management:** Handling various communication standards (Bluetooth, WiFi, cellular)

#### User Interaction
- **Mobile Display:** Clear visualization of health metrics and trends
- **Alert Notifications:** User-friendly warning systems
- **Data Input:** Interface for manual health data entry
- **Settings Management:** User customization of monitoring parameters

---

## 3. Prototype High-Level Programs

To validate our workload analysis and inform processor design decisions, we have developed representative prototype programs that simulate the core computational tasks of our health monitoring system:

### Program 1 – Sensor Data Simulation (C++)
**Purpose:** Generates realistic physiological data to simulate continuous sensor input  
**Workload Represented:** Data acquisition from multiple sensors  
**Key Operations:**
- Random number generation with physiological constraints
- Multi-threaded sensor simulation
- Real-time data streaming
- Sensor calibration and noise modeling

### Program 2 – Moving Average Filter (C)
**Purpose:** Implements digital signal processing to remove noise from sensor readings  
**Workload Represented:** Signal processing and noise reduction  
**Key Operations:**
- Sliding window calculations
- Floating-point arithmetic operations
- Array manipulation and memory access patterns
- Real-time filtering with minimal latency

### Program 3 – Threshold Classifier (Java)
**Purpose:** Performs real-time classification of health states based on vital sign thresholds  
**Workload Represented:** AI/ML inference and decision making  
**Key Operations:**
- Multi-parameter threshold evaluation
- Classification algorithms
- Rule-based decision trees
- Real-time inference with low latency requirements

### Program 4 – Data Logger (C)
**Purpose:** Manages storage and transmission of health monitoring data  
**Workload Represented:** Communication and data management  
**Key Operations:**
- File I/O operations
- Data serialization and compression
- Network communication protocols
- Error handling and data integrity checks

---

## 4. Summary and Next Steps

### Key Findings

Through our domain analysis and prototype development, we have identified the critical workloads that our RISC-V-based processor must efficiently support:

1. **High-frequency data acquisition** requiring efficient I/O and real-time processing capabilities
2. **Signal processing operations** demanding optimized arithmetic units and memory access patterns
3. **Lightweight AI inference** needing specialized instructions for classification and threshold operations
4. **Communication protocols** requiring secure and energy-efficient data transmission capabilities

### Processor Design Implications

Our analysis reveals several key requirements that will inform our ISA customization in Week 6:

#### Arithmetic and Processing Requirements
- **Efficient floating-point operations** for signal processing algorithms
- **Specialized arithmetic instructions** for statistical calculations (moving averages, variance)
- **Low-latency integer operations** for real-time threshold comparisons
- **SIMD capabilities** for parallel processing of sensor data arrays

#### AI and Machine Learning Support
- **Lightweight neural network instructions** for basic classification tasks
- **Optimized matrix operations** for linear algebra computations
- **Threshold comparison instructions** with built-in branching
- **Pattern matching capabilities** for anomaly detection algorithms

#### Communication and I/O Enhancements
- **Low-power communication protocols** optimized for mobile environments
- **Secure data transmission instructions** with built-in encryption support
- **Efficient buffering mechanisms** for handling multiple data streams
- **Power management instructions** for battery optimization

#### Memory and Storage Optimizations
- **Compressed data storage formats** to maximize limited mobile storage
- **Efficient cache management** for real-time data processing
- **Low-latency memory access** for continuous sensor monitoring
- **Data integrity checking** with hardware-accelerated error correction

### Next Steps for Week 6

1. **ISA Design:** Develop custom RISC-V extensions based on identified workload requirements
2. **Instruction Set Definition:** Create specialized instructions for health monitoring operations
3. **Processor Architecture:** Design CPU components optimized for mobile AI telephony workloads
4. **Performance Analysis:** Simulate and evaluate processor performance with our prototype programs
5. **Power Optimization:** Implement energy-efficient design strategies for mobile deployment

Our comprehensive workload analysis provides a solid foundation for designing a RISC-V processor that can effectively support health monitoring applications in resource-constrained mobile environments, particularly addressing the healthcare challenges in developing regions like Africa and Lesotho.
