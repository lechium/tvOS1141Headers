/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSHashTable;

@interface FBSceneTransform : NSObject {

	CGAffineTransform _transform;
	NSHashTable* _targets;

}

@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
+(CGAffineTransform)concatenateTransforms:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(void)addTransformTarget:(id)arg1 ;
-(void)removeTransformTarget:(id)arg1 ;
@end

