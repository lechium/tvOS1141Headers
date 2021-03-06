/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedTransferToPathSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) double percentComplete; 
@property (nonatomic,retain) NSURL * transferPath; 
@property (assign,nonatomic) BOOL shouldCopy; 
@property (assign,nonatomic) BOOL tryDeltaCopy; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)shouldCopy;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(void)setTransferPath:(NSURL *)arg1 ;
-(BOOL)_doInit;
-(NSURL *)transferPath;
-(void)setShouldCopy:(BOOL)arg1 ;
-(BOOL)tryDeltaCopy;
-(void)setTryDeltaCopy:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4 ;
-(Class)seedClass;
@end

