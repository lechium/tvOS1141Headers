/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@optional
-(id)imageObj;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;

@required
-(CGRect)frame;
-(NSString *)name;
-(double)opacity;
-(int)blendMode;

@end

