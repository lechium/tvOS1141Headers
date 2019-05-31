/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
+(CGContextRef)contextWithFormat:(id)arg1 ;
+(Class)rendererContextClass;
+(void)prepareCGContext:(CGContextRef)arg1 withRendererContext:(id)arg2 ;
-(id)init;
-(id)initWithSize:(CGSize)arg1 ;
-(void)pushContext:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 format:(id)arg2 ;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(id)arg2 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(BOOL)allowsImageOutput;
-(id)PNGDataWithActions:(/*^block*/id)arg1 ;
-(id)JPEGDataWithCompressionQuality:(double)arg1 actions:(/*^block*/id)arg2 ;
@end

