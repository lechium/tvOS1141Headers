//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SATVActivator;

@protocol SATVActivatorDelegate <NSObject>
- (void)activator:(SATVActivator *)arg1 didFailWithError:(NSError *)arg2 reason:(unsigned long long)arg3;
- (void)activator:(SATVActivator *)arg1 didSucceedWithType:(unsigned long long)arg2;
@end

