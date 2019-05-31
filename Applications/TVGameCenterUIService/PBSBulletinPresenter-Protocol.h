//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCInterface, PBSBulletin;

@protocol PBSBulletinPresenter <NSObject>
+ (NSXPCInterface *)_exportedInterface;
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (void)bulletinServiceUpdateWithBulletin:(PBSBulletin *)arg1;
- (void)bulletinServiceBeginPresentationWithBulletin:(PBSBulletin *)arg1;

@optional
- (void)bulletinServiceWillPresentBulletin:(id <NSSecureCoding>)arg1;
@end
