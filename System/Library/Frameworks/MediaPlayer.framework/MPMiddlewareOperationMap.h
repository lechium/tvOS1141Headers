/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {

	NSMapTable* _middlewareOperationMap;
	NSMutableArray* _middleware;
	NSMutableArray* _operations;

}
+(id)mapForRequest:(id)arg1 ;
-(id)_init;
-(id)allMiddleware;
-(id)operationsForMiddleware:(id)arg1 ;
-(id)allOperations;
@end
