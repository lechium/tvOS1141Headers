/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMLAlgorithmProtocol;
#import <CorePrediction/CorePrediction-Structs.h>
@class NSDictionary, CPMLDB, CPMLSchema, CPMLStorageManager;

@interface CPMLTrainer : NSObject {

	BOOL shouldFail;
	sqlite3Ref modelDB;
	NSDictionary* modelPlist;
	CPMLDB* cpmlDB;
	CPMLCDB* cpCDB;
	CPMLAlgorithm* cpMLAlgo;
	CPMLRemapper* cpRemapper;
	CPMLSchema* cpmlSchema;
	CPMLStatistics* trainerCPStatistics;
	CPMLSerialization* trainerCPSerializer;
	CPMLTunableData* cpTuneableData;
	int mapFunction;
	CPMLDelegate* _cpmlDelegate;
	CPMLStorageManager* _storageManager;
	id<CPMLAlgorithmProtocol> _theDelegate;

}
-(void)dealloc;
-(id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3 ;
-(void)train:(BOOL)arg1 ;
-(void)buildTrainingMachineLearningAlgorithm:(id)arg1 ;
-(id)fileProtectionClassRequest:(id)arg1 ;
-(id)getSolution;
@end

