/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {

	AVWeakReference* weakReference;
	BOOL alwaysCopiesSampleData;
	BOOL supportsRandomAccess;
	NSArray* currentTimeRanges;
	AVWeakReference* weakReferenceToAssetReader;
	OpaqueFigAssetReaderRef figAssetReader;
	int extractionID;
	AVRunLoopCondition* sampleBufferAvailabilityCondition;
	BOOL currentConfigurationIsFinal;
	BOOL extractionCompleteForCurrentConfiguration;
	int finished;

}
@end

