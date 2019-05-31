/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAdminEnforcementMessageFilter, HMDHome, NSString;

@interface HMDRemoteAdminEnforcementMessageFilter : HMDMessageFilter <HMFLogging> {

	HMDAdminEnforcementMessageFilter* _adminEnforcementFilter;
	HMDHome* _home;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) HMDAdminEnforcementMessageFilter * adminEnforcementFilter;              //@synthesize adminEnforcementFilter=_adminEnforcementFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)shouldNotCheckMessage:(id)arg1 ;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)initWithName:(id)arg1 home:(id)arg2 ;
-(void)setAdminEnforcementFilter:(HMDAdminEnforcementMessageFilter *)arg1 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)_isTargetingHome:(id)arg1 ;
-(HMDAdminEnforcementMessageFilter *)adminEnforcementFilter;
@end

