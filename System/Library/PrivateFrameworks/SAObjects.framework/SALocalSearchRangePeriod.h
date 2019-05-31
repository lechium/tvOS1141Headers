/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (assign,nonatomic) long long endSecondsSinceMidnight; 
@property (assign,nonatomic) long long startSecondsSinceMidnight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)endSecondsSinceMidnight;
-(void)setEndSecondsSinceMidnight:(long long)arg1 ;
-(long long)startSecondsSinceMidnight;
-(void)setStartSecondsSinceMidnight:(long long)arg1 ;
@end
