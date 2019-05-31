/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber, NSArray;

@interface CEMManagementConnectionCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSString * payloadIdentityCertificateUUID; 
@property (nonatomic,readonly) NSString * payloadTopic; 
@property (nonatomic,readonly) NSString * payloadControlURL; 
@property (nonatomic,readonly) NSString * payloadStatusURL; 
@property (nonatomic,readonly) NSString * payloadCheckInURL; 
@property (nonatomic,readonly) NSNumber * payloadSignMessage; 
@property (nonatomic,readonly) NSArray * payloadControlURLPinningCertificateUUIDs; 
@property (nonatomic,readonly) NSArray * payloadStatusURLPinningCertificateUUIDs; 
@property (nonatomic,readonly) NSArray * payloadCheckInURLPinningCertificateUUIDs; 
@property (nonatomic,readonly) NSNumber * payloadPinningRevocationCheckRequired; 
@property (nonatomic,readonly) NSArray * payloadCertificates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)allowedStatusKeys;
+(id)registeredClass;
+(id)registeredType;
+(id)allowedReasons;
-(BOOL)mustBeSupervised;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(int)executionLevel;
-(NSString *)payloadIdentityCertificateUUID;
-(NSString *)payloadTopic;
-(NSString *)payloadControlURL;
-(NSString *)payloadStatusURL;
-(NSString *)payloadCheckInURL;
-(NSNumber *)payloadSignMessage;
-(NSArray *)payloadControlURLPinningCertificateUUIDs;
-(NSArray *)payloadStatusURLPinningCertificateUUIDs;
-(NSArray *)payloadCheckInURLPinningCertificateUUIDs;
-(NSNumber *)payloadPinningRevocationCheckRequired;
-(NSArray *)payloadCertificates;
@end

