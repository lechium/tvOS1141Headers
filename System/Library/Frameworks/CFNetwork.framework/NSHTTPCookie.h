/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieInternal, NSDictionary, NSString, NSDate, NSURL, NSArray;

@interface NSHTTPCookie : NSObject {

	NSHTTPCookieInternal* _cookiePrivate;

}

@property (copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long version; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * value; 
@property (copy,readonly) NSDate * expiresDate; 
@property (getter=isSessionOnly,readonly) BOOL sessionOnly; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * path; 
@property (getter=isSecure,readonly) BOOL secure; 
@property (getter=isHTTPOnly,readonly) BOOL HTTPOnly; 
@property (copy,readonly) NSString * comment; 
@property (copy,readonly) NSURL * commentURL; 
@property (copy,readonly) NSArray * portList; 
+(id)requestHeaderFieldsWithCookies:(id)arg1 ;
+(id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
+(const CFArrayRef)_ns2cfCookies:(id)arg1 ;
+(id)_cf2nsCookies:(CFArrayRef)arg1 ;
+(id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(BOOL)arg3 ;
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3 ;
+(id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)cookieWithProperties:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(NSURL *)commentURL;
-(id)_storagePartition;
-(NSArray *)portList;
-(BOOL)isHTTPOnly;
-(const OpaqueCFHTTPCookieRef)_GetInternalCFHTTPCookie;
-(const OpaqueCFHTTPCookieRef)_CFHTTPCookie;
-(id)Name;
-(id)Value;
-(id)Domain;
-(id)Path;
-(id)Expires;
-(id)Comment;
-(id)CommentURL;
-(id)StoragePartition;
-(id)OriginURL;
-(id)Version;
-(id)Secure;
-(id)Discard;
-(id)Port;
-(id)MaxAge;
-(long long)_compareForHeaderOrder:(id)arg1 ;
-(NSString *)comment;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)path;
-(BOOL)isSecure;
-(NSString *)value;
-(id)_key;
-(id)initWithProperties:(id)arg1 ;
-(unsigned long long)version;
-(NSDictionary *)properties;
-(BOOL)_isExpired;
-(BOOL)isSessionOnly;
-(NSDate *)expiresDate;
@end

