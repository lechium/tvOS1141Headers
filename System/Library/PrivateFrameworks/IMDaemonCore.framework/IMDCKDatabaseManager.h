/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, IMDCKMockDatabase;

@interface IMDCKDatabaseManager : NSObject {

	BOOL _useStingRay;
	CKContainer* _stingRayContainer;
	CKContainer* _manateeContainer;
	CKContainer* _nonHSA2ManateeContainer;
	IMDCKMockDatabase* _mockDatabase;

}

@property (nonatomic,readonly) CKContainer * stingRayContainer;                    //@synthesize stingRayContainer=_stingRayContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * manateeContainer;                     //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (nonatomic,readonly) CKContainer * nonHSA2ManateeContainer;              //@synthesize nonHSA2ManateeContainer=_nonHSA2ManateeContainer - In the implementation block
@property (nonatomic,readonly) IMDCKMockDatabase * mockDatabase;                   //@synthesize mockDatabase=_mockDatabase - In the implementation block
@property (nonatomic,readonly) CKContainer * truthContainer; 
@property (assign,nonatomic) BOOL useStingRay;                                     //@synthesize useStingRay=_useStingRay - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CKContainer *)truthContainer;
-(id)truthDatabase;
-(BOOL)useStingRay;
-(id)manateeDataBase;
-(id)stingRayDatabase;
-(id)nonHSA2ManateeDatabase;
-(BOOL)_useMockCloudKit;
-(IMDCKMockDatabase *)mockDatabase;
-(CKContainer *)stingRayContainer;
-(CKContainer *)manateeContainer;
-(CKContainer *)nonHSA2ManateeContainer;
-(void)setUseStingRay:(BOOL)arg1 ;
@end

