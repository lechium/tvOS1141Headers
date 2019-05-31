/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface AKToken : NSObject {

	NSDate* _expirationDate;
	NSString* _stringValue;
	NSString* _name;

}

@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)tokenWithValue:(id)arg1 lifetime:(id)arg2 ;
+(id)tokenWithBase64String:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
@end
