/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>

@class NSNumber;

@interface HMDAccessorySettingUpdateReceiver : HMDAccessorySettingUpdateBase {

	NSNumber* _configurationVersion;

}

@property (nonatomic,readonly) NSNumber * configurationVersion;              //@synthesize configurationVersion=_configurationVersion - In the implementation block
+(id)logCategory;
-(id)description;
-(void)update;
-(NSNumber *)configurationVersion;
-(id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 configurationVersion:(id)arg6 outError:(id*)arg7 ;
@end
