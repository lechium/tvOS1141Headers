/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DiagnosticsServiceInterface
@required
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned long long)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4;
-(void)endSession:(id)arg1;
-(void)cancelSession:(id)arg1;
-(void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSessionStatisticsWithReply:(/*^block*/id)arg1;
-(void)getAllCasesWithReply:(/*^block*/id)arg1;
-(void)resetDiagnosticCaseStorageWithReply:(/*^block*/id)arg1;
-(void)resetDiagnosticCaseUsageWithReply:(/*^block*/id)arg1;
-(void)resetAllWithReply:(/*^block*/id)arg1;
-(void)triggerRemoteSessionForSignature:(id)arg1 groupIdentifier:(id)arg2 reply:(/*^block*/id)arg3;
-(void)assertCLIPSFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)postAWDEvent:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1;

@end

