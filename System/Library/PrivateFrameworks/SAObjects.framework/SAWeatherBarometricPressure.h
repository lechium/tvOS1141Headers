/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * trend; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)barometricPressure;
+(id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)encodedClassName;
-(NSString *)trend;
-(void)setTrend:(NSString *)arg1 ;
@end

