/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKNumericSuggestionsAlgorithm.h>

@class NSDecimalNumberHandler, NSArray, PKNumericSuggestionLastInput, NSDecimalNumber, NSString;

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm {

	NSDecimalNumberHandler* _roundingBehavior;
	NSArray* _valuesToDefaults;
	NSArray* _defaultSuggestions;
	unsigned long long _powerOfTenFactor;
	PKNumericSuggestionLastInput* _lastInput;
	BOOL _useBuiltInDefaults;
	BOOL _hasValidDefaultSuggestions;
	NSDecimalNumber* _cardBalance;
	NSDecimalNumber* _minBalance;
	NSDecimalNumber* _maxBalance;
	NSDecimalNumber* _minLoadAmount;
	NSDecimalNumber* _maxLoadAmount;
	NSArray* _defaultValues;
	long long _decimalPrecision;
	NSString* _currencyCode;

}

@property (nonatomic,copy) NSDecimalNumber * cardBalance;                      //@synthesize cardBalance=_cardBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minBalance;                       //@synthesize minBalance=_minBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxBalance;                       //@synthesize maxBalance=_maxBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minLoadAmount;                    //@synthesize minLoadAmount=_minLoadAmount - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maxLoadAmount;                    //@synthesize maxLoadAmount=_maxLoadAmount - In the implementation block
@property (nonatomic,copy) NSArray * defaultValues;                            //@synthesize defaultValues=_defaultValues - In the implementation block
@property (assign,nonatomic) unsigned long long powerOfTenFactor;              //@synthesize powerOfTenFactor=_powerOfTenFactor - In the implementation block
@property (assign,nonatomic) long long decimalPrecision;                       //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                            //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) BOOL hasValidDefaultSuggestions;                //@synthesize hasValidDefaultSuggestions=_hasValidDefaultSuggestions - In the implementation block
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)init;
-(void)_generateCalculatedSuggestions;
-(id)initWithLastInput:(id)arg1 ;
-(id)_maxAmountSuggestion;
-(BOOL)_useMaximumAmountSuggestionWithAmount:(id)arg1 ;
-(id)_possibleValueForAmount:(id)arg1 ;
-(BOOL)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2 ;
-(id)_useMaxAmountSuggestion;
-(id)_generateDefaultSuggestions;
-(id)_generateValuesToDefaults;
-(BOOL)_amountIsValid:(id)arg1 ;
-(id)suggestionsWithAmount:(id)arg1 ;
-(void)setDefaultValues:(NSArray *)arg1 ;
-(void)setPowerOfTenFactor:(unsigned long long)arg1 ;
-(void)setMinBalance:(NSDecimalNumber *)arg1 ;
-(void)setMaxBalance:(NSDecimalNumber *)arg1 ;
-(void)setMinLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setMaxLoadAmount:(NSDecimalNumber *)arg1 ;
-(void)setDecimalPrecision:(long long)arg1 ;
-(void)setCardBalance:(NSDecimalNumber *)arg1 ;
-(void)setUseBuiltInDefaults:(BOOL)arg1 ;
-(NSDecimalNumber *)cardBalance;
-(NSDecimalNumber *)minBalance;
-(NSDecimalNumber *)maxBalance;
-(NSDecimalNumber *)minLoadAmount;
-(NSDecimalNumber *)maxLoadAmount;
-(unsigned long long)powerOfTenFactor;
-(long long)decimalPrecision;
-(BOOL)hasValidDefaultSuggestions;
-(NSArray *)defaultValues;
@end

