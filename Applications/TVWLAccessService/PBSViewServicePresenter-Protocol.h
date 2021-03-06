//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSXPCInterface;

@protocol PBSViewServicePresenter <NSObject>
+ (NSXPCInterface *)_exportedInterface;
- (void)viewServiceEndPresentationWithOptions:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)viewServiceBeginPresentationWithOptions:(NSDictionary *)arg1;

@optional
- (void)viewServiceHandleMessage:(NSDictionary *)arg1 reply:(void (^)(id <NSSecureCoding>, NSError *))arg2;
- (void)viewServiceUpdatePresentationWithOptions:(NSDictionary *)arg1;
@end

