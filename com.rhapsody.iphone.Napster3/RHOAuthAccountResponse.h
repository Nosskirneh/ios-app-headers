//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RHOAuthAccountResponse : NSObject
{
    NSString *_guid;
    NSString *_oauthPartnerUserId;
}

+ (id)parseResponse:(id)arg1;
@property(retain, nonatomic) NSString *oauthPartnerUserId; // @synthesize oauthPartnerUserId=_oauthPartnerUserId;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;

@end

