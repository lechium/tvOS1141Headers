/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSString, NSData, NSObject, NSInputStream, NSArray, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _additionalMetrics;
	long long _allowedRetryCount;
	BOOL _allowsBootstrapCellularData;
	unsigned long long _cachePolicy;
	NSString* _clientAuditBundleIdentifier;
	NSData* _clientAuditTokenData;
	NSString* _clientIdentifier;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _expectedContentLength;
	NSData* _httpBody;
	NSInputStream* _httpBodyStream;
	NSDictionary* _httpHeaders;
	NSString* _httpMethod;
	BOOL _isITunesStoreRequest;
	long long _kbsyncType;
	BOOL _largeDownload;
	long long _machineDataStyle;
	unsigned long long _networkServiceType;
	NSDictionary* _requestParameters;
	BOOL _requiresCellularDataNetwork;
	char _requiresExtendedValidationCertificates;
	BOOL _requiresExternal;
	BOOL _requiresHTTPS;
	BOOL _shouldDecodeResponse;
	BOOL _shouldDisableCellular;
	BOOL _shouldDisableCellularFallback;
	BOOL _shouldDisableReversePush;
	BOOL _shouldProcessProtocol;
	BOOL _shouldSendSecureToken;
	BOOL _shouldSetCookies;
	double _timeoutInterval;
	NSString* _urlBagKey;
	long long _urlBagType;
	/*^block*/id _urlBagURLBlock;
	NSArray* _urls;
	NSArray* _userAgentComponents;

}

@property (copy,readonly) NSDictionary * additionalMetrics; 
@property (readonly) BOOL allowsBootstrapCellularData; 
@property (readonly) BOOL canBeResolved; 
@property (copy,readonly) NSString * clientAuditBundleIdentifier; 
@property (copy,readonly) NSData * clientAuditTokenData; 
@property (readonly) NSString * clientBundleIdentifier; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) long long KBSyncType; 
@property (getter=isLargeDownload,readonly) BOOL largeDownload; 
@property (readonly) BOOL requiresCellularDataNetwork; 
@property (readonly) BOOL requiresExtendedValidationCertificates; 
@property (readonly) BOOL requiresExternal; 
@property (readonly) BOOL requiresHTTPS; 
@property (readonly) BOOL shouldAddKBSyncData; 
@property (readonly) BOOL shouldDecodeResponse; 
@property (readonly) BOOL shouldDisableCellularFallback; 
@property (readonly) BOOL shouldDisableCellular; 
@property (readonly) BOOL shouldDisableReversePush; 
@property (readonly) BOOL shouldProcessProtocol; 
@property (readonly) BOOL shouldSendSecureToken; 
@property (readonly) BOOL shouldSetCookies; 
@property (readonly) long long URLBagType; 
@property (copy,readonly) id URLBagURLBlock; 
@property (copy,readonly) NSArray * URLs; 
@property (readonly) long long allowedRetryCount; 
@property (copy,readonly) NSString * clientIdentifier; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSData * HTTPBody; 
@property (copy,readonly) NSDictionary * HTTPHeaders; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest; 
@property (readonly) long long machineDataStyle; 
@property (readonly) unsigned long long networkServiceType; 
@property (copy,readonly) NSDictionary * requestParameters; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSString * URLBagKey; 
@property (retain,readonly) NSURL * URL; 
@property (copy,readonly) NSArray * userAgentComponents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)networkServiceType;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(NSString *)HTTPMethod;
-(NSData *)HTTPBody;
-(long long)expectedContentLength;
-(NSString *)clientIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSArray *)URLs;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)HTTPHeaders;
-(BOOL)isITunesStoreRequest;
-(id)copyURLRequest;
-(BOOL)shouldDecodeResponse;
-(long long)machineDataStyle;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldSetCookies;
-(NSArray *)userAgentComponents;
-(BOOL)allowsBootstrapCellularData;
-(NSDictionary *)requestParameters;
-(id)_initCommon;
-(NSInputStream *)HTTPBodyStream;
-(NSString *)clientAuditBundleIdentifier;
-(NSData *)clientAuditTokenData;
-(long long)allowedRetryCount;
-(long long)URLBagType;
-(NSDictionary *)additionalMetrics;
-(BOOL)shouldProcessProtocol;
-(BOOL)shouldSendSecureToken;
-(NSString *)clientBundleIdentifier;
-(NSString *)URLBagKey;
-(BOOL)canBeResolved;
-(BOOL)isLargeDownload;
-(long long)KBSyncType;
-(BOOL)requiresCellularDataNetwork;
-(BOOL)requiresExtendedValidationCertificates;
-(BOOL)requiresExternal;
-(BOOL)requiresHTTPS;
-(BOOL)shouldAddKBSyncData;
-(BOOL)shouldDisableCellularFallback;
-(BOOL)shouldDisableReversePush;
-(id)URLBagURLBlock;
-(id)initWithURLRequest:(id)arg1 ;
@end
