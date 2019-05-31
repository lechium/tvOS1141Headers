/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface SiriUISuggestionsHeaderText : NSObject <NSCopying> {

	NSString* _regularString;
	NSString* _compactString;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * regularString;                                                           //@synthesize regularString=_regularString - In the implementation block
@property (nonatomic,copy) NSString * compactString;                                                           //@synthesize compactString=_compactString - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                                          //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedStringForMainScreenTraitCollection; 
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)textAlignment;
-(void)setRegularString:(NSString *)arg1 ;
-(void)setCompactString:(NSString *)arg1 ;
-(id)_attributedStringWithString:(id)arg1 ;
-(NSString *)regularString;
-(NSString *)compactString;
-(id)initWithRegularString:(id)arg1 compactString:(id)arg2 ;
-(NSAttributedString *)attributedStringForMainScreenTraitCollection;
@end
