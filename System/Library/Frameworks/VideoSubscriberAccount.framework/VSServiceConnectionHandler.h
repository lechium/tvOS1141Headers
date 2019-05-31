/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSServiceConnectionHandlerDelegate;
@class NSXPCConnection;

@interface VSServiceConnectionHandler : NSObject {

	NSXPCConnection* _connection;
	id<VSServiceConnectionHandlerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<VSServiceConnectionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSServiceConnectionHandlerDelegate>)delegate;
-(void)setDelegate:(id<VSServiceConnectionHandlerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_didFinish;
@end

