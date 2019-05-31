/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying> {

	long long _acceptedVersion;
	long long _currentVersion;
	long long _sourceType;
	long long _type;

}

@property (nonatomic,readonly) long long acceptedVersion;              //@synthesize acceptedVersion=_acceptedVersion - In the implementation block
@property (nonatomic,readonly) long long currentVersion;               //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,readonly) long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)sourceType;
-(long long)currentVersion;
-(id)initWithResponseTermsDictionary:(id)arg1 ;
-(long long)acceptedVersion;
@end
