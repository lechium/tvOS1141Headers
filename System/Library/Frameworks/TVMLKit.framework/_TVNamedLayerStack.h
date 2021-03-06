/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@protocol UINamedLayerStack;
@class UIImage, NSArray, NSString;

@interface _TVNamedLayerStack : NSObject <UINamedLayerStack> {

	id<UINamedLayerStack> _layerStack;
	UIImage* _cornerRadiusFlatImage;
	UIImage* _originalImage;
	NSArray* _replacementLayers;

}

@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                  //@synthesize layerStack=_layerStack - In the implementation block
@property (nonatomic,retain) UIImage * cornerRadiusFlatImage;                   //@synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy) NSArray * replacementLayers;                         //@synthesize replacementLayers=_replacementLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
+(id)namedLayerStackWithImage:(id)arg1 ;
+(id)decodedNamedLayerStackWithImage:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(id)init;
-(double)scale;
-(CGSize)size;
-(NSString *)name;
-(id)_init;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(BOOL)flatImageContainsCornerRadius;
-(id)radiosityImage;
-(CGSize)radiosityImageScale;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(id<UINamedLayerStack>)layerStack;
-(UIImage *)originalImage;
-(void)setCornerRadiusFlatImage:(UIImage *)arg1 ;
-(void)setReplacementLayers:(NSArray *)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(NSArray *)replacementLayers;
-(UIImage *)cornerRadiusFlatImage;
@end

