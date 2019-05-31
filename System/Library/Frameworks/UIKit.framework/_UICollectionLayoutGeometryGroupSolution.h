/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray;

@interface _UICollectionLayoutGeometryGroupSolution : NSObject {

	NSArray* _frames;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                   //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
+(id)solutionWithSize:(CGSize)arg1 frames:(id)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSArray *)frames;
-(id)framesWithOffset:(CGPoint)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(id)initWithSize:(CGSize)arg1 frames:(id)arg2 ;
-(id)frameAtIndex:(long long)arg1 withOffset:(CGPoint)arg2 ;
@end
