/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject {

	BOOL _usedMaximumSuggestion;
	NSDecimalNumber* _value;
	NSString* _displayValue;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * displayValue;                       //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) BOOL usedMaximumSuggestion;                  //@synthesize usedMaximumSuggestion=_usedMaximumSuggestion - In the implementation block
+(id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDecimalNumber *)value;
-(id)initWithValue:(id)arg1 currencyCode:(id)arg2 ;
-(void)setDisplayValue:(NSString *)arg1 ;
-(void)setUsedMaximumSuggestion:(BOOL)arg1 ;
-(NSString *)displayValue;
-(BOOL)usedMaximumSuggestion;
@end
