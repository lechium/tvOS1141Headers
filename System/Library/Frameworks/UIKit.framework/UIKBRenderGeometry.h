/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSValue;

@interface UIKBRenderGeometry : NSObject <NSCopying> {

	BOOL _detachedVariants;
	BOOL _tallPopup;
	int _concaveCorner;
	int _roundRectCorners;
	int _popupBias;
	double _roundRectRadius;
	long long _flickDirection;
	NSValue* _splitLeftRect;
	NSValue* _splitRightRect;
	CGPoint _popupSource;
	CGSize _concaveCornerOffset;
	CGRect _frame;
	CGRect _paddedFrame;
	CGRect _displayFrame;
	CGRect _symbolFrame;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect paddedFrame;                        //@synthesize paddedFrame=_paddedFrame - In the implementation block
@property (assign,nonatomic) CGRect displayFrame;                       //@synthesize displayFrame=_displayFrame - In the implementation block
@property (assign,nonatomic) CGRect symbolFrame;                        //@synthesize symbolFrame=_symbolFrame - In the implementation block
@property (assign,nonatomic) int concaveCorner;                         //@synthesize concaveCorner=_concaveCorner - In the implementation block
@property (assign,nonatomic) CGSize concaveCornerOffset;                //@synthesize concaveCornerOffset=_concaveCornerOffset - In the implementation block
@property (assign,nonatomic) CGPoint popupSource;                       //@synthesize popupSource=_popupSource - In the implementation block
@property (assign,nonatomic) double roundRectRadius;                    //@synthesize roundRectRadius=_roundRectRadius - In the implementation block
@property (assign,nonatomic) int roundRectCorners;                      //@synthesize roundRectCorners=_roundRectCorners - In the implementation block
@property (assign,nonatomic) int popupBias;                             //@synthesize popupBias=_popupBias - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) long long flickDirection;                  //@synthesize flickDirection=_flickDirection - In the implementation block
@property (assign,nonatomic) BOOL detachedVariants;                     //@synthesize detachedVariants=_detachedVariants - In the implementation block
@property (assign,nonatomic) BOOL tallPopup;                            //@synthesize tallPopup=_tallPopup - In the implementation block
@property (nonatomic,retain) NSValue * splitLeftRect;                   //@synthesize splitLeftRect=_splitLeftRect - In the implementation block
@property (nonatomic,retain) NSValue * splitRightRect;                  //@synthesize splitRightRect=_splitRightRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,readonly) UIEdgeInsets paddedInsets; 
+(id)geometryWithFrame:(CGRect)arg1 paddedFrame:(CGRect)arg2 ;
+(id)geometryWithShape:(id)arg1 ;
+(id)sortedGeometries:(id)arg1 leftToRight:(BOOL)arg2 ;
-(CGRect)frame;
-(CGRect)displayFrame;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(CGRect)paddedFrame;
-(void)setDisplayFrame:(CGRect)arg1 ;
-(void)setPopupBias:(int)arg1 ;
-(void)setSymbolFrame:(CGRect)arg1 ;
-(CGRect)symbolFrame;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(void)setRoundRectCorners:(int)arg1 ;
-(void)setSplitLeftRect:(NSValue *)arg1 ;
-(void)setSplitRightRect:(NSValue *)arg1 ;
-(void)setRoundRectRadius:(double)arg1 ;
-(int)concaveCorner;
-(CGSize)concaveCornerOffset;
-(void)setConcaveCorner:(int)arg1 ;
-(void)setConcaveCornerOffset:(CGSize)arg1 ;
-(NSValue *)splitLeftRect;
-(NSValue *)splitRightRect;
-(void)setFlickDirection:(long long)arg1 ;
-(long long)flickDirection;
-(void)applyInsets:(UIEdgeInsets)arg1 ;
-(double)roundRectRadius;
-(int)roundRectCorners;
-(UIEdgeInsets)displayInsets;
-(id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7 ;
-(void)applyOffset:(CGPoint)arg1 ;
-(void)makeIntegralWithScale:(double)arg1 ;
-(void)adjustToTopWithInsets:(UIEdgeInsets)arg1 ;
-(id)copyForFlickDirection:(long long)arg1 scale:(double)arg2 ;
-(id)copyForPopupDirection:(long long)arg1 scale:(double)arg2 ;
-(unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(CGSize)arg1 centerX:(double)arg2 bottomEdge:(BOOL)arg3 topEdge:(BOOL)arg4 ;
-(void)setPopupSource:(CGPoint)arg1 ;
-(id)similarShape;
-(id)initWithShape:(id)arg1 ;
-(CGPoint)popupSource;
-(int)popupBias;
-(BOOL)detachedVariants;
-(BOOL)tallPopup;
-(void)setDetachedVariants:(BOOL)arg1 ;
-(void)setTallPopup:(BOOL)arg1 ;
-(void)overlayWithGeometry:(id)arg1 ;
-(void)applyShadowInsets:(UIEdgeInsets)arg1 ;
-(id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2 ;
-(id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2 ;
-(UIEdgeInsets)paddedInsets;
-(unsigned long long)adjustForTranslucentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(void)adjustForConsistentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
@end

