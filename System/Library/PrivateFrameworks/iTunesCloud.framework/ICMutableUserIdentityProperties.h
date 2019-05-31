/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICUserIdentityProperties.h>

@class NSString, ICDelegateToken, NSNumber;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSString * carrierBundleDeviceIdentifier; 
@property (assign,getter=isDelegated,nonatomic) BOOL delegated; 
@property (nonatomic,copy) ICDelegateToken * delegateToken; 
@property (nonatomic,copy) NSNumber * DSID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (assign,getter=isManagedAppleID,nonatomic) BOOL managedAppleID; 
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed; 
@property (nonatomic,copy) NSString * storefrontIdentifier; 
@property (nonatomic,copy) NSString * username; 
-(void)setDelegated:(BOOL)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(void)setICloudPersonID:(id)arg1 ;
-(void)setAlternateDSID:(NSString *)arg1 ;
-(void)replaceValuesWithValuesFromProperties:(id)arg1 ;
-(void)setCarrierBundleDeviceIdentifier:(NSString *)arg1 ;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setManagedAppleID:(BOOL)arg1 ;
@end
