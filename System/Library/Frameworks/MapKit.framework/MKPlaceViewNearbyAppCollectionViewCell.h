/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, NSDictionary;

@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _categoryLabel;
	UILabel* _priceLabel;
	UIImageView* _icon;
	NSDictionary* _storeData;

}

@property (nonatomic,retain) NSDictionary * storeData;              //@synthesize storeData=_storeData - In the implementation block
+(id)reuseIdentifier;
+(double)heightWithIconSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(void)setStoreData:(NSDictionary *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)storeData;
@end

