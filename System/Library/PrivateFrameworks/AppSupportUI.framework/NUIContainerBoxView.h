/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIBoxArrangementContainer.h>

@class NSString;

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer> {

	NUIBoxArrangement* _visibleArrangement;
	struct {
		unsigned delegateHorizontal : 1;
		unsigned delegateVertical : 1;
	}  _boxFlags;
	long long _horizontalAlignment;
	long long _verticalAlignment;

}

@property (assign,nonatomic,__weak) id<NUIContainerBoxViewDelegate> delegate; 
@property (assign,nonatomic) long long horizontalAlignment;                                //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                                  //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<NUIContainerBoxViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(long long)horizontalAlignment;
-(long long)verticalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(BOOL)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
-(id)arrangedDescription;
-(void)populateBoxArrangementCells:(vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >*)arg1 ;
-(long long)_effectiveHorizontalAlignmentForArrangedSubview:(id)arg1 ;
-(long long)_effectiveVerticalAlignmentForArrangedSubview:(id)arg1 ;
@end
