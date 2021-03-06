/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class VideoMovie;

@interface FrameGeneratorCacheInfo : NSObject {

	VideoMovie* m_movie;
	SCD_Struct_TV2 m_time;
	CGSize m_size;
	double m_rotation;

}

@property (nonatomic,retain) VideoMovie * movie; 
@property (assign,nonatomic) SCD_Struct_TV2 time; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotation; 
-(SCD_Struct_TV2)time;
-(void)setTime:(SCD_Struct_TV2)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(VideoMovie *)movie;
-(void)setMovie:(VideoMovie *)arg1 ;
@end

