/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey {

	Class _payloadClass;
	NSString* _nameSuffix;

}

@property (assign,nonatomic,__weak) Class payloadClass;              //@synthesize payloadClass=_payloadClass - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)payloadClass:(Class)arg1 name:(id)arg2 ;
-(void)setPayloadClass:(Class)arg1 ;
-(Class)payloadClass;
-(id)name;
-(unsigned long long)value;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
@end

