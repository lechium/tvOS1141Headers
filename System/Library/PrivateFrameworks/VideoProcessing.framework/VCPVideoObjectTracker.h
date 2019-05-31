/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCtrTracker;

@interface VCPVideoObjectTracker : NSObject {

	VCPCtrTracker* _correlationTracker;
	float _confidence;
	int _lostCount;
	SCD_Struct_VC6 _start;
	CGRect _objectBoundsInitial;
	CGRect _objectBounds;

}

@property (nonatomic,readonly) CGRect objectBoundsInitial;              //@synthesize objectBoundsInitial=_objectBoundsInitial - In the implementation block
@property (nonatomic,readonly) CGRect objectBounds;                     //@synthesize objectBounds=_objectBounds - In the implementation block
@property (nonatomic,readonly) float confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VC6 start;                    //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) int lostCount;                           //@synthesize lostCount=_lostCount - In the implementation block
-(SCD_Struct_VC6)start;
-(float)confidence;
-(int)trackObjectInFrame:(CVBufferRef)arg1 ;
-(CGRect)objectBounds;
-(int)lostCount;
-(CGRect)objectBoundsInitial;
-(id)initWithObjectBounds:(CGRect)arg1 inFrame:(CVBufferRef)arg2 timestamp:(SCD_Struct_VC6)arg3 ;
@end
