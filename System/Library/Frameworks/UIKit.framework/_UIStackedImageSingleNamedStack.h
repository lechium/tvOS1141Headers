/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@class NSString, NSArray, _UIStackedImageSingleNamedLayerImage;

@interface _UIStackedImageSingleNamedStack : NSObject <UINamedLayerStack> {

	_UIStackedImageSingleNamedLayerImage* _layerImage;

}

@property (nonatomic,retain) _UIStackedImageSingleNamedLayerImage * layerImage;              //@synthesize layerImage=_layerImage - In the implementation block
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
-(double)scale;
-(CGSize)size;
-(NSString *)name;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(_UIStackedImageSingleNamedLayerImage *)layerImage;
-(void)setLayerImage:(_UIStackedImageSingleNamedLayerImage *)arg1 ;
@end

