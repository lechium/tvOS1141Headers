/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSObject;

@interface ImpoExpoService : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;

}
+(id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)listItemsNameWithPrefix:(id)arg1 sortDescriptor:(id)arg2 ;
-(id)exportItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(void)deleteItemsWithNames:(id)arg1 ;
-(BOOL)importItemUnderName:(id)arg1 item:(id)arg2 ;
-(long long)deleteItemsWithPrefix:(id)arg1 ;
-(id)_nameSubfix;
-(id)_initInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)_locateRecord:(id)arg1 createMissing:(BOOL)arg2 ;
-(long long)_deleteItemsMatchingPredicate:(id)arg1 ;
-(BOOL)archiveAndImportItemUnderName:(id)arg1 item:(id)arg2 ;
-(BOOL)importValueUnderName:(id)arg1 value:(unsigned long long)arg2 ;
-(id)exportAndUnarchiveItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(unsigned long long)exportValueUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
-(long long)deleteItemsWithPrefixes:(id)arg1 ;
@end

