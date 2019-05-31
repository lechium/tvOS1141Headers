/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNFaceLandmarkRegion : NSObject {

	CGRect _faceBoundingBox;
	unsigned long long _pointCount;

}

@property (assign) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(void)setPointCount:(unsigned long long)arg1 ;
-(unsigned long long)pointCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGRect)faceBoundingBox;
-(id)initWithFaceBoundingBox:(CGRect)arg1 ;
@end

