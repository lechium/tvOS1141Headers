/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject {

	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(id)init;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
-(void)_executeOperationsOnQueue:(id)arg1 ;
-(void)_addOperation:(id)arg1 ;
@end

