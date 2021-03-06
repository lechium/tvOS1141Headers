/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPEffectSupport;
@class MCText, MPTextInternal, NSObject;

@interface MPText : NSObject <NSCoding, NSCopying> {

	MCText* _text;
	MPTextInternal* _internal;
	NSObject*<MPEffectSupport> _parent;

}
+(id)textWithAttributedString:(id)arg1 ;
-(void)dump;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)action;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(long long)index;
-(id)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)fullDebugLog;
-(id)parentEffect;
-(void)copyStruct:(id)arg1 ;
-(id)nearestPlug;
-(id)defaultString;
-(void)checkForMaxFontSize;
-(void)checkForPlacesLabel;
-(id)subtitleSlide;
-(double)displayTime;
-(double)displayStartTime;
-(double)displayDuration;
-(double)textAreaAspectRatio;
-(double)maxFontSize;
-(BOOL)isOriginal;
-(id)plainString;
-(void)setPlainString:(id)arg1 ;
@end

