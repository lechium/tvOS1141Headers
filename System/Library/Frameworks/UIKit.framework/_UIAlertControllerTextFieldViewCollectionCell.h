/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusedView;
-(_UIAlertControllerTextFieldView *)textField;
-(void)prepareForReuse;
-(void)_selectButton:(id)arg1 ;
-(void)setTextField:(id)arg1 horizontalMargin:(double)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
@end

