/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (getter=_isCaret,nonatomic,readonly) BOOL isCaret; 
@property (getter=_isRanged,nonatomic,readonly) BOOL isRanged; 
@property (getter=_isImpl,nonatomic,readonly) UITextRangeImpl * isImpl; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) UITextPosition * start; 
@property (nonatomic,readonly) UITextPosition * end; 
-(BOOL)isEmpty;
-(UITextPosition *)start;
-(UITextPosition *)end;
-(BOOL)_isRanged;
-(BOOL)_isCaret;
-(id)_isImpl;
@end

