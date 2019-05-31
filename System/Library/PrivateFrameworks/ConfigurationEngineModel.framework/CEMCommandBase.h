/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber, NSDictionary;

@interface CEMCommandBase : CEMPayloadBase {

	NSString* _commandType;
	NSString* _commandIdentifier;
	NSString* _commandDescription;
	NSNumber* _commandRequiresNetworkTether;
	NSDictionary* _commandPayload;

}

@property (nonatomic,readonly) NSString * commandType;                               //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) NSString * commandIdentifier;                         //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * commandDescription;                        //@synthesize commandDescription=_commandDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * commandRequiresNetworkTether;              //@synthesize commandRequiresNetworkTether=_commandRequiresNetworkTether - In the implementation block
@property (nonatomic,readonly) NSDictionary * commandPayload;                        //@synthesize commandPayload=_commandPayload - In the implementation block
+(id)commandForPayload:(id)arg1 error:(id*)arg2 ;
-(NSString *)commandType;
-(NSString *)commandIdentifier;
-(id)serialize;
-(BOOL)mustBeSupervised;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)commandPayload;
-(int)executionLevel;
-(id)serializePayload:(id)arg1 ;
-(BOOL)loadCommandFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)commandDescription;
-(NSNumber *)commandRequiresNetworkTether;
@end
