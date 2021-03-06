//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface UAChannelRegistrationPayload : NSObject <NSCopying>
{
    _Bool _optedIn;
    _Bool _setTags;
    _Bool _backgroundEnabled;
    NSString *_userID;
    NSString *_deviceID;
    NSString *_pushAddress;
    NSArray *_tags;
    NSString *_alias;
    NSDictionary *_quietTime;
    NSString *_language;
    NSString *_country;
    NSString *_timeZone;
    NSNumber *_badge;
}

@property(nonatomic, getter=isBackgroundEnabled) _Bool backgroundEnabled; // @synthesize backgroundEnabled=_backgroundEnabled;
@property(retain, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSDictionary *quietTime; // @synthesize quietTime=_quietTime;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) _Bool setTags; // @synthesize setTags=_setTags;
@property(copy, nonatomic) NSString *pushAddress; // @synthesize pushAddress=_pushAddress;
@property(nonatomic, getter=isOptedIn) _Bool optedIn; // @synthesize optedIn=_optedIn;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToPayload:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)payloadDictionary;
- (id)asJSONData;

@end

