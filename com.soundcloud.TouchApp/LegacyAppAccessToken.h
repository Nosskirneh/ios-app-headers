//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface LegacyAppAccessToken : NSObject <NSCoding>
{
    NSString *_accessToken;
}

+ (id)serviceNameWithProvider:(id)arg1;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)legacyAppTokenQuery;
- (void)removeLegacyTokensFromDefaultKeychain;
- (id)tokenFromDefaultKeychain;

@end

