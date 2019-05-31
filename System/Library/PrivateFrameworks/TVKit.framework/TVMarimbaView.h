/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class MRMarimbaLayer, MPDocument;

@interface TVMarimbaView : UIView

@property (nonatomic,readonly) MRMarimbaLayer * marimbaLayer; 
@property (nonatomic,readonly) MPDocument * document; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)layer;
-(MPDocument *)document;
-(MRMarimbaLayer *)marimbaLayer;
@end

