/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <DCIMServices/CAMBadgeTextView.h>

@class UIView;

@interface CAMLightingNameBadge : CAMBadgeTextView {

	BOOL _highlighted;
	long long _lightingType;
	UIView* __snapshotView;

}

@property (setter=_setSnapshotView:,nonatomic,retain) UIView * _snapshotView;              //@synthesize _snapshotView=__snapshotView - In the implementation block
@property (assign,nonatomic) long long lightingType;                                       //@synthesize lightingType=_lightingType - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)_snapshotView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLightingType:(long long)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(void)_setSnapshotView:(id)arg1 ;
-(void)_updateText;
-(long long)lightingType;
@end

