/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFCancelable.h>
#import <libobjc.A.dylib/MFCancelationToken.h>

@protocol MFCancelationToken <NSObject>
@property (getter=isCanceled,readonly) BOOL canceled; 
@required
-(BOOL)isCanceled;

@end


@class NSLock, NSMutableArray, NSString;

@interface MFCancelationToken : NSObject <MFCancelable, MFCancelationToken> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isCanceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,readonly) BOOL canceled; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(id)_nts_cancel;
-(void)addCancelable:(id)arg1 ;
-(BOOL)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
@end

