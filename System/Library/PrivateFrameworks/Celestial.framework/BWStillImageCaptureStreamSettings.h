/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString, BWBracketSettings, NSArray;

@interface BWStillImageCaptureStreamSettings : NSObject {

	NSString* _portType;
	int _captureType;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;
	SCD_Struct_BW2 _preferredTimeMachinePTS;
	int _timeMachineFrameCount;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) int timeMachineFrameCount;                                   //@synthesize timeMachineFrameCount=_timeMachineFrameCount - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) int expectedFrameCount; 
@property (nonatomic,readonly) int expectedFrameCaptureCount; 
@property (assign,nonatomic) SCD_Struct_BW2 preferredTimeMachinePTS;                        //@synthesize preferredTimeMachinePTS=_preferredTimeMachinePTS - In the implementation block
@property (nonatomic,readonly) int expectedTimeMachineFrameCaptureCount; 
-(int)captureType;
-(int)expectedTimeMachineFrameCaptureCount;
-(int)expectedFrameCaptureCount;
-(NSString *)portType;
-(int)timeMachineFrameCount;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 timeMachineFrameCount:(int)arg3 bracketSettings:(id)arg4 validBracketedCaptureSequenceNumbers:(id)arg5 ;
-(int)expectedFrameCount;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(SCD_Struct_BW2)preferredTimeMachinePTS;
-(void)setPreferredTimeMachinePTS:(SCD_Struct_BW2)arg1 ;
-(BWBracketSettings *)bracketSettings;
-(void)dealloc;
-(id)description;
@end

