/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSArray * payloadDock; 
@property (nonatomic,readonly) NSArray * payloadPages; 
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
+(id)IconItem_allowedPayloadKeys;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(BOOL)validPayloadIconItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializePayloadIconItem:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSArray *)payloadDock;
-(NSArray *)payloadPages;
@end

