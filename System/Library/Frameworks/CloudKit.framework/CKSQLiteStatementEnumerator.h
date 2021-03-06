/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator {

	BOOL _closed;
	CKSQLiteStatement* _statement;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL closed;                                //@synthesize closed=_closed - In the implementation block
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(void)close;
-(CKSQLiteStatement *)statement;
-(void)setStatement:(CKSQLiteStatement *)arg1 ;
-(id)initWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end

