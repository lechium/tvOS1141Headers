#import <CoreRecognition/CRDefaultCaptureSessionManager.h>
#import <CoreRecognition/CRInsightsContext.h>
#import <CoreRecognition/CRInsightsCodeSection.h>
#import <CoreRecognition/CRInsights.h>
#import <CoreRecognition/ActivationMapTools.h>
#import <CoreRecognition/CRPollingTimer.h>
#import <CoreRecognition/CRAlignmentLayer.h>
#import <CoreRecognition/CRCameraReaderOutputInternal.h>
#import <CoreRecognition/CRCameraReaderOutput.h>
#import <CoreRecognition/CRCameraReaderOutputExpirationDate.h>
#import <CoreRecognition/CRCameraReaderOutputIDCard.h>
#import <CoreRecognition/GeometricCutTools.h>
#import <CoreRecognition/CRCameraReader.h>
#import <CoreRecognition/CRImage.h>
#import <CoreRecognition/CRMLModel.h>
#import <CoreRecognition/CRMLFlatModel.h>
#import <CoreRecognition/CRMLEmbossedNumberModel.h>
#import <CoreRecognition/CRMLEmbossedCardholderModel.h>
#import <CoreRecognition/CRMLEmbossedExpirationModel.h>
#import <CoreRecognition/CRCodeRedeemerController.h>
#import <CoreRecognition/CRColor.h>
#import <CoreRecognition/DiagnosticHUDLayer.h>
#import <CoreRecognition/CRTextFeature.h>
#import <CoreRecognition/CRTextFeatureMultiRegion.h>
#import <CoreRecognition/CRBoxLayer.h>
