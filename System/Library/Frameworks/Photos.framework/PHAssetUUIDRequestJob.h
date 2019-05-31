/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString;

@interface PHAssetUUIDRequestJob : PLDaemonJob {

	NSString* _uuid;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)requestUUIDWithCustomUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)run;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)handleReply;
@end

