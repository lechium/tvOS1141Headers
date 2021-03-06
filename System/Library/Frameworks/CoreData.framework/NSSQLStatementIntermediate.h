/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSSQLOrderIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {

	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOrderIntermediate* _orderIntermediate;

}
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(void)setLimitIntermediate:(id)arg1 ;
-(id)whereIntermediate;
-(id)governingAlias;
-(void)setWhereIntermediate:(id)arg1 ;
-(void)setOrderIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(id)limitIntermediate;
-(id)governingEntity;
-(void)setGoverningAlias:(id)arg1 ;
-(void)setCorrelationToken:(id)arg1 ;
-(void)setGoverningEntity:(id)arg1 ;
-(id)orderIntermediate;
-(void)dealloc;
@end

