#ifndef ECAL_FENIX_ODD_AMPLITUDE_FILTER_H
#define ECAL_FENIX_ODD_AMPLITUDE_FILTER_H

#include <cstdint>
#include <vector>

class EcalTPGWeightIdMap;
class EcalTPGWeightGroup;

/**
 \ class EcalFenixOddAmplitudeFilter
The purpose of this class is to implement the second (odd) ECAL FENIX amplitude filter 
 \brief calculates .... for Fenix strip, barrel
 *  input: 18 bits
 *  output: 18 bits
 *
 */
class EcalFenixOddAmplitudeFilter {
private:
  int peakFlag_[5];
  int inputsAlreadyIn_;
  uint32_t stripid_; // by RK 
  int buffer_[5];
  int fgvbBuffer_[5];
  int weights_[5];
  int shift_;
  bool debug_; 
  int setInput(int input, int fgvb);
  void process();

  int processedOutput_;
  int processedFgvbOutput_;

public:
  EcalFenixOddAmplitudeFilter();
  EcalFenixOddAmplitudeFilter(bool debug);
  virtual ~EcalFenixOddAmplitudeFilter();
  virtual void process(std::vector<int> &addout,
                       std::vector<int> &output,
                       std::vector<int> &fgvbIn,
                       std::vector<int> &fgvbOut);
  void setParameters(uint32_t raw,
                     const EcalTPGWeightIdMap *ecaltpgWeightMap,
                     const EcalTPGWeightGroup *ecaltpgWeightGroup);
};

#endif
