/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@protocol BRProgressProxyDelegate;
@class NSURL;

@interface BRProgressProxy : NSProgress {

	NSURL* _url;
	id _globalProgressSubscriber;
	id<BRProgressProxyDelegate> _delegate;

}

@property (__weak) id<BRProgressProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BRProgressProxyDelegate>)delegate;
-(void)setDelegate:(id<BRProgressProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
