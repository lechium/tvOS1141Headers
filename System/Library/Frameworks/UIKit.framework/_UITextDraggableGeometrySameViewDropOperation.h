/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextDraggableGeometrySameViewDropOperation.h>

@class NSArray, UITextRange, NSAttributedString, NSString;

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation> {

	NSArray* _sourceRanges;
	UITextRange* _targetRange;
	NSAttributedString* _text;
	unsigned long long _operation;

}

@property (nonatomic,retain) NSArray * sourceRanges;                    //@synthesize sourceRanges=_sourceRanges - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                 //@synthesize targetRange=_targetRange - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(UITextRange *)targetRange;
-(NSArray *)sourceRanges;
-(void)setSourceRanges:(NSArray *)arg1 ;
@end

