/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, UIColor;

@interface TVMonogramImageConfiguration : NSObject <NSCopying> {

	long long _style;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	UIFont* _font;
	UIColor* _bgColor;
	double _diameter;
	double _focusedSizeIncrease;

}

@property (nonatomic,readonly) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                           //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * bgColor;                       //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) double diameter;                         //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;              //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)font;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)focusedSizeIncrease;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(UIColor *)bgColor;
-(void)setBgColor:(UIColor *)arg1 ;
@end

