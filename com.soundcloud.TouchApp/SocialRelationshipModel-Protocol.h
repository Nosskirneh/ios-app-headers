//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, Urn;

@protocol SocialRelationshipModel <NSObject>
@property(nonatomic) _Bool isPro;
@property(nonatomic) long long followingsCount;
@property(nonatomic) long long followersCount;
@property(retain, nonatomic) NSString *country;
@property(retain, nonatomic) NSString *city;
@property(retain, nonatomic) NSString *username;
@property(retain, nonatomic) Urn *urn;
@end

