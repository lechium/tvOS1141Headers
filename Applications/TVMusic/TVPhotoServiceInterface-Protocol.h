//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol TVPhotoServiceInterface <NSObject>

@optional
- (void)photoAssetsWithOptions:(NSDictionary *)arg1 remotePhotoServer:(id <TVPhotoServerInterface>)arg2 responseBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)registerRemotePhotoServer:(id <TVPhotoServerInterface>)arg1;
- (void)photoAssetsWithOptions:(NSDictionary *)arg1 responseBlock:(void (^)(NSArray *, NSError *))arg2;
@end

