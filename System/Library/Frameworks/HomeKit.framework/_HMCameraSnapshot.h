/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraSource.h>

@class NSDate;

@interface _HMCameraSnapshot : _HMCameraSource {

	NSDate* _captureDate;

}

@property (nonatomic,copy,readonly) NSDate * captureDate;              //@synthesize captureDate=_captureDate - In the implementation block
-(void)dealloc;
-(NSDate *)captureDate;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 captureDate:(id)arg8 ;
-(void)_releaseSlotIdentifier;
@end
