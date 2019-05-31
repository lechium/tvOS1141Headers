/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaStream/MediaStream-Structs.h>
@class MSAlertManager, NSString;

@interface MSAMNotificationInfo : NSObject {

	MSAlertManager* _owner;
	NSString* _personID;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _runLoopSource;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) MSAlertManager * owner;                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * personID;                                 //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource; 
@property (assign,nonatomic) CFUserNotificationRef userNotification; 
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)info;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(MSAlertManager *)owner;
-(void)setOwner:(MSAlertManager *)arg1 ;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFUserNotificationRef)userNotification;
-(void)setUserNotification:(CFUserNotificationRef)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
@end
