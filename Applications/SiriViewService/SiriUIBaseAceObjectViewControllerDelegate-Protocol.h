//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@protocol SiriUIBaseAceObjectViewControllerDelegate <NSObject>
- (void)siriViewController:(id <SiriUIViewController>)arg1 openURL:(NSURL *)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)siriViewController:(id <SiriUIViewController>)arg1 openURL:(NSURL *)arg2;
- (void)siriViewController:(id <SiriUIViewController>)arg1 performAceCommands:(NSArray *)arg2 completion:(void (^)(_Bool))arg3;
- (void)siriViewController:(id <SiriUIViewController>)arg1 performAceCommands:(NSArray *)arg2;
@end

