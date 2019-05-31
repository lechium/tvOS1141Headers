/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, CAShapeLayer;

@interface MPAVRoutingTableHeaderView : UIView {

	UIEdgeInsets _edgeInsets;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	CAShapeLayer* _borderLayer;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_init;
-(id)_mirroringTitleTextAttributes;
-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
@end

