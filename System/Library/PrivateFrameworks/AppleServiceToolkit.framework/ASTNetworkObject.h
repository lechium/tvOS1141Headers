/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTConnection;
@class NSMutableData;

@interface ASTNetworkObject : NSObject {

	id<ASTConnection> _connection;
	NSMutableData* _receivedData;

}

@property (nonatomic,retain) id<ASTConnection> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;              //@synthesize receivedData=_receivedData - In the implementation block
-(NSMutableData *)receivedData;
-(id<ASTConnection>)connection;
-(void)setConnection:(id<ASTConnection>)arg1 ;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end

