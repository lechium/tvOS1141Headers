/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _TVInspectorHighlightMetadataView : UIView {

	UILabel* _descriptionLabel;
	UILabel* _frameLabel;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * frameLabel;                    //@synthesize frameLabel=_frameLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)descriptionLabel;
-(UILabel *)frameLabel;
@end

