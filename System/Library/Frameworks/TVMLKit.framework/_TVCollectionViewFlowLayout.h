/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout {

	BOOL _heterogeneous;

}

@property (assign,getter=isHeterogeneous,nonatomic) BOOL heterogeneous;              //@synthesize heterogeneous=_heterogeneous - In the implementation block
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(long long)developmentLayoutDirection;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)isHeterogeneous;
-(void)setHeterogeneous:(BOOL)arg1 ;
-(double)contentHeightThatFitsItemCount:(long long)arg1 expectedWidth:(double)arg2 ;
@end

