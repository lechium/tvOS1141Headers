/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSString * payloadCertServer; 
@property (nonatomic,readonly) NSString * payloadCertTemplate; 
@property (nonatomic,readonly) NSString * payloadDescription; 
@property (nonatomic,readonly) NSNumber * payloadCertificateRenewalTimeInterval; 
@property (nonatomic,readonly) NSString * payloadCertificateAuthority; 
@property (nonatomic,readonly) NSString * payloadCertificateAcquisitionMechanism; 
@property (nonatomic,readonly) NSNumber * payloadAllowAllAppsAccess; 
@property (nonatomic,readonly) NSNumber * payloadPromptForCredentials; 
@property (nonatomic,readonly) NSNumber * payloadKeyIsExtractable; 
@property (nonatomic,readonly) NSNumber * payloadKeysize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)allowedStatusKeys;
+(id)registeredClass;
+(id)registeredType;
+(id)restrictionPayloadKeys;
+(id)allowedReasons;
-(NSString *)payloadDescription;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSString *)payloadCertServer;
-(NSString *)payloadCertTemplate;
-(NSNumber *)payloadCertificateRenewalTimeInterval;
-(NSString *)payloadCertificateAuthority;
-(NSString *)payloadCertificateAcquisitionMechanism;
-(NSNumber *)payloadAllowAllAppsAccess;
-(NSNumber *)payloadPromptForCredentials;
-(NSNumber *)payloadKeyIsExtractable;
-(NSNumber *)payloadKeysize;
@end

