/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSSecureCoding, NSCopying> {

	NSURL* _stagingBaseDir;

}

@property (nonatomic,retain) NSURL * stagingBaseDir;              //@synthesize stagingBaseDir=_stagingBaseDir - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)clientPromiseClass;
-(NSURL *)stagingBaseDir;
-(void)setStagingBaseDir:(NSURL *)arg1 ;
@end

