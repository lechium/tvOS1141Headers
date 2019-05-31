/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject;

@interface HMDIdentifierSaltStore : NSObject {

	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSData * identifierSalt;                                   //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;                          //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
@end

