/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, NSString;

@interface TISCTextRunRequest : NSObject {

	NSArray* _strings;
	CGColorRef _color;
	double _maxFontSize;
	double _minFontSize;
	BOOL _allowTruncation;
	NSString* _truncationSentinel;
	unsigned long long _widthGroup;

}
+(id)textRunRequestWithStrings:(id)arg1 color:(CGColorRef)arg2 maxFontSize:(double)arg3 minFontSize:(double)arg4 allowTruncation:(BOOL)arg5 truncationSentinel:(id)arg6 widthGroup:(unsigned long long)arg7 ;
-(void)dealloc;
-(CGColorRef)color;
-(id)strings;
-(double)minFontSize;
-(BOOL)allowTruncation;
-(id)truncationSentinel;
-(unsigned long long)widthGroup;
-(double)maxFontSize;
@end

