/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTCameraManagerNotificationCameraPowerChanged : RTNotification {

	long long _powerState;
	long long _cameraType;

}

@property (nonatomic,readonly) long long powerState;              //@synthesize powerState=_powerState - In the implementation block
@property (nonatomic,readonly) long long cameraType;              //@synthesize cameraType=_cameraType - In the implementation block
-(long long)powerState;
-(long long)cameraType;
-(id)initWithCameraType:(long long)arg1 powerState:(long long)arg2 ;
@end

