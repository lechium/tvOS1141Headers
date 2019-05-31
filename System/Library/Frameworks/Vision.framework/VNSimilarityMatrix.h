/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNSimilarityMatrix : NSObject {

	shared_ptr<vision::mod::SimilarityMatrixAbstract>* m_MatrixImpl;

}

@property (getter=getMatrixSize,nonatomic,readonly) unsigned long long matrixSize; 
@property (getter=getMaximumValidMatrixDistance,nonatomic,readonly) float maximumValidMatrixDistance; 
@property (getter=getImpl,nonatomic,readonly) void* impl; 
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDescriptors:(id)arg1 error:(id*)arg2 ;
-(void)deleteDescriptors:(id)arg1 ;
-(unsigned long long)getMatrixSize;
-(float)getMaximumValidMatrixDistance;
-(id)createCopyForDescriptorIds:(id)arg1 ;
-(id)getDescriptorIdsForRange:(NSRange)arg1 ;
-(float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2 ;
-(id)getAllDistancesForId:(unsigned long long)arg1 ;
-(BOOL)containsId:(unsigned long long)arg1 ;
-(void*)getImpl;
@end

