/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class PHPhotoLibrary, PHFetchResult;

@interface PHPersonResetOperation : NSOperation {

	PHPhotoLibrary* _library;
	BOOL _shouldResetPhotoAnalysis;
	unsigned long long _batchSize;
	PHFetchResult* _personsToDelete;
	unsigned long long _totalPersonsToDelete;
	unsigned long long _deletedPersons;
	PHFetchResult* _facesToDelete;
	unsigned long long _totalFacesToDelete;
	unsigned long long _deletedFaces;
	BOOL _shouldDeleteAllFaceCrops;
	PHFetchResult* _faceCropsToDelete;
	unsigned long long _totalFaceCropsToDelete;
	unsigned long long _deletedFaceCrops;
	/*^block*/id _completionHandler;
	/*^block*/id _progressHandler;

}
+(id)resetOperationsForPersons:(id)arg1 batchSize:(unsigned long long)arg2 photoLibrary:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)resetAllPersonsOperationWithBatchSize:(unsigned long long)arg1 shouldResetPhotoAnalysis:(BOOL)arg2 photoLibrary:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)main;
-(id)initWithPersonsToDelete:(id)arg1 facesToDelete:(id)arg2 shouldDeleteAllFaceCrops:(BOOL)arg3 shouldResetPhotoAnalysis:(BOOL)arg4 batchSize:(unsigned long long)arg5 photoLibrary:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_enumerateFetchResult:(id)arg1 withBatchSize:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_prepareToDeleteFaceCrops;
-(BOOL)isAsynchronous;
@end

