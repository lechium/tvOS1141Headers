/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol XBSnapshotManifestStore;
@class NSString;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	id<XBSnapshotManifestStore> _store;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id<XBSnapshotManifestStore> store;              //@synthesize store=_store - In the implementation block
+(id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<XBSnapshotManifestStore>)store;
-(id)initWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
@end

