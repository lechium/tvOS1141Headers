/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSString.h>

@interface __NSATSStringSegment : NSString {

	CFStringRef _originalString;
	long long _originalStringLength;
	SCD_Struct_NS7 _range;
	const unsigned short* _characters;
	unsigned short _buffer[128];

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)_isDeallocating;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)_tryRetain;
-(void)_setOriginalString:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOriginalString:(id)arg1 range:(NSRange)arg2 ;
@end
