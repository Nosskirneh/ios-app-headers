//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ServiceToken-Protocol.h"

@class NSString;

@interface FacebookServiceToken : NSObject <ServiceToken>
{
    NSString *_accessToken;
}

@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)refreshToken;
- (long long)service;
- (id)initWithAccessToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

