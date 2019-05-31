/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSDictionary, NSString;

@interface CEMBookBookStoreDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSDictionary * payloadDescriptor; 
@property (nonatomic,readonly) NSString * payloadITunesStoreID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)allowedStatusKeys;
+(id)registeredClass;
+(id)registeredType;
+(id)allowedReasons;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSDictionary *)payloadDescriptor;
-(NSString *)payloadITunesStoreID;
@end

