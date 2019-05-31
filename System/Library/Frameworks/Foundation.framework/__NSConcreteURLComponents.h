/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	CFURLComponentsRef _components;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(CFURLComponentsRef)__cfComponents;
-(id)URLRelativeToURL:(id)arg1 ;
-(id)percentEncodedUser;
-(void)setPercentEncodedUser:(id)arg1 ;
-(id)percentEncodedPassword;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(id)percentEncodedHost;
-(void)setPercentEncodedHost:(id)arg1 ;
-(id)percentEncodedPath;
-(void)setPercentEncodedPath:(id)arg1 ;
-(id)percentEncodedQuery;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(id)percentEncodedFragment;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfFragment;
-(id)percentEncodedQueryItems;
-(void)setPercentEncodedQueryItems:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(id)queryItems;
-(void)setQueryItems:(id)arg1 ;
-(void)setScheme:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)scheme;
-(id)query;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)setPath:(id)arg1 ;
-(id)URL;
-(id)initWithString:(id)arg1 ;
-(id)host;
-(id)fragment;
-(id)port;
-(id)password;
-(void)setFragment:(id)arg1 ;
-(id)user;
-(void)setUser:(id)arg1 ;
-(void)setPort:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
@end

