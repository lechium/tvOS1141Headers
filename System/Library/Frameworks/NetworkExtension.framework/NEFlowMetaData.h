/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding> {

	BOOL _fastOpenRequested;
	BOOL _multipathRequested;
	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppSigningIdentifier;

}

@property (readonly) BOOL fastOpenRequested;                             //@synthesize fastOpenRequested=_fastOpenRequested - In the implementation block
@property (readonly) BOOL multipathRequested;                            //@synthesize multipathRequested=_multipathRequested - In the implementation block
@property (readonly) NSData * sourceAppUniqueIdentifier;                 //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (readonly) NSString * sourceAppSigningIdentifier;              //@synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2 ;
-(id)initFromFlow:(NEFlowRef)arg1 ;
-(NSData *)sourceAppUniqueIdentifier;
-(NSString *)sourceAppSigningIdentifier;
-(BOOL)fastOpenRequested;
-(BOOL)multipathRequested;
-(id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(BOOL)arg3 multipathRequested:(BOOL)arg4 ;
@end

