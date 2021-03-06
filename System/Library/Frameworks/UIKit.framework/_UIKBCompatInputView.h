/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView {

	UIView* _touchableView;
	UIView* _snapshotView;

}

@property (nonatomic,retain) UIView * touchableView;              //@synthesize touchableView=_touchableView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;               //@synthesize snapshotView=_snapshotView - In the implementation block
+(BOOL)_retroactivelyRequiresConstraintBasedLayout;
-(void)addSubview:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)snapshotView;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(CGRect)_compatibleBounds;
-(void)setSnapshotView:(UIView *)arg1 ;
-(BOOL)_hasAutolayoutHeightConstraint;
-(UIView *)touchableView;
-(void)setTouchableView:(UIView *)arg1 ;
@end

