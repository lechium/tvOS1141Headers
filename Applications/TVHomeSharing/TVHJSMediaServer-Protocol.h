//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class JSValue, NSArray, NSString, TVHJSAsynchronousWorkToken, TVHJSMediaEntityFetchRequest;

@protocol TVHJSMediaServer <JSExport>
@property(readonly, copy, nonatomic) NSString *connectionState;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *type;
- (void)unregisterConnectionStateDidChangeCallback:(JSValue *)arg1;
- (void)registerConnectionStateDidChangeCallback:(JSValue *)arg1;
- (void)unregisterContentsDidChangeCallback:(JSValue *)arg1;
- (void)registerContentsDidChangeCallback:(JSValue *)arg1;
- (TVHJSAsynchronousWorkToken *)enqueueFetchRequest:(TVHJSMediaEntityFetchRequest *)arg1:(NSArray *)arg2:(JSValue *)arg3;
- (void)connect;
@end

