//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AMZNUser : NSObject
{
    NSString *_userID;
    NSString *_name;
    NSString *_email;
    NSString *_postalCode;
    NSDictionary *_profileData;
}

+ (void)fetch:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSDictionary *profileData; // @synthesize profileData=_profileData;
@property(readonly, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)initWithProfileData:(id)arg1;

@end
