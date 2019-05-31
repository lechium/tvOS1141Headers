/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UITableViewCellActionButton, NSArray;

@interface UITableViewCellDeleteConfirmationView : UIView {

	double _visibleWidth;
	CGSize _contentSize;
	double _visibleHeightRatio;
	double _cornerRadius;
	int _sectionLocation;
	_UITableViewCellActionButton* _deleteView;
	_UITableViewCellActionButton* _accessoryView;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) double visibleWidth;                                         //@synthesize visibleWidth=_visibleWidth - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                        //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double visibleHeightRatio;                                   //@synthesize visibleHeightRatio=_visibleHeightRatio - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) int sectionLocation;                                         //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (nonatomic,readonly) _UITableViewCellActionButton * deleteView;                 //@synthesize deleteView=_deleteView - In the implementation block
@property (nonatomic,readonly) _UITableViewCellActionButton * accessoryView;              //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)contentSize;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(int)sectionLocation;
-(void)setSectionLocation:(int)arg1 ;
-(_UITableViewCellActionButton *)accessoryView;
-(id)initWithFrame:(CGRect)arg1 actionButtons:(id)arg2 contentSize:(CGSize)arg3 ;
-(void)setVisibleWidth:(double)arg1 ;
-(void)updateMaskView:(BOOL)arg1 ;
-(void)updateBounds;
-(void)setVisibleHeightRatio:(double)arg1 ;
-(double)visibleWidth;
-(double)visibleHeightRatio;
-(_UITableViewCellActionButton *)deleteView;
@end

