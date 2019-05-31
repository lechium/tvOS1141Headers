/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView {

	BOOL _usesSecondaryColor;
	NSString* _string;
	UIFont* _font;

}

@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) BOOL usesSecondaryColor;              //@synthesize usesSecondaryColor=_usesSecondaryColor - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(UIFont *)font;
-(double)baselineOffset;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
@end
