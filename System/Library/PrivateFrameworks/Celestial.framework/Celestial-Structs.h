/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableData, BWNodeOutput, NSObject<OS_dispatch_queue>;

typedef struct OpaqueFigFormatWriter* OpaqueFigFormatWriterRef;

typedef struct OpaqueCMByteStream* OpaqueCMByteStreamRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_BW2;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_BW9;

typedef struct {
	SCD_Struct_BW2 start;
	SCD_Struct_BW2 duration;
} SCD_Struct_BW10;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_BW13;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueFigCaptureStream* OpaqueFigCaptureStreamRef;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueFigCaptureSession* OpaqueFigCaptureSessionRef;

typedef struct {
	[3 columns];
} SCD_Struct_Fi18;

typedef struct {
	float min;
	float max;
} SCD_Struct_Fi19;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct OpaqueFigCaptureDevice* OpaqueFigCaptureDeviceRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct OpaqueFigSampleBufferProcessor* OpaqueFigSampleBufferProcessorRef;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_BW25;

typedef struct {
	double field1;
	float field2;
	float field3;
	double field4;
	float field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned char field10;
	unsigned char field11;
	unsigned field12;
	int field13;
	int field14;
	int field15;
	unsigned field16;
	float field17;
	unsigned char field18;
	double field19;
	int field20;
	int field21;
	int field22;
	float field23;
	float field24;
	int field25;
	int field26;
	unsigned char field27;
	int field28;
	int field29;
	float field30;
	float field31;
	int field32;
	int field33;
	int field34;
	int field35;
	long long field36;
} SCD_Struct_BW26;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct remoteQueueSenderOpaque* remoteQueueSenderOpaqueRef;

typedef struct OpaqueFigPlaybackItem* OpaqueFigPlaybackItemRef;

typedef struct OpaqueFigVisualContext* OpaqueFigVisualContextRef;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_BW34;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct TimestampedAudioBufferList {
	__CFAllocator allocator;
	long long auRenderCount;
	unsigned dataBytesCapacity;
	unsigned numFrames;
	SCD_Struct_BW2 pts;
	AudioBufferList abl;
	unsigned numPrependedSilenceFrames;
} TimestampedAudioBufferList;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	[4 columns];
} SCD_Struct_BW39;

typedef struct {
	float forwardOrders[8];
	float inverseOrders[8];
} SCD_Struct_BW40;

typedef struct FigPhotoScaleAndRotateSession* FigPhotoScaleAndRotateSessionRef;

typedef struct work_interval* work_intervalRef;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	unsigned field4;
	BOOL field5;
} SCD_Struct_BW43;

typedef struct {
	BOOL depthFilterEnabled;
	__CVBuffer mostRecentPostprocessedDisparityBuffer;
	float mostRecentFocusDisparity;
	float mostRecentDeltaDisparity;
	float mostRecentPortraitStability;
	int numberOfFramesSinceLastStableFocus;
	BOOL mostRecentStructuredLightOcclusion;
	NSArray* mostRecentDetectedFaces;
	NSArray* mostRecentFilteredFaces;
} SCD_Struct_BW44;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BW45;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_BW46;

typedef struct {
	BOOL field1;
	double field2;
	SCD_Struct_BW46 field3;
} SCD_Struct_BW47;

typedef struct FigPAMFrameScoreWeightsStruct {
	float eyeOpen;
	float smile;
	float size;
	float focusScore;
	float time;
	float quality;
} FigPAMFrameScoreWeightsStruct;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct OpaqueFigCaptureSource* OpaqueFigCaptureSourceRef;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct opaqueCMBufferQueueTriggerToken* opaqueCMBufferQueueTriggerTokenRef;

typedef struct {
	SCD_Struct_BW2 field1;
	SCD_Struct_BW2 field2;
	SCD_Struct_BW2 field3;
	BOOL field4;
	BOOL field5;
} SCD_Struct_BW55;

typedef struct EAFrameBufferPacket {
	NSMutableData* frameBufferData;
	unsigned frameTimeStamp;
	unsigned frameBytesRead;
	unsigned char frameTypeIndex;
} EAFrameBufferPacket;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct NoiseReductionCtx_s* NoiseReductionCtx_sRef;

typedef struct {
	float field1;
	int field2;
	BOOL field3;
} SCD_Struct_BW60;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_Fi61;

typedef struct {
	int attemptCount;
	double threshold;
} SCD_Struct_Fi62;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigPreviewSynchronizer* OpaqueFigPreviewSynchronizerRef;

typedef struct OpaqueFigRecorder* OpaqueFigRecorderRef;

typedef struct BWSmartCameraScene {
	BOOL enabled;
	BOOL confident;
	float confidenceFilterRatio;
	float filteredConfidence;
	float confidenceThreshold;
	float confidenceHysteresisValueLag;
	char confidenceHysteresisTemporalLagBeforeConfident;
	char confidenceHysteresisTemporalLagBeforeNotConfident;
	char currentTemporalHysteresis;
	char* name;
} BWSmartCameraScene;

typedef struct {
	int field1;
	int field2;
	int field3;
} SCD_Struct_Fi67;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_Fi68;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_Fi69;

typedef struct OpaqueFigCaptureISPProcessingSession* OpaqueFigCaptureISPProcessingSessionRef;

typedef struct {
	int major;
	int minor;
	int minor2;
} SCD_Struct_Fi71;

typedef struct {
	float sceneConfidences[13];
	SCD_Struct_BW2 sceneConfidencesTimestamp;
} SCD_Struct_Fi72;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_Fi73;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_Fi74;

typedef struct {
	int hTaps;
	int vTaps;
	int hPhases;
	int vPhases;
	int prePointBits;
	int postPointBits;
} SCD_Struct_Fi75;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct BWStreamOutputStorage {
	int type;
	unsigned flags;
	BOOL ready;
	BOOL enabled;
	BWNodeOutput* nodeOutput;
	opaqueCMSimpleQueue simpleQueue;
	NSObject<OS_dispatch_queue>* bufferServicingQueue;
	/*function pointer*/void* bufferServicingQueueCallback;
	opaqueCMFormatDescription cachedFormatDescription;
	int frameCount;
} BWStreamOutputStorage;

typedef struct {
	SCD_Struct_Fi19 lastWideSpherePos;
	SCD_Struct_Fi19 lastTeleSpherePos;
	SCD_Struct_Fi19 currentTeleSpherePos;
	SCD_Struct_Fi19 previousTeleSpherePos;
	BOOL supportAverageSpherePositionKey;
} SCD_Struct_BW79;

typedef struct {
	double centerx;
	double centery;
	BOOL lensCoefficientsValid;
	float lensCoefficients[5];
	float scalingFactorReference;
	float gravityFactor;
	float pixelsPerMicron;
	BOOL isFrontCamera;
} SCD_Struct_BW80;

typedef struct OpaqueFigSemaphore* OpaqueFigSemaphoreRef;

typedef struct {
	double timestamp;
	float x;
	float y;
	float z;
} SCD_Struct_Fi82;

typedef struct {
	SCD_Struct_Fi73 field1;
	SCD_Struct_Fi73 field2;
	SCD_Struct_Fi73 field3;
	SCD_Struct_Fi74 field4;
	int field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
	float field9;
} SCD_Struct_Fi83;

typedef struct shmemPoolOpaque* shmemPoolOpaqueRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct OpaqueFigFlatDictionaryKeySpec* OpaqueFigFlatDictionaryKeySpecRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct {
	BOOL hasNose;
	CGPoint nose;
	BOOL hasMouth;
	CGPoint mouth;
	BOOL hasLeftEye;
	CGPoint leftEye;
	BOOL hasRightEye;
	CGPoint rightEye;
	CGRect rectangle;
	BOOL hasExpression;
	FigPAMFrameScoreWeightsStruct expression;
	BOOL hasIsBlinking;
	BOOL isBlinking;
	BOOL hasBlinkScore;
	float blinkScore;
	BOOL hasFaceQuality;
	float faceQuality;
	float orientation;
	BOOL hasFaceAngle;
	SCD_Struct_Fi73 faceAngle;
} SCD_Struct_Fi89;

typedef struct {
	BOOL field1;
	CGPoint field2;
	BOOL field3;
	CGPoint field4;
	BOOL field5;
	CGPoint field6;
	BOOL field7;
	CGPoint field8;
	CGRect field9;
	BOOL field10;
	FigPAMFrameScoreWeightsStruct field11;
	BOOL field12;
	BOOL field13;
	BOOL field14;
	float field15;
	BOOL field16;
	float field17;
	float field18;
	BOOL field19;
	SCD_Struct_Fi73 field20;
} SCD_Struct_Fi90;

typedef struct {
	double rowSums;
	double colSums;
	/*function pointer*/void* motionMetadata;
	unsigned curIdx;
	unsigned count;
	unsigned size;
} SCD_Struct_Fi91;

typedef struct {
	BOOL doingBiasEstimation;
	double timestamp;
	SCD_Struct_Fi74 quaternion;
} SCD_Struct_Fi92;

typedef struct {
	unsigned numSamples;
	SCD_Struct_Fi92 samples[256];
} SCD_Struct_Fi93;

typedef struct {
	int fusedRingIndex;
	double fusedRingTime[256];
	SCD_Struct_Fi74 fusedRingQuaternion[256];
	unsigned char ignoreMotionDataForPowerTest;
	unsigned char relaxMotionDataLoggingThreshold;
	unsigned char didHaveMotionData;
	unsigned char prevDidHaveMotionData;
	unsigned char usingMotionDataFromISP;
	SCD_Struct_Fi93 rawQuaternions;
} SCD_Struct_Fi94;

typedef struct {
	int fusedRingIndex[2];
	double fusedRingTime[2][256];
	SCD_Struct_Fi19 fusedRingHallPosition[2][256];
	double hallTimeShift;
	unsigned char isFirstSample[2];
	unsigned char bypassHighPassFilter;
	float lowpassParameter;
	SCD_Struct_Fi19 lowpassHallPosition[2];
} SCD_Struct_Fi95;

typedef struct {
	int width;
	int height;
	int overscanWidth;
	int overscanHeight;
	int method;
	int platform;
	int baseTransformCount;
	int derivedTransformCount;
	int derivedTransformStep;
	float limitFactor;
	unsigned char limitTransform;
	unsigned char prevTransformLimited;
	unsigned char forceIdentity;
	unsigned short lineBufferCount;
	float digitalZoomFactorOverride;
	int ISPStripOffsetX;
	int ISPStripOffsetY;
	BOOL isUsing1kLineBuffers;
	/*function pointer*/void* visStripParams;
	unsigned long long visStripParamsSize;
} SCD_Struct_Fi96;

typedef struct {
	float crossCorrelationMaximum[2];
	int maxCorrelationShift[2];
	int frameRingBufferCount;
	int frameRingBufferDistance;
	BOOL useCameraMotionMetadata;
	BOOL isMotionDetected;
	float gyroTranslation[2];
	float oisTranslation[2];
	CGRect roi;
	BOOL valid;
} SCD_Struct_Fi97;

typedef struct {
	float field1[2];
	int field2[2];
	int field3;
	int field4;
	BOOL field5;
	BOOL field6;
	float field7[2];
	float field8[2];
	CGRect field9;
	BOOL field10;
} SCD_Struct_Fi98;

typedef struct {
	int field1;
	float field2;
	float field3;
	unsigned char field4;
	float field5;
	float field6;
	double field7;
	double field8;
	double field9;
	double field10;
	int field11;
} SCD_Struct_Fi99;

typedef struct {
	BOOL field1;
	SCD_Struct_Fi19 field2;
	SCD_Struct_Fi74 field3;
	SCD_Struct_Fi99 field4;
} SCD_Struct_Fi100;

typedef struct {
	float simulatedFocalRatio;
} SCD_Struct_BW101;

typedef struct BWDeferredMetadataCacheEntry {
	SCD_Struct_BW2 pts;
	__CFDictionary metadataDict;
	short useCount;
	short age;
} BWDeferredMetadataCacheEntry;

typedef struct {
	double integrationTime;
	float normalizedSNR;
	float baseISO;
	double exposureBias;
	float gain;
	unsigned conversionGain;
	unsigned readNoise_1x;
	unsigned readNoise_8x;
	unsigned aeAvg;
	unsigned char aeLimitsReached;
	unsigned char aeStable;
	unsigned luxLevel;
	int logicalFocusLensPosition;
	int afStatus;
	int focusingMethod;
	unsigned motionDataStatus;
	float synchronizedStreamsTelephotoGain;
	unsigned char synchronizedStreamsTelephotoAEStable;
	double synchronizedStreamsTelephotoIntegrationTime;
	int synchronizedStreamsTelephotoAFStatus;
	int synchronizedStreamsTelephotoFocusingMethod;
	int synchronizedStreamsTelephotoAFStationaryCount;
	float synchronizedStreamsTelephotoFocusDistance;
	float synchronizedStreamsTelephotoLensMakersFocusDistance;
	int synchronizedStreamsTelephotoGravityAdjustedFocusPosition;
	int synchronizedStreamsTelephotoLuxLevel;
	unsigned char synchronizedStreamsWideAEStable;
	int synchronizedStreamsWideFocusPosition;
	int synchronizedStreamsWideLogicalFocusLensPosition;
	float synchronizedStreamsWideFocusDistance;
	float synchronizedStreamsWideLensMakersFocusDistance;
	int synchronizedStreamsWideAFStatus;
	int synchronizedStreamsWideAFStationaryCount;
	int synchronizedStreamsWideLuxLevel;
	int synchronizedStreamsWideGravityAdjustedFocusPosition;
	long long frameCount;
} SCD_Struct_BW103;

typedef struct BWRenderListRendererList {
	BWRenderListRendererNode slh_first;
} BWRenderListRendererList;

typedef struct BWRenderListParameterList {
	BWRenderListParameterNode slh_first;
} BWRenderListParameterList;

typedef struct FigPhotoCompressionSession* FigPhotoCompressionSessionRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct OpaqueFigEndpoint* OpaqueFigEndpointRef;

typedef struct OpaqueFigEndpointStream* OpaqueFigEndpointStreamRef;

typedef struct OpaqueFigVirtualDisplaySource* OpaqueFigVirtualDisplaySourceRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

