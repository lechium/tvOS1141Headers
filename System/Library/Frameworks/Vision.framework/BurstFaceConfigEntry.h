/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface BurstFaceConfigEntry : NSObject {

	int faceId;
	CGRect faceRect;
	int framesSinceLast;

}

@property (assign) int faceId; 
@property (assign) CGRect faceRect; 
@property (assign) int framesSinceLast; 
-(int)faceId;
-(id)initWithRect:(CGRect)arg1 withFaceId:(int)arg2 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(void)setFaceId:(int)arg1 ;
@end
