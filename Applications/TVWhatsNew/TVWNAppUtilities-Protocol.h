//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSString;

@protocol TVWNAppUtilities <JSExport>
- (_Bool)preloadImages:(NSArray *)arg1:(JSValue *)arg2;
- (NSString *)lastUpdatedFromOSVersion;
- (_Bool)isRunningAsViewService;
- (_Bool)shouldSkipVersionCheck;
- (id)getItem:(NSString *)arg1;
- (_Bool)setItem:(NSString *)arg1:(id)arg2;
- (void)exit;
- (void)suspend;
- (void)setNeedsBecomeActive;
@end

