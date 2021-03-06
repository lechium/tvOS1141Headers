/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMDMediaEndpoint : HMFObject {

	void* _endpoint;
	NSString* _uniqueIdentifier;
	NSString* _sessionIdentifier;
	NSString* _localizedName;
	NSArray* _advertisements;

}

@property (nonatomic,readonly) NSString * localizedName;                  //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) void* endpoint;                            //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * advertisements;                  //@synthesize advertisements=_advertisements - In the implementation block
-(id)initWithEndpoint:(void*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)sessionIdentifier;
-(NSString *)localizedName;
-(void*)endpoint;
-(NSString *)uniqueIdentifier;
-(NSArray *)advertisements;
-(id)_getAdvertisements;
-(void)updateWithEndpoint:(void*)arg1 ;
@end

