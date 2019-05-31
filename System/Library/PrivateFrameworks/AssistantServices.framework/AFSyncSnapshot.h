/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncSnapshot : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;

}

@property (nonatomic,copy) NSString * anchor;                //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;              //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)count;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
@end

