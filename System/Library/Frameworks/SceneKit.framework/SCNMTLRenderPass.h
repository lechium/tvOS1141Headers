/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNMTLRenderPass : NSObject {

	/*^block*/id setupBlock;
	/*^block*/id executeBlock;

}

@property (nonatomic,copy) id setupBlock; 
@property (nonatomic,copy) id executeBlock; 
-(void)dealloc;
-(void)execute:(id)arg1 ;
-(void)setSetupBlock:(id)arg1 ;
-(id)executeBlock;
-(id)setupBlock;
-(void)setup:(id)arg1 ;
-(void)setExecuteBlock:(id)arg1 ;
@end
