/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSNumber, NSArray;

@interface DMFAssignUserRequest : CATTaskRequest {

	NSString* _userIdentifier;
	NSNumber* _groupID;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _imageURL;
	NSString* _fullScreenImageURL;
	NSString* _appleID;
	NSString* _passcodeType;
	NSString* _password;
	NSArray* _enrolledGroupIdentifiers;

}

@property (nonatomic,copy) NSString * userIdentifier;                       //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * groupID;                              //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                            //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                           //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * fullScreenImageURL;                   //@synthesize fullScreenImageURL=_fullScreenImageURL - In the implementation block
@property (nonatomic,copy) NSString * appleID;                              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * passcodeType;                         //@synthesize passcodeType=_passcodeType - In the implementation block
@property (nonatomic,copy) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSArray * enrolledGroupIdentifiers;              //@synthesize enrolledGroupIdentifiers=_enrolledGroupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)familyName;
-(NSString *)displayName;
-(NSString *)password;
-(NSString *)appleID;
-(void)setImageURL:(NSString *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)imageURL;
-(NSString *)givenName;
-(NSString *)fullScreenImageURL;
-(NSString *)passcodeType;
-(NSArray *)enrolledGroupIdentifiers;
-(void)setFullScreenImageURL:(NSString *)arg1 ;
-(void)setPasscodeType:(NSString *)arg1 ;
-(void)setEnrolledGroupIdentifiers:(NSArray *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(NSString *)userIdentifier;
-(void)setPassword:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
@end

