/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class MTLArgument, NSString;

@interface SCNMTLResourceBinding : NSObject {

	BOOL _needsRenderResource;
	SCD_Struct_SC34 _indices;
	SCD_Struct_SC34 _samplerIndices;
	id _bindBlock;
	MTLArgument* _argument;

}

@property (nonatomic,retain) MTLArgument * argument;                 //@synthesize argument=_argument - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) BOOL needsRenderResource; 
@property (nonatomic,copy) id bindBlock;                             //@synthesize bindBlock=_bindBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)type;
-(BOOL)needsRenderResource;
-(MTLArgument *)argument;
-(id)bindBlock;
-(void)setNeedsRenderResource:(BOOL)arg1 ;
-(void)setBindBlock:(id)arg1 ;
-(void)setArgument:(MTLArgument *)arg1 ;
@end

