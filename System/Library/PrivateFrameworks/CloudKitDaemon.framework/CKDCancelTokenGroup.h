/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling> {

	NSMutableArray* _cancelTokens;

}

@property (nonatomic,retain) NSMutableArray * cancelTokens;              //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(id)init;
-(void)cancel;
-(NSMutableArray *)cancelTokens;
-(void)setCancelTokens:(NSMutableArray *)arg1 ;
-(void)removeAllCancelTokens;
-(void)addCancelToken:(id)arg1 ;
-(void)removeCancelToken:(id)arg1 ;
@end

