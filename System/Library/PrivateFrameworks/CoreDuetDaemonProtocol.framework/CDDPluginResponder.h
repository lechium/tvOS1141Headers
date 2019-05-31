/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDDebug;

@interface CDDPluginResponder : NSObject {

	CDDebug* _debug;

}

@property (readonly) CDDebug * debug;              //@synthesize debug=_debug - In the implementation block
-(id)init;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(BOOL)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5 ;
-(BOOL)respondToInitOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)respondToAdmissionSignoffOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(BOOL)arg4 reasons:(id)arg5 error:(id*)arg6 ;
-(BOOL)respondToTriggerOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(BOOL)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(BOOL)arg4 reasons:(id)arg5 error:(id*)arg6 ;
-(CDDebug *)debug;
@end

