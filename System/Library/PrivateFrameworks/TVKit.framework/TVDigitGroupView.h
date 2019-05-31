/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSMutableArray, NSIndexSet, NSString;

@interface TVDigitGroupView : UIView <CAAnimationDelegate> {

	NSMutableArray* _digits;
	BOOL _secure;
	unsigned long long _numberOfDigits;
	NSIndexSet* _separatorIndexes;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long numberOfDigits;              //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,readonly) NSIndexSet * separatorIndexes;                  //@synthesize separatorIndexes=_separatorIndexes - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                      //@synthesize secure=_secure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfText;
-(void)reset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)_setupSubviews;
-(void)_updateDigits;
-(id)initWithNumberOfDigits:(unsigned long long)arg1 separatorIndexes:(id)arg2 ;
-(unsigned long long)numberOfDigits;
-(NSIndexSet *)separatorIndexes;
-(void)shake;
@end

