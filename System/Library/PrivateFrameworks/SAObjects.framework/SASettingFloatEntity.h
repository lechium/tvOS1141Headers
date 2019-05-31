/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) float value; 
+(id)floatEntity;
+(id)floatEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)floatEntityWithValue:(float)arg1 ;
-(id)groupIdentifier;
-(void)setValue:(float)arg1 ;
-(float)value;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(NSNumber *)previousValue;
-(id)encodedClassName;
-(id)initWithValue:(float)arg1 ;
@end
