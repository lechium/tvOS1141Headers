/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface RPFileTransferInfo : NSObject {

	double _bytesPerSecond;
	double _remainingSeconds;
	double _compressionRate;
	NSString* _currentFilename;
	NSUUID* _transferIdentifier;
	long long _transferredByteCount;
	long long _totalByteCount;
	long long _transferredFileCount;
	long long _totalFileCount;

}

@property (nonatomic,readonly) double bytesPerSecond;                         //@synthesize bytesPerSecond=_bytesPerSecond - In the implementation block
@property (nonatomic,readonly) double remainingSeconds;                       //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
@property (nonatomic,readonly) double compressionRate;                        //@synthesize compressionRate=_compressionRate - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentFilename;               //@synthesize currentFilename=_currentFilename - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * transferIdentifier;              //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (nonatomic,readonly) long long transferredByteCount;                //@synthesize transferredByteCount=_transferredByteCount - In the implementation block
@property (nonatomic,readonly) long long totalByteCount;                      //@synthesize totalByteCount=_totalByteCount - In the implementation block
@property (nonatomic,readonly) long long transferredFileCount;                //@synthesize transferredFileCount=_transferredFileCount - In the implementation block
@property (nonatomic,readonly) long long totalFileCount;                      //@synthesize totalFileCount=_totalFileCount - In the implementation block
-(id)init;
-(NSUUID *)transferIdentifier;
-(double)bytesPerSecond;
-(double)compressionRate;
-(NSString *)currentFilename;
-(long long)transferredByteCount;
-(long long)totalByteCount;
-(long long)transferredFileCount;
-(long long)totalFileCount;
-(double)remainingSeconds;
@end

