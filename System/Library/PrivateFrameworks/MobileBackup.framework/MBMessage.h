/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, NSError, NSString, NSArray;

@interface MBMessage : NSObject <NSKeyedArchiverDelegate> {

	NSObject*<OS_xpc_object> _xpcObject;
	NSMutableDictionary* _messageInfo;
	NSMutableDictionary* _replyInfo;

}

@property (nonatomic,copy) NSObject*<NSSecureCoding>*<NSCopying> reply; 
@property (nonatomic,copy) NSError * replyError; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * arguments; 
@property (nonatomic,copy) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithName:(id)arg1 arguments:(id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)archiver:(id)arg1 didEncodeObject:(id)arg2 ;
-(NSError *)replyError;
-(id)_initWithXPCObject:(id)arg1 ;
-(id)_xpcObject;
-(id)_allowedClasses;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(void)sendReply;
-(void)setReplyError:(NSError *)arg1 ;
-(void)setReply:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(NSObject*<NSSecureCoding>*<NSCopying>)reply;
-(NSArray *)arguments;
@end

