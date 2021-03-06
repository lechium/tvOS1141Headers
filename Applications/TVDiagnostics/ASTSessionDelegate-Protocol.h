//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASTProfileResult, ASTSession, ASTTestResult, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol ASTSessionDelegate <NSObject>
- (void)session:(ASTSession *)arg1 didEndWithError:(NSError *)arg2;
- (void)session:(ASTSession *)arg1 profile:(ASTProfileResult *)arg2 filteredByComponents:(NSArray *)arg3;
- (void)session:(ASTSession *)arg1 cancelTest:(struct NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 startTest:(struct NSNumber *)arg2 parameters:(NSDictionary *)arg3 testResult:(ASTTestResult *)arg4;

@optional
- (void)sessionDidInvalidate:(ASTSession *)arg1;
- (void)sessionDidResume:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didPauseWithError:(NSError *)arg2;
- (void)sessionDidAbortWhilePerformingActions:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 performActions:(NSArray *)arg2 sequentially:(_Bool)arg3 stopOnError:(_Bool)arg4;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteProgress:(NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didUpdateTestSuiteImage:(NSData *)arg2;
- (void)sessionDidCancelSuite:(ASTSession *)arg1;
- (void)session:(ASTSession *)arg1 didCompleteTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didStartTestSuite:(NSString *)arg2 description:(NSString *)arg3;
- (void)session:(ASTSession *)arg1 didUpdateSettings:(NSDictionary *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)session:(ASTSession *)arg1 didResumeSendingResultForTest:(struct NSNumber *)arg2;
- (void)session:(ASTSession *)arg1 didPauseSendingResultForTest:(struct NSNumber *)arg2 error:(NSError *)arg3;
- (void)session:(ASTSession *)arg1 didFinishSendingResultForTest:(struct NSNumber *)arg2;
- (void)sessionDidStart:(ASTSession *)arg1;
@end

