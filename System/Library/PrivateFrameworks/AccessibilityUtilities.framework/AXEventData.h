/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXEventData : NSObject {

	AXEventDataStorage _storage;

}

@property (nonatomic,readonly) long long eventSenderIdentifier; 
@property (nonatomic,readonly) BOOL wasPostedByAccessibility; 
@property (nonatomic,readonly) char* dataBytes; 
@property (nonatomic,readonly) long long dataLength; 
+(id)dataWithBytes:(char*)arg1 length:(long long)arg2 ;
+(id)dataWithSender:(long long)arg1 ;
-(id)init;
-(id)description;
-(char*)dataBytes;
-(long long)dataLength;
-(long long)eventSenderIdentifier;
-(BOOL)wasPostedByAccessibility;
@end

