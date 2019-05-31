/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long _calendarDirection; 
+(id)_preferredTemperatureUnit;
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(void)_setPreferredMeasurementSystem:(id)arg1 ;
+(id)_preferredMeasurementSystem;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)systemLanguages;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)autoupdatingCurrentLocale;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
+(id)ISOCountryCodes;
+(id)ISOLanguageCodes;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)preferredLanguages;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)availableLocaleIdentifiers;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)ISOCurrencyCodes;
-(long long)_calendarDirection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)variantCode;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)collationIdentifier;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)collatorIdentifier;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)alternateQuotationBeginDelimiter;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)exemplarCharacterSet;
-(unsigned long long)_cfTypeID;
-(id)_prefs;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)groupingSeparator;
-(id)decimalSeparator;
-(id)currencySymbol;
-(id)scriptCode;
-(id)countryCode;
-(id)currencyCode;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)localeIdentifier;
-(id)calendarIdentifier;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)languageCode;
-(BOOL)usesMetricSystem;
-(id)quotationBeginDelimiter;
-(id)quotationEndDelimiter;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)localizedStringForCountryCode:(id)arg1 ;
@end

