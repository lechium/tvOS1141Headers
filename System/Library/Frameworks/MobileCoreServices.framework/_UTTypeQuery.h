/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery {

	unsigned long long _flags;

}

@property (assign,setter=_setResolveInactiveDeclarations:,nonatomic) BOOL _resolveInactiveDeclarations; 
+(id)typeQueryWithIdentifier:(id)arg1 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4 ;
+(id)typeQueryForAllDeclaredIdentifiers;
+(id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 ;
-(id)resolve;
-(BOOL)_resolveInactiveDeclarations;
-(void)_setResolveInactiveDeclarations:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

