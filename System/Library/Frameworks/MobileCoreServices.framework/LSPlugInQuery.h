/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
+(id)pluginQuery;
+(id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
+(id)pluginQueryWithUUID:(id)arg1 ;
+(id)pluginQueryWithIdentifier:(id)arg1 ;
+(id)pluginQueryWithURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(/*^block*/id)arg3 context:(LSContext*)arg4 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

