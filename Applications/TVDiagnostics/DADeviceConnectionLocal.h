//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASTSessionSigningDelegate.h"
#import "DADeviceConnection.h"

@class ASTSession, DADeviceState, DASessionSettings, DAStrongDeviceIdentity, NSString;

@interface DADeviceConnectionLocal : NSObject <ASTSessionSigningDelegate, DADeviceConnection>
{
    DADeviceState *_state;	// 8 = 0x8
    _Bool _disconnecting;	// 16 = 0x10
    id <DADeviceConnectionDelegate> _delegate;	// 24 = 0x18
    ASTSession *_session;	// 32 = 0x20
    DASessionSettings *_sessionSettings;	// 40 = 0x28
    DAStrongDeviceIdentity *_strongDeviceIdentity;	// 48 = 0x30
}

@property(retain, nonatomic) DAStrongDeviceIdentity *strongDeviceIdentity; // @synthesize strongDeviceIdentity=_strongDeviceIdentity;
@property(nonatomic, getter=isDisconnecting) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(retain, nonatomic) DASessionSettings *sessionSettings; // @synthesize sessionSettings=_sessionSettings;
@property(retain, nonatomic) ASTSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <DADeviceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100019b60
- (void)session:(id)arg1 signFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019998
- (void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019890
- (void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;	// IMP=0x000000010001949c
- (void)session:(id)arg1 didUpdateSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000192c4
- (void)session:(id)arg1 didResumeSendingResultForTest:(id)arg2;	// IMP=0x00000001000191dc
- (void)session:(id)arg1 didPauseSendingResultForTest:(id)arg2 error:(id)arg3;	// IMP=0x000000010001911c
- (void)sessionDidResume:(id)arg1;	// IMP=0x00000001000190d8
- (void)session:(id)arg1 didPauseWithError:(id)arg2;	// IMP=0x0000000100019030
- (void)session:(id)arg1 didUpdateTestSuiteImage:(id)arg2;	// IMP=0x0000000100018fc4
- (void)session:(id)arg1 didUpdateTestSuiteProgress:(id)arg2;	// IMP=0x0000000100018f50
- (void)sessionDidCancelSuite:(id)arg1;	// IMP=0x0000000100018dd0
- (void)session:(id)arg1 didCompleteTestSuite:(id)arg2 description:(id)arg3;	// IMP=0x0000000100018c0c
- (void)session:(id)arg1 didStartTestSuite:(id)arg2 description:(id)arg3;	// IMP=0x0000000100018a5c
- (void)session:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x0000000100018804
- (void)session:(id)arg1 profile:(id)arg2 filteredByComponents:(id)arg3;	// IMP=0x0000000100018650
- (void)session:(id)arg1 cancelTest:(id)arg2;	// IMP=0x00000001000185ac
- (void)session:(id)arg1 startTest:(id)arg2 parameters:(id)arg3 testResult:(id)arg4;	// IMP=0x0000000100017c44
- (void)sessionDidStart:(id)arg1;	// IMP=0x0000000100017bdc
- (void)requestAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017aac
- (void)end;	// IMP=0x0000000100017a54
- (void)idle;	// IMP=0x0000000100017a14
- (void)start;	// IMP=0x00000001000177dc
@property(readonly, nonatomic) DADeviceState *state;
- (id)IMEI;	// IMP=0x00000001000177c4
- (id)initWithState:(id)arg1;	// IMP=0x0000000100017720

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
