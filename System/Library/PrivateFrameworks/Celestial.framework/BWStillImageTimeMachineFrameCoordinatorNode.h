/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol BWStillImageProcessingStatusDelegate;
@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings;

@interface BWStillImageTimeMachineFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounts;
	id<BWStillImageProcessingStatusDelegate> _stillImageProcessingDelegate;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;

}
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)_resetStillImageCaptureState;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_isCaptureComplete;
-(id)initWithPortTypes:(id)arg1 ;
-(id)inputForPortType:(id)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(void)setStillImageProcessingDelegate:(id)arg1 ;
-(id)stillImageProcessingDelegate;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)dealloc;
-(id)nodeType;
@end

