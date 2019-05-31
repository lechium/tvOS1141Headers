/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKXPCClient <NSObject>
@required
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2;

@end

