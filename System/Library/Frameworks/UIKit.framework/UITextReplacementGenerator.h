/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRange, NSString;

@interface UITextReplacementGenerator : NSObject {

	UITextRange* _replacementRange;
	NSString* _stringToReplace;

}

@property (nonatomic,retain) UITextRange * replacementRange;              //@synthesize replacementRange=_replacementRange - In the implementation block
@property (nonatomic,copy) NSString * stringToReplace;                    //@synthesize stringToReplace=_stringToReplace - In the implementation block
-(void)setReplacementRange:(UITextRange *)arg1 ;
-(UITextRange *)replacementRange;
-(void)setStringToReplace:(NSString *)arg1 ;
-(NSString *)stringToReplace;
-(id)replacements;
-(BOOL)isStringToReplaceMisspelled;
-(BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2 ;
-(id)replacementWithText:(id)arg1 ;
-(void)addPlaceholderForEmptyReplacements:(id)arg1 ;
@end

