/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSDictionary;

@interface APSMessage : NSObject <NSCoding> {

	NSMutableDictionary* _plist;
	NSMutableDictionary* _properties;
	void* _xpcMessage;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,retain) NSString * correlationIdentifier; 
-(void)setTopic:(NSString *)arg1 ;
-(void)setGuid:(id)arg1 ;
-(id)guid;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)identifier;
-(NSDictionary *)userInfo;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setInstanceObject:(id)arg1 forKey:(id)arg2 ;
-(id)instanceObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2 ;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(id)initWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)topic;
-(NSString *)correlationIdentifier;
@end

