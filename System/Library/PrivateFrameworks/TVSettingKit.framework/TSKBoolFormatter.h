/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSKBoolFormatter : NSFormatter {

	NSString* _onTitle;
	NSString* _offTitle;

}

@property (nonatomic,copy,readonly) NSString * onTitle;               //@synthesize onTitle=_onTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * offTitle;              //@synthesize offTitle=_offTitle - In the implementation block
+(id)formatterWithOnTitle:(id)arg1 offTitle:(id)arg2 ;
+(id)onOffFormatter;
+(id)yesNoFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(NSString *)offTitle;
-(NSString *)onTitle;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithOnTitle:(id)arg1 andOffTitle:(id)arg2 ;
@end
