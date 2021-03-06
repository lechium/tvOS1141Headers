/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
+(id)textColorForRenderConfig:(id)arg1 isSelected:(BOOL)arg2 ;
+(id)titleAttributesForRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isFocused;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)setInputText:(id)arg1 ;
@end

