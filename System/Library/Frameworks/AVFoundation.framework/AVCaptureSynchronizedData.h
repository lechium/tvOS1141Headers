/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {

	AVCaptureSynchronizedDataInternal* _synchronizedDataInternal;

}

@property (readonly) SCD_Struct_AV2 timestamp; 
-(SCD_Struct_AV2)adjustedTimestamp;
-(id)_initWithTimestamp:(SCD_Struct_AV2)arg1 ;
-(void)setAdjustedTimestamp:(SCD_Struct_AV2)arg1 ;
-(BOOL)hasCorrespondingDepthData;
-(void)dealloc;
-(SCD_Struct_AV2)timestamp;
@end

