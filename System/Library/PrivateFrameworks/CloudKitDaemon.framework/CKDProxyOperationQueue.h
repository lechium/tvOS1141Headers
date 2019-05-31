/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue {

	CKDClientProxy* _proxy;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(CKDClientProxy *)proxy;
-(void)addOperation:(id)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(void)setProxy:(CKDClientProxy *)arg1 ;
@end

