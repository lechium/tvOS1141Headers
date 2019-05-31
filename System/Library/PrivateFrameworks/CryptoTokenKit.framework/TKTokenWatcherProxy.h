/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcher.h>

@class TKTokenWatcher;

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcher> {

	TKTokenWatcher* _watcher;

}
-(void)insertedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithWatcher:(id)arg1 ;
@end
