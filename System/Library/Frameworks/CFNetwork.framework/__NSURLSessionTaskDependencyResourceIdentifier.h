/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {

	NSString* _URLPath;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSString * URLPath;               //@synthesize URLPath=_URLPath - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(void)setURLPath:(NSString *)arg1 ;
-(NSString *)URLPath;
-(id)initWitURLPath:(id)arg1 mimeType:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end
