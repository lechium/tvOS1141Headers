/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLDetectedObject.h>

@interface CVMLRectangleObservation : CVMLDetectedObject {

	CGPoint _topLeft;
	CGPoint _topRight;
	CGPoint _bottomLeft;
	CGPoint _bottomRight;

}

@property (assign) CGPoint topLeft;                  //@synthesize topLeft=_topLeft - In the implementation block
@property (assign) CGPoint topRight;                 //@synthesize topRight=_topRight - In the implementation block
@property (assign) CGPoint bottomLeft;               //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (assign) CGPoint bottomRight;              //@synthesize bottomRight=_bottomRight - In the implementation block
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomLeft;
-(CGPoint)bottomRight;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setBottomRight:(CGPoint)arg1 ;
-(void)setTopRight:(CGPoint)arg1 ;
@end

