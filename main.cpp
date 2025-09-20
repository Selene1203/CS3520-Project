#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// Program 1: Sensor Data Simulation
vector<int> generateSensorData(int count) {
    vector<int> data;
    srand(time(0));
    for (int i = 0; i < count; i++) {
        int heartRate = 60 + rand() % 41; // values between 60–100 bpm
        data.push_back(heartRate);
    }
    return data;
}

// Program 2: Moving Average Filter
vector<double> movingAverage(const vector<int>& data, int windowSize) {
    vector<double> filtered;
    int n = data.size();
    for (int i = 0; i <= n - windowSize; i++) {
        double sum = 0;
        for (int j = 0; j < windowSize; j++) {
            sum += data[i + j];
        }
        filtered.push_back(sum / windowSize);
    }
    return filtered;
}

// Program 3: Threshold Classifier
vector<string> classify(const vector<double>& data, int threshold) {
    vector<string> labels;
    for (double val : data) {
        if (val > threshold) {
            labels.push_back("ALERT");
        } else {
            labels.push_back("Normal");
        }
    }
    return labels;
}

// Program 4: Data Logger
void logData(const vector<double>& data, const vector<string>& labels, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    file << "Heart Rate Data Log\n";
    for (size_t i = 0; i < data.size(); i++) {
        file << "Reading " << i + 1 << ": " << data[i] << " bpm -> " << labels[i] << "\n";
    }

    file.close();
    cout << "Data successfully logged to " << filename << endl;
}

// Main Program
int main() {
    // Step 1: Simulate sensor data
    vector<int> rawData = generateSensorData(15);

    cout << "Raw Sensor Data: ";
    for (int val : rawData) cout << val << " ";
    cout << "\n";

    // Step 2: Apply moving average filter
    vector<double> smoothed = movingAverage(rawData, 3);

    cout << "Filtered Data: ";
    for (double val : smoothed) cout << val << " ";
    cout << "\n";

    // Step 3: Classify based on threshold
    int threshold = 90;
    vector<string> labels = classify(smoothed, threshold);

    cout << "Classification Results:\n";
    for (size_t i = 0; i < smoothed.size(); i++) {
        cout << smoothed[i] << " -> " << labels[i] << "\n";
    }

    // Step 4: Log data to file
    logData(smoothed, labels, "final_data_log.txt");

    return 0;
}
