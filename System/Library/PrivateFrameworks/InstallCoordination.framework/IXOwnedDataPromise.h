/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {

	NSURL* _stagedPath;

}

@property (nonatomic,retain) IXOwnedDataPromiseSeed * seed; 
@property (nonatomic,retain) NSURL * stagedPath;                         //@synthesize stagedPath=_stagedPath - In the implementation block
@property (nonatomic,readonly) NSURL * stagingBaseDir; 
-(NSURL *)stagingBaseDir;
-(void)setStagedPath:(NSURL *)arg1 ;
-(Class)seedClass;
-(NSURL *)stagedPath;
@end

