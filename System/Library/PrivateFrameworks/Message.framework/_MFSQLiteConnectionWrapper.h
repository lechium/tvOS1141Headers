/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFSQLiteConnection;

@interface _MFSQLiteConnectionWrapper : NSObject {

	MFSQLiteConnection* _connection;
	unsigned long long _generation;
	unsigned long long _type;

}

@property (nonatomic,readonly) MFSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(MFSQLiteConnection *)connection;
-(unsigned long long)generation;
-(id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2 ;
@end

