/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class TVImageStackView, TVImageProxy, UIMotionEffectGroup, TVLImageAssetElementType;

@interface _TVLMediaBrowserCell : UICollectionViewCell {

	TVImageStackView* _imageStackView;
	TVImageProxy* _imageProxy;
	UIMotionEffectGroup* _motionEffectGroup;
	TVLImageAssetElementType* _assetElement;

}

@property (nonatomic,retain) TVLImageAssetElementType * assetElement;              //@synthesize assetElement=_assetElement - In the implementation block
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(void)prepareForReuse;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)setAssetElement:(TVLImageAssetElementType *)arg1 ;
-(void)_setImageFromURL:(id)arg1 forStackSize:(CGSize)arg2 ;
-(TVLImageAssetElementType *)assetElement;
@end

