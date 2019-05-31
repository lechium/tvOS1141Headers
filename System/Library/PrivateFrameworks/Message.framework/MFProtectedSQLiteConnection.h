/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {

	NSString* _vfsName;
	BOOL _attached;

}

@property (nonatomic,readonly) BOOL isProtectedDatabaseAttached;              //@synthesize attached=_attached - In the implementation block
-(void)dealloc;
-(void)close;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isProtectedDatabaseAttached;
-(int)attachProtectedDatabase;
-(int)detachProtectedDatabase;
-(const char*)_vfsModuleName;
@end
