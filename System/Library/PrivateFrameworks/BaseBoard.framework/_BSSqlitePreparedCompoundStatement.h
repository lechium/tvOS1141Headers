/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSSqlitePreparedStatement.h>

@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {

	NSArray* _statements;

}
-(id)initWithDatabaseConnection:(id)arg1 statements:(id)arg2 ;
-(void)dealloc;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

