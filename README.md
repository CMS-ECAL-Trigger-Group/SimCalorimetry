# Odd Weights Filter Development

The purpose of this branch is to add an odd weights filter to the CMSSW emulator.

# Adding a CMSSW Directory

Added cmssw/SimCalorimetry/EcalTrigPrimProducers with the following commands:

	cmsrel CMSSW_11_0_2
	cd CMSSW_11_0_2/src
	cmsenv 
	git cms-init 
	git clone git@github.com:CMS-ECAL-Trigger-Group/ECALDoubleWeights.git -b CMSSW_11_0_2-OddWeightsDev
	git cms-addpkg SimCalorimetry/EcalTrigPrimProducers
	mv SimCalorimetry/ SimCalorimetry-cmssw
        git clone -b Odd-Weights-Filter-Dev git@github.com:CMS-ECAL-Trigger-Group/SimCalorimetry.git
        mv SimCalorimetry-cmssw/EcalTrigPrimProducers/ SimCalorimetry/ 
