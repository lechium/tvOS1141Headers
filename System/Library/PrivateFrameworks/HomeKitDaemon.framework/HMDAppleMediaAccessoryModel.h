/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaAccessoryModel.h>

@class NSString, HMDDevice, HMFPairingIdentity, NSData, HMFSoftwareVersion;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) HMFPairingIdentity * pairingIdentity; 
@property (nonatomic,retain) NSData * loggedInAccount; 
@property (nonatomic,retain) NSData * symptoms; 
@property (nonatomic,retain) HMFSoftwareVersion * softwareVersion; 
+(id)properties;
@end

