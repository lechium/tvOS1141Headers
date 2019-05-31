/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}
+(BOOL)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(BOOL)scanPastItemDelimiter;
-(id)scanStringValue;
-(BOOL)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(BOOL)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg1 ;
-(void)scanPastWhitespace;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)position;
-(BOOL)atEnd;
@end

