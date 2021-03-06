/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GVNode, NSMutableArray;

@interface GVEdge : NSObject {

	BOOL reversed;
	GVNode* from;
	GVNode* to;
	NSMutableArray* dummies;

}

@property (nonatomic,retain) NSMutableArray * dummies; 
@property (assign,nonatomic) BOOL reversed; 
@property (nonatomic,readonly) GVNode * from; 
@property (nonatomic,readonly) GVNode * to; 
-(id)initWithFromNode:(id)arg1 to:(id)arg2 ;
-(NSMutableArray *)dummies;
-(void)setDummies:(NSMutableArray *)arg1 ;
-(GVNode *)from;
-(GVNode *)to;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)reversed;
@end

