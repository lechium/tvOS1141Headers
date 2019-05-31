/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateDelegate.h>

@class HMDAccessorySettingUpdateSecondarySender, NSString;

@interface HMDAccessorySettingUpdateInitiator : HMDAccessorySettingUpdateBase <HMDAccessorySettingUpdateDelegate> {

	HMDAccessorySettingUpdateSecondarySender* _secondarySender;

}

@property (nonatomic,retain) HMDAccessorySettingUpdateSecondarySender * secondarySender;              //@synthesize secondarySender=_secondarySender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(void)setSecondarySender:(HMDAccessorySettingUpdateSecondarySender *)arg1 ;
-(HMDAccessorySettingUpdateSecondarySender *)secondarySender;
-(void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)createSecondarySender:(unsigned long long)arg1 ;
@end

